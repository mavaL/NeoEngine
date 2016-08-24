#include "stdafx.h"
#include "ShadowMap.h"
#include "D3D11RenderTarget.h"
#include "D3D11RenderSystem.h"
#include "SceneManager.h"
#include "Scene.h"
#include "Camera.h"
#include "ConvexBody.h"
#include "ShadowMapLispPSM.h"

#include "ShadowMapPSSM.h"
#include <d3dx9.h>


namespace Neo
{

	//------------------------------------------------------------------------------------
	ShadowMap::ShadowMap()
		:m_pRT_ShadowMap(nullptr)
	{
		D3D11RenderSystem* pRenderSystem = g_env.pRenderSystem;

		m_pPSSM = new ShadowMapPSSM;

		D3D11_SAMPLER_DESC samDesc = CD3D11_SAMPLER_DESC(CD3D11_DEFAULT());
		samDesc.Filter = D3D11_FILTER_COMPARISON_MIN_MAG_MIP_POINT;
		samDesc.ComparisonFunc = D3D11_COMPARISON_LESS;
		pRenderSystem->GetDevice()->CreateSamplerState(&samDesc, &m_pShadowSampler);
	}
	//------------------------------------------------------------------------------------
	ShadowMap::~ShadowMap()
	{
		SAFE_RELEASE(m_pRT_ShadowMap);
		SAFE_RELEASE(m_pShadowSampler);
		SAFE_DELETE(m_pPSSM);
	}
	//------------------------------------------------------------------------------------
	void ShadowMap::SetShadowMapSize(uint32 nSize)
	{
#if USE_PSSM
		m_pPSSM->SetShadowMapSize(nSize);
#else
		SAFE_RELEASE(m_pRT_ShadowMap);

		m_pRT_ShadowMap = new D3D11RenderTarget;
		// FIXME: Shadow map doesn't really need a frame buffer.
		m_pRT_ShadowMap->Init(nSize, nSize, ePF_A8R8G8B8, true, false, true);
#endif
	}
	//------------------------------------------------------------------------------------
	void ShadowMap::Render()
	{
		D3D11RenderSystem* pRenderSystem = g_env.pRenderSystem;
		cBufferGlobal& cb = pRenderSystem->GetGlobalCB();

#if USE_PSSM
		m_pPSSM->Render();
#else
		const EntityList& ents = g_env.pSceneMgr->GetCurScene()->GetEntityList();
		EntityList shadowCasters;
		for (size_t i = 0; i < ents.size(); ++i)
		{
			if (ents[i]->GetCastShadow())
			{
				shadowCasters.push_back(ents[i]);
			}
		}

		// Set light space transform
		cb.matView = m_matLightView.Transpose();
		cb.matProj = m_matLightProj.Transpose();
		cb.matViewProj = cb.matProj * cb.matView;
		
		pRenderSystem->UpdateGlobalCBuffer();

		m_pRT_ShadowMap->BeforeRender(false, true);
		g_env.pSceneMgr->GetCurScene()->RenderEntityList(shadowCasters);
		m_pRT_ShadowMap->AfterRender();
#endif

		// Restore render states
		Camera* cam = g_env.pSceneMgr->GetCamera();
		
		cb.matView = cam->GetViewMatrix().Transpose();
		cb.matProj = cam->GetProjMatrix().Transpose();
		cb.matViewProj = cb.matProj * cb.matView;

		pRenderSystem->UpdateGlobalCBuffer();
	}
	//------------------------------------------------------------------------------------
	D3D11Texture* ShadowMap::GetShadowTexture()
	{
		return m_pRT_ShadowMap->GetDepthTexture();
	}
	//------------------------------------------------------------------------------------
	void ShadowMap::Update()
	{
		Camera* cam = g_env.pSceneMgr->GetCamera();
		VEC3 vLightDir = g_env.pSceneMgr->GetSunLight().lightDir;
		vLightDir.Normalize();
		VEC3 vInvLightDir = vLightDir;
		vInvLightDir.Neg();

		bool bUseLisPSM = false;
		bool bUsePSSM = false;
		
		//  these are the limits specified by the physical camera
		//  gamma is the "tilt angle" between the light and the view direction.
		const MAT44& matCameraView = cam->GetViewMatrix();
		float m_fCosGamma = vInvLightDir.x * matCameraView.m02 + vInvLightDir.y * matCameraView.m12 + vInvLightDir.z * matCameraView.m22;

#if USE_LISPPSM
		bUseLisPSM = true;
#elif USE_PSSM
		bUsePSSM = true;
#endif

		if (bUsePSSM)
		{
			m_pPSSM->Update(*cam);
		}
		else if (!bUseLisPSM || fabsf(m_fCosGamma >= 0.99f))
		{
			// Uniform shadow mapping

			AABB sceneAABB = g_env.pSceneMgr->GetCurScene()->GetSceneAABB();

			VEC3 vLightTarget = sceneAABB.GetCenter();
			VEC3 vLightPos = Common::Add_Vec3_By_Vec3(vLightTarget, Common::Multiply_Vec3_By_K(vInvLightDir, sceneAABB.m_boundingRadius));

			m_matLightView = Common::BuildViewMatrix(vLightPos, vLightTarget, VEC3::UNIT_Y);

			// Calc a tight othro projection
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

			m_matLightProj = Common::BuildOthroMatrixOffCenter(l, r, b, t, n, f);
		}
		else
		{
			///////////////////////////////////////////////////////////////
			//////// LisPSM from Nvidia's sample implementation.

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

			leftVector = Common::CrossProduct_Vec3_By_Vec3(upVector, eyeVector);
			leftVector.Normalize();
			viewVector = Common::CrossProduct_Vec3_By_Vec3(upVector, leftVector);

			MAT44 lightSpaceBasis(
				leftVector.x, upVector.x, viewVector.x, 0.f,
				leftVector.y, upVector.y, viewVector.y, 0.f,
				leftVector.z, upVector.z, viewVector.z, 0.f,
				0.f, 0.f, 0.f, 1.f);

			// BodyB in light space
			AABB bodyB_ls_aabb;
			PointListBody bodyB_ls;
			for (size_t i = 0; i < bodyB_es.getPointCount(); ++i)
			{
				VEC3 pt_ls = Common::Transform_Vec3_By_Mat44(bodyB_es.getPoint(i), lightSpaceBasis, true).GetVec3();
				bodyB_ls_aabb.Merge(pt_ls);
				bodyB_ls.addPoint(pt_ls);
			}

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

			float nz = Max(ZNEAR_MIN, aabb_es.m_minCorner.z);
			float fz = Min(ZFAR_MAX, aabb_es.m_maxCorner.z);

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
			float maxx = 0.f, maxy = 0.f, maxz = 0.f;

			for (size_t i = 0; i < bodyB_ls.getPointCount(); ++i)
			{
				VEC3 tmp = bodyB_ls.getPoint(i) - lightSpaceOrigin;
				assert(tmp.z > 0.f);
				maxx = Max(maxx, fabsf(tmp.x / tmp.z));
				maxy = Max(maxy, fabsf(tmp.y / tmp.z));
				maxz = Max(maxz, tmp.z);
			}

			MAT44 lsTranslate, lsPerspective;

			lsTranslate.MakeIdentity();
			lsTranslate.SetTranslation(-lightSpaceOrigin);

			D3DXMatrixPerspectiveLH((D3DXMATRIX*)&lsPerspective, 2.f*maxx*Nopt, 2.f*maxy*Nopt, Nopt, maxz);

			lightSpaceBasis = lightSpaceBasis * lsTranslate;
			lightSpaceBasis = lightSpaceBasis * lsPerspective;

			//  now rotate the entire post-projective cube, so that the shadow map is looking down the Y-axis
			MAT44 lsOrtho;
			MAT44 lsPermute(
				1.f, 0.f, 0.f, 0.f,
				0.f, 0.f, -1.f, 0.f,
				0.f, 1.f, 0.f, 0.f,
				0.f, -0.5f, 1.5f, 1.f);

			D3DXMatrixOrthoLH((D3DXMATRIX*)&lsOrtho, 2.f, 1.f, 0.5f, 2.5f);
			lsPermute = lsPermute * lsOrtho;
			lightSpaceBasis = lightSpaceBasis * lsPermute;

			m_matLightView = matCameraView * lightSpaceBasis;
			m_matLightProj.MakeIdentity();
		}

		MAT44 T(
			0.5f, 0.0f, 0.0f, 0.0f,
			0.0f, -0.5f, 0.0f, 0.0f,
			0.0f, 0.0f, 1.0f, 0.0f,
			0.5f, 0.5f, 0.0f, 1.0f);

		m_matShadowTransform = m_matLightView * m_matLightProj;
		m_matShadowTransform = m_matShadowTransform * T;
	}
}