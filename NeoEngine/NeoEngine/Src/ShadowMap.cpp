#include "stdafx.h"
#include "ShadowMap.h"
#include "D3D11RenderTarget.h"
#include "D3D11RenderSystem.h"
#include "SceneManager.h"
#include "Scene.h"
#include "Camera.h"

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
		// Compute light space view/proj matrix
		AABB sceneAABB = g_env.pSceneMgr->GetCurScene()->GetSceneShadowReceiverAABB();

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

		MAT44 T(
			0.5f, 0.0f, 0.0f, 0.0f,
			0.0f, -0.5f, 0.0f, 0.0f,
			0.0f, 0.0f, 1.0f, 0.0f,
			0.5f, 0.5f, 0.0f, 1.0f);

		m_matShadowTransform = Common::Multiply_Mat44_By_Mat44(m_matLightView, m_matLightProj);
		m_matShadowTransform = Common::Multiply_Mat44_By_Mat44(m_matShadowTransform, T);
	}
}