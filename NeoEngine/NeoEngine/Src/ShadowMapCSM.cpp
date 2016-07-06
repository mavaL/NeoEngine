#include "stdafx.h"
#include "ShadowMapCSM.h"
#include "AABB.h"
#include "SceneManager.h"
#include "Scene.h"
#include "Camera.h"
#include "D3D11RenderTarget.h"
#include "D3D11RenderSystem.h"
#include <D3DX10math.h>

namespace Neo
{
	
	const float		CASCADE_PARTITION[CSM_CASCADE_NUM + 1] =
	{
		0.0f, 0.1f, 0.4f, 1.0f
	};
	//------------------------------------------------------------------------------------
	ShadowMapCSM::ShadowMapCSM()
		:m_fCascadePadding(1.0f)
	{
		for (int iCascade = 0; iCascade < CSM_CASCADE_NUM; ++iCascade)
		{
			m_shadowMapCascades[iCascade] = new D3D11RenderTarget();
			m_shadowMapCascades[iCascade]->Init(SHADOW_MAP_SIZE, SHADOW_MAP_SIZE, ePF_A8R8G8B8, true, false, true);
		}
	}
	//------------------------------------------------------------------------------------
	ShadowMapCSM::~ShadowMapCSM()
	{
		for (int iCascade = 0; iCascade < CSM_CASCADE_NUM; ++iCascade)
		{
			SAFE_RELEASE(m_shadowMapCascades[iCascade]);
		}
	}
	//------------------------------------------------------------------------------------
	void ShadowMapCSM::Update(Camera& cam)
	{
		// Calc light-view matrix
		AABB sceneAABB = g_env.pSceneMgr->GetCurScene()->GetSceneAABB();
		VEC3 vLightTarget = sceneAABB.GetCenter();

		VEC3 vLightDir = g_env.pSceneMgr->GetSunLight().lightDir;
		vLightDir.Normalize();
		VEC3 vInvLightDir = vLightDir;
		vInvLightDir.Neg();

		VEC3 vLightPos = Common::Add_Vec3_By_Vec3(vLightTarget, Common::Multiply_Vec3_By_K(vInvLightDir, sceneAABB.m_boundingRadius));

		m_matLightView = Common::BuildViewMatrix(vLightPos, vLightTarget, VEC3::UNIT_Y);

		MAT44 matInvCamView = cam.GetViewMatrix().Inverse();

		// Calc each cascade's othro projection matrix
		const float fNear = cam.GetNearClip();
		const float fFar = cam.GetFarClip();
		const float fNearFar = fFar - fNear;
		const float fTan = tanf(cam.GetFov() * 0.5f);

		for (int iCascade = 0; iCascade < CSM_CASCADE_NUM; ++iCascade)
		{
			float fCascadeBegin = fNear + fNearFar * CASCADE_PARTITION[iCascade];
			float fCascadeEnd = fNear + fNearFar * CASCADE_PARTITION[iCascade + 1];

			// Calc the 8 corners of the partition frustum -- in camera space
			VEC3 vCorners[8];
			float fFarRight = fCascadeEnd * fTan;
			float fNearRight = fCascadeBegin * fTan;
			float fFarTop = fFarRight / cam.GetAspectRatio();
			float fNearTop = fNearRight / cam.GetAspectRatio();

			// Overlap each cascade to avoid crack artifacts
			if (iCascade > 0)
			{
				fCascadeBegin -= m_fCascadePadding;
			} 
			else if (iCascade < CSM_CASCADE_NUM - 1)
			{
				fCascadeEnd += m_fCascadePadding;
			}

			vCorners[0].Set(-fNearRight, -fNearTop, fCascadeBegin);
			vCorners[1].Set(-fNearRight, fNearTop, fCascadeBegin);
			vCorners[2].Set(fNearRight, -fNearTop, fCascadeBegin);
			vCorners[3].Set(fNearRight, fNearTop, fCascadeBegin);
			vCorners[4].Set(-fFarRight, -fFarTop, fCascadeEnd);
			vCorners[5].Set(-fFarRight, fFarTop, fCascadeEnd);
			vCorners[6].Set(fFarRight, -fFarTop, fCascadeEnd);
			vCorners[7].Set(fFarRight, fFarTop, fCascadeEnd);

			// Convert to light space, construct the aabb
			AABB projCube;
			for (int i = 0; i < 8; ++i)
			{
				vCorners[i] = Common::Transform_Vec3_By_Mat44(vCorners[i], matInvCamView, true).GetVec3();
				vCorners[i] = Common::Transform_Vec3_By_Mat44(vCorners[i], m_matLightView, true).GetVec3();

				projCube.Merge(vCorners[i]);
			}

			// We can get the othro projection now
			m_matLightProj[iCascade] = Common::BuildOthroMatrix(
				projCube.m_minCorner.x, projCube.m_maxCorner.x,
				projCube.m_minCorner.y, projCube.m_maxCorner.y,
				projCube.m_minCorner.z, projCube.m_maxCorner.z);

			MAT44 T(
				0.5f, 0.0f, 0.0f, 0.0f,
				0.0f, -0.5f, 0.0f, 0.0f,
				0.0f, 0.0f, 1.0f, 0.0f,
				0.5f, 0.5f, 0.0f, 1.0f);

			m_matShadowTransform[iCascade] = m_matLightView * m_matLightProj[iCascade];
			m_matShadowTransform[iCascade] = m_matShadowTransform[iCascade] * T;
		}
	}
	//------------------------------------------------------------------------------------
	void ShadowMapCSM::Render()
	{
		cBufferGlobal& cb = g_env.pRenderSystem->GetGlobalCB();

		// Render for each cascade
		for (int iCascade = 0; iCascade < CSM_CASCADE_NUM; ++iCascade)
		{
			cb.matView = m_matLightView.Transpose();
			cb.matProj = m_matLightProj[iCascade].Transpose();
			cb.matViewProj = cb.matProj * cb.matView;

			g_env.pRenderSystem->UpdateGlobalCBuffer();

			m_shadowMapCascades[iCascade]->BeforeRender(false, true);
			g_env.pSceneMgr->GetCurScene()->RenderOpaque();
			m_shadowMapCascades[iCascade]->AfterRender();
		}
	}
	//------------------------------------------------------------------------------------
	D3D11Texture* ShadowMapCSM::GetShadowTexture(int i)
	{
		return m_shadowMapCascades[i]->GetDepthTexture();
	}

}