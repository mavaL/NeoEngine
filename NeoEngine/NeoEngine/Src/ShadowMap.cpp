#include "stdafx.h"
#include "ShadowMap.h"
#include "D3D11RenderTarget.h"
#include "D3D11RenderSystem.h"
#include "SceneManager.h"
#include "Scene.h"
#include "Camera.h"
#include "ConvexBody.h"
#include "ShadowMapLispPSM.h"

#define USE_LISPPSM		1

namespace Neo
{

	//------------------------------------------------------------------------------------
	ShadowMap::ShadowMap()
	{
		D3D11RenderSystem* pRenderSystem = g_env.pRenderSystem;

		m_pRT_ShadowMap = new D3D11RenderTarget;
		// FIXME: Shadow map doesn't really need a frame buffer.
		m_pRT_ShadowMap->Init(SHADOW_MAP_SIZE, SHADOW_MAP_SIZE, ePF_A8R8G8B8, true, false, true);
		m_pRT_ShadowMap->SetRenderPhase(eRenderPhase_ShadowMap);

		m_depthBiasRasterDesc = pRenderSystem->GetRasterizeDesc();
		SetDepthBias(100000);
	}
	//------------------------------------------------------------------------------------
	ShadowMap::~ShadowMap()
	{
		SAFE_RELEASE(m_pRT_ShadowMap);
	}
	//------------------------------------------------------------------------------------
	void ShadowMap::SetDepthBias( int bias )
	{
		m_depthBiasRasterDesc.DepthBias = bias;
		m_depthBiasRasterDesc.DepthBiasClamp = 0.0f;
		m_depthBiasRasterDesc.SlopeScaledDepthBias = 1.0f;
	}
	//------------------------------------------------------------------------------------
	void ShadowMap::Render()
	{
		D3D11RenderSystem* pRenderSystem = g_env.pRenderSystem;

		// Turn on depth bias
		D3D11_RASTERIZER_DESC oldDesc = pRenderSystem->GetRasterizeDesc();
		pRenderSystem->SetRasterizeDesc(m_depthBiasRasterDesc);

		// Set light space transform
		pRenderSystem->SetTransform(eTransform_View, m_matLightView, false);
		pRenderSystem->SetTransform(eTransform_Proj, m_matLightProj, true);

		m_pRT_ShadowMap->Update();

		// Restore render states
		Camera* cam = g_env.pSceneMgr->GetCamera();
		pRenderSystem->SetTransform(eTransform_View, cam->GetViewMatrix(), false);
		pRenderSystem->SetTransform(eTransform_Proj, cam->GetProjMatrix(), true);

		pRenderSystem->SetRasterizeDesc(oldDesc);
	}
	//------------------------------------------------------------------------------------
	D3D11Texture* ShadowMap::GetShadowTexture()
	{
		return m_pRT_ShadowMap->GetDepthTexture();
	}
	//------------------------------------------------------------------------------------
	void ShadowMap::Update()
	{
#if USE_LISPPSM

		Camera* cam = g_env.pSceneMgr->GetCamera();
		VEC3 vInvLightDir = g_env.pSceneMgr->GetSunLight().lightDir;
		vInvLightDir.Neg();
		VEC3 vLookAt = Common::Add_Vec3_By_Vec3(cam->GetPos(), vInvLightDir);

		m_matLightView = Common::BuildViewMatrix(cam->GetPos(), vLookAt, cam->GetUp());

		// Transform to light space: y -> -z, z -> y
		const MAT44 matToLightSpace(
			1, 0, 0, 0,
			0, 0, 1, 0,
			0, -1, 0, 0,
			0, 0, 0, 1);

		MAT44 matLS= matToLightSpace;

		////////// Calc intersection body B
		PointListBody bodyB;
		bodyB.reset();

		// Initial with viewer frustum
		ConvexBody convexBodyB;
		convexBodyB.define(*cam);

		// Then clip it by shadow receiver aabb
		const AABB& abab = g_env.pSceneMgr->GetCurScene()->GetSceneShadowReceiverAABB();
		convexBodyB.clip(abab);

		// At last merge it with the light frustum
		bodyB.buildAndIncludeDirection(convexBodyB, cam->GetNearClip() * 3000, vInvLightDir);
		assert(bodyB.getPointCount() != 0);

		////////// Calc LVS volume which is: viewer frustum clipped by scene aabb, the result points are all in front of the camera.
		PointListBody bodyLVS;
		ConvexBody convexBodyLVS;

		convexBodyLVS.define(*cam);
		convexBodyLVS.clip(g_env.pSceneMgr->GetCurScene()->GetSceneAABB());
		bodyLVS.build(convexBodyLVS);

		////////// Get view direction in light space
		VEC3 vViewDirLS = _GetLightSpaceViewDir(m_matLightView * matLS, bodyLVS);

		////////// Add view dir to light space transform
		matLS = matLS * Common::BuildViewMatrix(VEC3::ZERO, vViewDirLS, VEC3::UNIT_Y);

		////////// Calc light space proj matrix
		matLS = matLS * _CalcLispPSMProjMatrix(bodyB, bodyLVS, m_matLightView * matLS);

		matLS = matLS * _TransformToUnitCube(m_matLightView * matLS, bodyB);

		// Transform from light space to normal: y -> z, z -> -y
		const MAT44 matLightSpaceToNormal(
			1,  0,  0,  0,	
			0,  0, -1,  0,	
			0,	1,  0,  0,	
			0,  0,  0,  1);	

		matLS = matLS * matLightSpaceToNormal;

		m_matLightProj = matLS;

#else

		// Compute light space view/proj matrix
		AABB sceneAABB = g_env.pSceneMgr->GetCurScene()->GetSceneAABB();

		VEC3 vInvLightDir = g_env.pSceneMgr->GetSunLight().lightDir;
		vInvLightDir.Neg();
		VEC3 vLightTarget = sceneAABB.GetCenter();
		VEC3 vLightPos = Common::Add_Vec3_By_Vec3(vLightTarget, Common::Multiply_Vec3_By_K(vInvLightDir, sceneAABB.m_boundingRadius));

		m_matLightView = Common::BuildViewMatrix(vLightPos, vLightTarget, VEC3::UNIT_Y);

		// NB: Compute frustum box in light space!
		AABB sceneAABBLS = sceneAABB;
		sceneAABBLS.Transform(m_matLightView);
		const VEC3 vAabbSize = sceneAABBLS.GetSize();
		const VEC3 vLightTargetLS = sceneAABBLS.GetCenter();

		float l = vLightTargetLS.x - vAabbSize.x * 0.5f;
		float b = vLightTargetLS.y - vAabbSize.y * 0.5f;
		float n = vLightTargetLS.z - vAabbSize.z * 0.5f;
		float r = vLightTargetLS.x + vAabbSize.x * 0.5f;
		float t = vLightTargetLS.y + vAabbSize.y * 0.5f;
		float f = vLightTargetLS.z + vAabbSize.z * 0.5f;

		m_matLightProj = Common::BuildOthroMatrix(l, r, b, t, n, f);

#endif

		MAT44 T(
			0.5f, 0.0f, 0.0f, 0.0f,
			0.0f, -0.5f, 0.0f, 0.0f,
			0.0f, 0.0f, 1.0f, 0.0f,
			0.5f, 0.5f, 0.0f, 1.0f);

		m_matShadowTransform = m_matLightView * m_matLightProj;
		m_matShadowTransform = m_matShadowTransform * T;
	}
	//------------------------------------------------------------------------------------
	VEC3 ShadowMap::_GetLightSpaceViewDir(const MAT44& matLS, const PointListBody& bodyLVS)
	{
		Camera* cam = g_env.pSceneMgr->GetCamera();

		// Can not transform viewer dir directly because of the perspective transform, had to transform points.
		const VEC3 vStart_ws = _GetNearestCameraPoint_ws(cam->GetViewMatrix(), bodyLVS);
		const VEC3 vEnd_ws = vStart_ws + cam->GetDirection();

		const VEC3 vStart_ls = Common::Transform_Vec3_By_Mat44(vStart_ws, matLS, true).GetVec3();
		const VEC3 vEnd_ls = Common::Transform_Vec3_By_Mat44(vEnd_ws, matLS, true).GetVec3();

		// Perpendicular with light dir
		VEC3 vResult(vEnd_ls - vStart_ls);
		vResult.y = 0;

		vResult.Normalize();

		return vResult;
	}
	//------------------------------------------------------------------------------------
	VEC3 ShadowMap::_GetNearestCameraPoint_ws(const MAT44& matView, const PointListBody& bodyLVS)
	{
		if (bodyLVS.getPointCount() == 0)
			return VEC3::ZERO;

		VEC3 nearEye = Common::Transform_Vec3_By_Mat44(bodyLVS.getPoint(0), matView, true).GetVec3();	// for comparison
		VEC3 nearWorld = bodyLVS.getPoint(0);				// represents the final point

		// store the vertex with the highest z-value which is the nearest point
		for (size_t i = 1; i < bodyLVS.getPointCount(); ++i)
		{
			const VEC3& vWorld = bodyLVS.getPoint(i);

			// comparison is done from the viewer
			VEC3 vEye = Common::Transform_Vec3_By_Mat44(vWorld, matView, true).GetVec3();

			if (vEye.z < nearEye.z)
			{
				nearEye = vEye;
				nearWorld = vWorld;
			}
		}

		return nearWorld;
	}
	//------------------------------------------------------------------------------------
	MAT44 ShadowMap::_CalcLispPSMProjMatrix(const PointListBody& bodyB, const PointListBody& bodyLVS, const MAT44& matLS)
	{
		// BodyB in light space
		AABB bodyB_ls;
		for (size_t i = 0; i < bodyB.getPointCount(); ++i)
		{
			VEC3 pt_ls = Common::Transform_Vec3_By_Mat44(bodyB.getPoint(i), matLS, true).GetVec3();
			bodyB_ls.Merge(pt_ls);
		}

		// Camera nearest point int light space
		Camera* cam = g_env.pSceneMgr->GetCamera();
		VEC3 vStart_ws = _GetNearestCameraPoint_ws(cam->GetViewMatrix(), bodyLVS);
		VEC3 vStart_ls = Common::Transform_Vec3_By_Mat44(vStart_ws, matLS, true).GetVec3();
		vStart_ls.z = bodyB_ls.m_minCorner.z;

		// Calculate the optimal distance between origin and near plane
		float n_opt;
		const float fOptimalAdjustFactor = 0.1f;	// Controls perspetive warping effect, the factor smaller, the warping effect stronger.

		VEC3 vStart_es = Common::Transform_Vec3_By_Mat44(vStart_ws, cam->GetViewMatrix(), true).GetVec3();
		n_opt = (vStart_es.z + sqrtf(cam->GetNearClip() * cam->GetFarClip())) * fOptimalAdjustFactor;
		assert(n_opt > 0);

		// Calc projection center
		VEC3 vProjCenter = vStart_ls - n_opt * VEC3::UNIT_Z;

		// Transform light frustum to projection center
		MAT44 matTrans;
		matTrans.MakeIdentity();
		matTrans.SetTranslation(-vProjCenter);

		// Build projection transform P
		float d = fabsf(bodyB_ls.m_maxCorner.z - bodyB_ls.m_minCorner.z);

		MAT44 P = _BuildFrustumProjection(-1, 1, 1, -1, n_opt, n_opt + d);

		return matTrans * P;
	}
	//------------------------------------------------------------------------------------
	MAT44 ShadowMap::_BuildFrustumProjection(float left, float right, float top, float bottom, float fNear, float fFar)
	{
		float a = fFar / (fFar - fNear);
		float b = -(fNear * fFar) / (fFar - fNear);

		MAT44 mat;
		mat.MakeIdentity();

		mat.m00 = 2 * fNear / (right - left);
		mat.m11 = 2 * fNear / (top - bottom);
		mat.m20 = (left + right) / (left - right);
		mat.m21 = (bottom + top) / (bottom - top);
		mat.m22 = a;
		mat.m23 = 1;
		mat.m32 = b;
		mat.m33 = 0;

		return mat;
	}
	//------------------------------------------------------------------------------------
	MAT44 ShadowMap::_TransformToUnitCube(const MAT44& matLS, const PointListBody& bodyB)
	{
		// BodyB in light space
		AABB bodyB_ls;
		for (size_t i = 0; i < bodyB.getPointCount(); ++i)
		{
			VEC3 pt_ls = Common::Transform_Vec3_By_Mat44(bodyB.getPoint(i), matLS, true).GetVec3();
			bodyB_ls.Merge(pt_ls);
		}

		VEC3 vMin = bodyB_ls.m_minCorner;
		VEC3 vMax = bodyB_ls.m_maxCorner;

		VEC3 trans(-(vMax.x + vMin.x) / (vMax.x - vMin.x),
			-(vMax.y + vMin.y) / (vMax.y - vMin.y),
			-(vMax.z + vMin.z) / (vMax.z - vMin.z));

		VEC3 scale(2 / (vMax.x - vMin.x),
			2 / (vMax.y - vMin.y),
			2 / (vMax.z - vMin.z));

		MAT44 mOut;
		mOut.MakeIdentity();
		mOut.SetTranslation(trans);
		mOut.SetScale(scale);

		return mOut;
	}

}