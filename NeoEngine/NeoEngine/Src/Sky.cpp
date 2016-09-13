#include "stdafx.h"
#include "Sky.h"
#include "RenderSystem.h"
#include "Texture.h"
#include "Material.h"
#include "Camera.h"
#include "SceneManager.h"
#include "Mesh.h"
#include "Entity.h"
#include "MaterialManager.h"
#include "RenderTarget.h"
#include "InputManager.h"
#include "Renderer.h"
#include "Buffer.h"

namespace Neo
{
	const float Rg = 6360.0;
	const float Rt = 6420.0;
	const float RL = 6421.0;

	const int TRANSMITTANCE_W = 256;
	const int TRANSMITTANCE_H = 64;

	const int SKY_W = 64;
	const int SKY_H = 16;

	const int RES_R = 32;
	const int RES_MU = 128;
	const int RES_MU_S = 32;
	const int RES_NU = 8;

	//------------------------------------------------------------------------------------
	Sky::Sky()
	: m_pRenderSystem(g_env.pRenderer->GetRenderSys())
	, m_pRT_Transmittance(nullptr)
	, m_pMtl_Transmittance(nullptr)
	, m_pMtl_InscatterDeltaS(nullptr)
	, m_pCB_Inscatter1(nullptr)
	, m_pRT_Inscatter(nullptr)
	, m_pMtl_CopyInscatter1(nullptr)
	, m_pMtl_Sky(nullptr)
	{
		m_pCB_Inscatter1 = m_pRenderSystem->CreateConstantBuffer(sizeof(cBufferInscatter1));

		_InitMaterials();
		_Precompute();

		g_env.pInputSystem->m_KeyPressedSignal += Common::slot(this, &Sky::OnKeyPressed);
		g_env.pInputSystem->m_KeyReleasedSignal += Common::slot(this, &Sky::OnKeyReleased);
		g_env.pInputSystem->m_MouseMoveSignal += Common::slot(this, &Sky::OnMouseMoved);
	}
	//------------------------------------------------------------------------------------
	Sky::~Sky()
	{
		SAFE_RELEASE(m_pRT_Transmittance);
		SAFE_RELEASE(m_pMtl_Transmittance);
		SAFE_RELEASE(m_pRT_InscatterDeltaS[0]);
		SAFE_RELEASE(m_pRT_InscatterDeltaS[1]);
		SAFE_RELEASE(m_pMtl_InscatterDeltaS);
		SAFE_DELETE(m_pCB_Inscatter1);
		SAFE_RELEASE(m_pRT_Inscatter);
		SAFE_RELEASE(m_pMtl_CopyInscatter1);
		SAFE_RELEASE(m_pMtl_Sky);
	}
	//------------------------------------------------------------------------------------
	void Sky::_InitMaterials()
	{
		m_pRT_Transmittance = g_env.pRenderer->CreateRenderTarget(TRANSMITTANCE_W, TRANSMITTANCE_H, 1, ePF_A16R16G16B16F, 0);

		m_pRT_InscatterDeltaS[0] = g_env.pRenderer->CreateRenderTarget(RES_MU_S * RES_NU, RES_MU, RES_R, ePF_A16R16G16B16F, 0);
		m_pRT_InscatterDeltaS[1] = g_env.pRenderer->CreateRenderTarget(RES_MU_S * RES_NU, RES_MU, RES_R, ePF_A16R16G16B16F, 0);
		m_pRT_Inscatter = g_env.pRenderer->CreateRenderTarget(RES_MU_S * RES_NU, RES_MU, RES_R, ePF_A16R16G16B16F, 0);

		m_pMtl_Transmittance = MaterialManager::GetSingleton().NewMaterial("Mtl_Sky_Transmittance");
		m_pMtl_Transmittance->InitShader(GetResPath("Sky.hlsl"), eShader_Transparent, 0, nullptr, "VS", "TransmittancePS");
		m_pMtl_Transmittance->AddRef();

		m_pMtl_InscatterDeltaS = MaterialManager::GetSingleton().NewMaterial("Mtl_Sky_InscatterDeltaS");

		SSamplerDesc samDesc = m_pMtl_InscatterDeltaS->GetSamplerStateDesc(0);
		samDesc.Filter = SF_MIN_MAG_LINEAR_MIP_POINT;
		samDesc.AddressU = eTextureAddressMode_CLAMP;
		samDesc.AddressV = eTextureAddressMode_CLAMP;
		samDesc.AddressW = eTextureAddressMode_CLAMP;

		m_pMtl_InscatterDeltaS->SetTexture(0, m_pRT_Transmittance->GetRenderTexture());
		m_pMtl_InscatterDeltaS->SetSamplerStateDesc(0, samDesc);
		m_pMtl_InscatterDeltaS->InitShader(GetResPath("Sky.hlsl"), eShader_Transparent, 0, nullptr, "VS", "Inscatter1PS");
		m_pMtl_InscatterDeltaS->AddRef();

		m_pMtl_CopyInscatter1 = MaterialManager::GetSingleton().NewMaterial("Mtl_Sky_CopyInscatter1");
		m_pMtl_CopyInscatter1->SetTexture(0, m_pRT_InscatterDeltaS[0]->GetRenderTexture());
		m_pMtl_CopyInscatter1->SetTexture(1, m_pRT_InscatterDeltaS[1]->GetRenderTexture());
		m_pMtl_CopyInscatter1->InitShader(GetResPath("Sky.hlsl"), eShader_Transparent, 0, nullptr, "VS", "CopyInscatter1PS");
		m_pMtl_CopyInscatter1->AddRef();

		m_pMtl_Sky = MaterialManager::GetSingleton().NewMaterial("Mtl_Sky_Final");
		m_pMtl_Sky->SetTexture(0, m_pRT_Transmittance->GetRenderTexture());
		m_pMtl_Sky->SetTexture(1, m_pRT_Inscatter->GetRenderTexture());

		m_pMtl_Sky->SetSamplerStateDesc(0, samDesc);

		m_pMtl_Sky->InitShader(GetResPath("Sky.hlsl"), eShader_Transparent, 0, nullptr, "VS", "SkyPS");
		m_pMtl_Sky->AddRef();
	}
	//-------------------------------------------------------------------------------
	void Sky::_Precompute()
	{
		// Transmittance
		m_pRT_Transmittance->RenderScreenQuad(m_pMtl_Transmittance, false, false);

		// Inscatter deltaS
		SViewport vp = { 0.0f, 0.0f, RES_MU_S * RES_NU, RES_MU, 0, 1 };
		m_pRenderSystem->SetViewport(&vp);

		m_pRenderSystem->SetRenderTarget(nullptr, nullptr, 1, false, false);
		m_pMtl_InscatterDeltaS->Activate();

		for (uint32 iSlice = 0; iSlice < RES_R; ++iSlice)
		{
			m_pRT_InscatterDeltaS[0]->SetActiveSlice(iSlice);
			m_pRT_InscatterDeltaS[1]->SetActiveSlice(iSlice);

			m_pRenderSystem->SetRenderTarget(m_pRT_InscatterDeltaS, nullptr, 2, false, false);

			_SetLayer(iSlice);

			RenderTarget::m_pQuadEntity->Render();
		}

		// CopyInscatter1
		m_pRenderSystem->SetRenderTarget(nullptr, nullptr, 2, false, false);
		m_pMtl_CopyInscatter1->Activate();

		for (uint32 iSlice = 0; iSlice < RES_R; ++iSlice)
		{
			m_pRT_Inscatter->SetActiveSlice(iSlice);
			m_pRenderSystem->SetRenderTarget(&m_pRT_Inscatter, nullptr, 1, false, false);

			_SetLayer(iSlice);

			RenderTarget::m_pQuadEntity->Render();
		}

		g_env.pRenderer->RestoreViewport();
	}
	//-------------------------------------------------------------------------------
	void Sky::Update()
	{
		
	}
	//------------------------------------------------------------------------------------
	void Sky::Render()
	{
		m_pMtl_Sky->Activate();

		// Turn off depth write
		SStateDepth depthState = g_env.pRenderer->GetCurDepthState();
		auto old = depthState.Desc.DepthWriteMask;
		depthState.Desc.DepthWriteMask = false;
		g_env.pRenderer->SetDepthState(&depthState);

		RenderTarget::m_pQuadEntity->Render();

		// Restore render state
		depthState.Desc.DepthWriteMask = old;
		g_env.pRenderer->SetDepthState(&depthState);
	}
	//------------------------------------------------------------------------------------
	void Sky::_SetLayer(uint32 iSlice)
	{
		double r = iSlice / (RES_R - 1.0f);
		r = r * r;
		r = sqrt(Rg * Rg + r * (Rt * Rt - Rg * Rg)) + (iSlice == 0 ? 0.01f : (iSlice == RES_R - 1 ? -0.001f : 0.0f));
		double dmin = Rt - r;
		double dmax = sqrt(r * r - Rg * Rg) + sqrt(Rt * Rt - Rg * Rg);
		double dminp = r - Rg;
		double dmaxp = sqrt(r * r - Rg * Rg);

		m_cbInscatter1.r = (float)r;
		m_cbInscatter1.dhdH.Set(float(dmin), float(dmax), float(dminp), float(dmaxp));
		m_cbInscatter1.layer = iSlice;

		m_pCB_Inscatter1->UpdateBuf(&m_cbInscatter1);
		m_pCB_Inscatter1->Apply(10, false, true);
	}
	//------------------------------------------------------------------------------------
	static bool g_bTest = false;
	bool Sky::OnKeyPressed(const OIS::KeyEvent &arg)
	{
		if (arg.key == OIS::KC_LCONTROL)
		{
			g_bTest = true;
		}
		return true;
	}
	//------------------------------------------------------------------------------------
	bool Sky::OnKeyReleased(const OIS::KeyEvent &arg)
	{
		if (arg.key == OIS::KC_LCONTROL)
		{
			g_bTest = false;
		}
		return true;
	}
	//------------------------------------------------------------------------------------
	bool Sky::OnMouseMoved(const OIS::MouseEvent &arg)
	{
		// Update sun direction
		long dx = arg.state.X.rel;
		long dy = arg.state.Y.rel;

		float yawDelta = 0, pitchDelta = 0;
		if (dx) yawDelta = dx / 5.0f;
		if (dy) pitchDelta = dy / 5.0f;

		if (g_bTest)
		{
			VEC3 vLightDir = g_env.pSceneMgr->GetSunLight().lightDir;

			float vangle = asin(vLightDir.y);
			float hangle = atan2(vLightDir.z, vLightDir.x);
			vangle += dy / 180.0f * PI / 4;
			hangle += dx / 180.0f * PI / 4;
			vLightDir.x = cos(vangle) * cos(hangle);
			vLightDir.z = cos(vangle) * sin(hangle);
			vLightDir.y = sin(vangle);

			g_env.pSceneMgr->SetupSunLight(vLightDir, g_env.pSceneMgr->GetSunLight().lightColor);
		}

		return true;
	}

}