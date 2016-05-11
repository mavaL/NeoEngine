#include "stdafx.h"
#include "ShadowMap.h"
#include "D3D11RenderTarget.h"
#include "D3D11RenderSystem.h"
#include "SceneManager.h"
#include "Scene.h"
#include "Camera.h"
#include "ConvexBody.h"
#include "ShadowMapLispPSM.h"
#include <d3dx9.h>

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

		////////// Calc intersection body B
		PointListBody bodyB_ws;
		bodyB_ws.reset();

		// Initial with viewer frustum
		ConvexBody convexBodyB;
		convexBodyB.define(*cam);

		convexBodyB.clip(g_env.pSceneMgr->GetCurScene()->GetSceneAABB());

		bodyB_ws.build(convexBodyB);

		PointListBody bodyB_es;
		for (size_t i = 0; i < bodyB_ws.getPointCount(); ++i)
		{
			VEC3 pt_es = Common::Transform_Vec3_By_Mat44(bodyB_ws.getPoint(i), cam->GetViewMatrix(), true).GetVec3();
			bodyB_es.addPoint(pt_es);
		}

		//  compute the "light-space" basis, using the algorithm described in the paper
		//  note:  since bodyB is defined in eye space, all of these vectors should also be defined in eye space
		VEC3 leftVector, upVector, viewVector;

		const VEC3 eyeVector(0.f, 0.f, -1.f);  // eye vector in eye space is always -Z
		upVector = Common::Transform_Vec3_By_Mat44(vInvLightDir, cam->GetViewMatrix(), false).GetVec3();

		//  note: lightDir points away from the scene, so it is already the "negative" up direction;
		//  no need to re-negate it.
		leftVector = Common::CrossProduct_Vec3_By_Vec3(upVector, eyeVector);
		leftVector.Normalize();
		viewVector = Common::CrossProduct_Vec3_By_Vec3(upVector, leftVector);

		MAT44 lightSpaceBasis(
		leftVector.x, upVector.x, viewVector.x, 0.f,
		leftVector.y, upVector.y, viewVector.y, 0.f,
		leftVector.z, upVector.z, viewVector.z, 0.f,
		0.f,          0.f,        0.f,          1.f);

		// BodyB in light space
		AABB bodyB_ls_aabb;
		PointListBody bodyB_ls;
		for (size_t i = 0; i < bodyB_es.getPointCount(); ++i)
		{
			VEC3 pt_ls = Common::Transform_Vec3_By_Mat44(bodyB_es.getPoint(i), lightSpaceBasis, true).GetVec3();
			bodyB_ls_aabb.Merge(pt_ls);
			bodyB_ls.addPoint(pt_ls);
		}

		//  these are the limits specified by the physical camera
		//  gamma is the "tilt angle" between the light and the view direction.
		const MAT44& matCameraView = cam->GetViewMatrix();
		float m_fCosGamma = vInvLightDir.x * matCameraView.m02 +
			vInvLightDir.y * matCameraView.m12 +
			vInvLightDir.z * matCameraView.m22;

		//  for some reason, the paper recommended using the x coordinate of the xformed viewpoint as
		//  the x-origin for lightspace, but that doesn't seem to make sense...  instead, we'll take
		//  the x-midpt of body B (like for the Y axis)
		VEC3 lightSpaceOrigin = bodyB_ls_aabb.GetCenter();
		float sinGamma = sqrtf(1.f - m_fCosGamma*m_fCosGamma);

		//  use average of the "real" near/far distance and the optimized near/far distance to get a more pleasant result
		const float ZFAR_MAX = 1000.0f;
		const float ZNEAR_MIN = 1.0f;
		AABB aabb_es = g_env.pSceneMgr->GetCurScene()->GetSceneShadowReceiverAABB();
		aabb_es.Transform(matCameraView);

		float nz = max(ZNEAR_MIN, aabb_es.m_minCorner.z);
		float fz = min(ZFAR_MAX, aabb_es.m_maxCorner.z);

		float Nopt0 = nz + sqrtf(nz * fz);
		float Nopt1 = ZNEAR_MIN + sqrtf(ZNEAR_MIN*ZFAR_MAX);
		float m_fLSPSM_Nopt = (Nopt0 + Nopt1) / (2.f*sinGamma);
		//  add a constant bias, to guarantee some minimum distance between the projection point and the near plane
		m_fLSPSM_Nopt += 0.1f;
		//  now use the weighting to scale between 0.1 and the computed Nopt
		float m_fLSPSM_NoptWeight = 1.0f;
		float Nopt = 0.1f + m_fLSPSM_NoptWeight * (m_fLSPSM_Nopt - 0.1f);

		lightSpaceOrigin.z = bodyB_ls_aabb.m_minCorner.z - Nopt;

		//  xlate all points in lsBodyB, to match the new lightspace origin, and compute the fov and aspect ratio
		float maxx=0.f, maxy=0.f, maxz=0.f;

		for (size_t i = 0; i < bodyB_ls.getPointCount(); ++i)
		{
			VEC3 tmp = bodyB_ls.getPoint(i) - lightSpaceOrigin;
			assert(tmp.z > 0.f);
			maxx = max(maxx, fabsf(tmp.x / tmp.z));
			maxy = max(maxy, fabsf(tmp.y / tmp.z));
			maxz = max(maxz, tmp.z);
		}

		float fovy = atanf(maxy);
		float fovx = atanf(maxx);

		MAT44 lsTranslate, lsPerspective;  

		lsTranslate.MakeIdentity();
		lsTranslate.SetTranslation(-lightSpaceOrigin);

		D3DXMatrixPerspectiveLH( (D3DXMATRIX*)&lsPerspective, 2.f*maxx*Nopt, 2.f*maxy*Nopt, Nopt, maxz );

		lightSpaceBasis = lightSpaceBasis * lsTranslate;
		lightSpaceBasis = lightSpaceBasis * lsPerspective;

		//  now rotate the entire post-projective cube, so that the shadow map is looking down the Y-axis
		MAT44 lsOrtho;
		MAT44 lsPermute(
			1.f,	0.f,	0.f,	0.f,
			0.f,	0.f,	-1.f,	0.f,
			0.f,	1.f,	0.f,	0.f,
			0.f,	-0.5f,	1.5f,	1.f);

		D3DXMatrixOrthoLH((D3DXMATRIX*)&lsOrtho, 2.f, 1.f, 0.5f, 2.5f);
		lsPermute = lsPermute * lsOrtho;
		lightSpaceBasis = lightSpaceBasis * lsPermute;

		m_matLightView = matCameraView * lightSpaceBasis;
		m_matLightProj.MakeIdentity();

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
	VEC3 ShadowMap::_GetNearestCameraPoint_ws(const MAT44& matView, const PointListBody& body)
	{
		if (body.getPointCount() == 0)
			return VEC3::ZERO;

		VEC3 nearEye = Common::Transform_Vec3_By_Mat44(body.getPoint(0), matView, true).GetVec3();	// for comparison
		VEC3 nearWorld = body.getPoint(0);				// represents the final point

		// store the vertex with the highest z-value which is the nearest point
		for (size_t i = 1; i < body.getPointCount(); ++i)
		{
			const VEC3& vWorld = body.getPoint(i);

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
}