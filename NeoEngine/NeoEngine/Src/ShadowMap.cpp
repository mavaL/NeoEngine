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
		VEC3 vLightDir = g_env.pSceneMgr->GetSunLight().lightDir;
		vLightDir.Normalize();
		VEC3 vInvLightDir = vLightDir;
		vInvLightDir.Neg();
		VEC3 vLookAt = Common::Add_Vec3_By_Vec3(cam->GetPos(), vLightDir);

		m_matLightView = Common::BuildViewMatrix(cam->GetPos(), vLookAt, cam->GetDirection());

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
		const float fMaxShadowDist = 1000;
		bodyB.buildAndIncludeDirection(convexBodyB, cam->GetNearClip() * fMaxShadowDist, vInvLightDir);
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

		MAT44 matD3D;
		// GL NDC z: [-1, 1] -> D3D NDC z: [0, 1]
		matD3D.MakeIdentity();
		matD3D.m22 = 0.5f;
		matD3D.m32 = 0.5f;
		matLS = matLS * matD3D;

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

		// Calculate the optimal distance between projection center and near plane
		float n_opt = _CalcNOpt(bodyB_ls, bodyLVS, matLS);
		
		if (n_opt <= 0.0)
		{
			return MAT44::IDENTITY;
		}

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
			-vMin.z / (vMax.z - vMin.z));

		VEC3 scale(2 / (vMax.x - vMin.x),
			2 / (vMax.y - vMin.y),
			2 / (vMax.z - vMin.z));

		MAT44 mOut;
		mOut.MakeIdentity();
		mOut.SetTranslation(trans);
		mOut.SetScale(scale);

		return mOut;
	}
	//------------------------------------------------------------------------------------
	float ShadowMap::_CalcNOpt(const AABB& bodyB_ls, const PointListBody& bodyLVS, const MAT44& matLS)
	{
		Camera* cam = g_env.pSceneMgr->GetCamera();
		const float fOptimalAdjustFactor = 0.1f;	// Controls perspetive warping effect, the factor smaller, the warping effect stronger.

		// get inverse light space matrix
		MAT44 invLightSpace = matLS;
		invLightSpace.Inverse();

		// get view matrix
		const MAT44& viewMatrix = cam->GetViewMatrix();

		// calculate z0_ls
		const VEC3 e_ws = _GetNearestCameraPoint_ws(viewMatrix, bodyLVS);
		const VEC3 z0_ls = _CalculateZ0_ls(matLS, e_ws, bodyB_ls.m_minCorner.z);

		// z1_ls has the same x and y values as z0_ls and the minimum z values of bodyABB_ls
		const VEC3 z1_ls = VEC3(z0_ls.x, z0_ls.y, bodyB_ls.m_maxCorner.z);

		// world
		const VEC3 z0_ws = Common::Transform_Vec3_By_Mat44(z0_ls, invLightSpace, true).GetVec3();
		const VEC3 z1_ws = Common::Transform_Vec3_By_Mat44(z1_ls, invLightSpace, true).GetVec3();

		// eye
		const VEC3 z0_es = Common::Transform_Vec3_By_Mat44(z0_ws, viewMatrix, true).GetVec3();
		const VEC3 z1_es = Common::Transform_Vec3_By_Mat44(z1_ws, viewMatrix, true).GetVec3();

		const float z0 = z0_es.z;
		const float z1 = z1_es.z;

		// check if we have to do uniform shadow mapping
		if ((z0 > 0 && z1 < 0) ||
			(z1 > 0 && z0 < 0))
		{
			// apply uniform shadow mapping
			return 0.0;
		}
		return cam->GetNearClip() + sqrtf(z0 * z1) * fOptimalAdjustFactor;
	}
	//------------------------------------------------------------------------------------
	VEC3 ShadowMap::_CalculateZ0_ls(const MAT44& matLS, const VEC3& e, float bodyB_zMax_ls)
	{
		// z0_ls lies on the intersection point between the planes 'bodyB_ls near plane 
		// (z = bodyB_zNear_ls)' and plane with normal UNIT_X where e_ls lies upon (x = e_ls_x) 
		// and the camera's near clipping plane (ls). We are looking towards the negative 
		// z-direction, so bodyB_zNear_ls equals bodyB_zMax_ls.

		Camera* cam = g_env.pSceneMgr->GetCamera();
		const VEC3& camDir = cam->GetDirection();
		const VEC3 e_ls = Common::Transform_Vec3_By_Mat44(e, matLS, true).GetVec3();

		// set up a plane with the camera direction as normal and e as a point on the plane
		PLANE plane;
		plane.Redefine(camDir, e);

		plane = Common::Transform_Plane_By_Mat44(plane, matLS);

		// try to intersect plane with a ray from origin V3(e_ls_x, 0.0, bodyB_zNear_ls)T
		// and direction +/- UNIT_Y
		RAY ray(VEC3(e_ls.x, 0.0, bodyB_zMax_ls), VEC3::UNIT_Y);
		std::pair< bool, float > intersect = ray.Intersects(plane);

		// we got an intersection point
		if (intersect.first == true)
		{
			return ray.GetPoint(intersect.second);
		}
		else
		{
			// try the other direction
			ray = RAY(VEC3(e_ls.x, 0.0, bodyB_zMax_ls), VEC3::NEG_UNIT_Y);
			intersect = ray.Intersects(plane);

			// we got an intersection point
			if (intersect.first == true)
			{
				return ray.GetPoint(intersect.second);
			}
			else
			{
				// failure!
				return VEC3::ZERO;
			}
		}
	}

}