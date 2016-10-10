#include "stdafx.h"
#include "Material.h"
#include "RenderSystem.h"
#include "Texture.h"
#include "SceneManager.h"
#include "SSAO.h"
#include "ShadowMap.h"
#include "Renderer.h"
#include "Shader.h"


namespace Neo
{
	SColor SColor::WHITE	=	SColor(1.0f, 1.0f, 1.0f);
	SColor SColor::BLACK	=	SColor(0.0f, 0.0f, 0.0f);
	SColor SColor::BLUE		=	SColor(0.0f, 0.0f, 1.0f);
	SColor SColor::RED		=	SColor(1.0f, 0.0f, 0.0f);
	SColor SColor::YELLOW	=	SColor(1.0f, 1.0f, 0.0f);
	SColor SColor::NICE_BLUE =	SColor(0.0f, 0.125f, 0.3f);

	//-------------------------------------------------------------------------------
	Material::Material(const STRING& name, eVertexType type, uint32 nSubMtl)
	: m_pRenderSystem(g_env.pRenderer->GetRenderSys())
	, m_name(name)
	, m_pVertexShader(nullptr)
	, m_pPixelShader(nullptr)
	, m_pHullShader(nullptr)
	, m_pDomainShader(nullptr)
	, m_pComputeShader(nullptr)
	, m_pGeometryShader(nullptr)
	, m_pVS_GBuffer(nullptr)
	, m_pPS_GBuffer(nullptr)
	, m_pVS_Shadow(nullptr)
	, m_pPS_Shadow(nullptr)
	, m_pVS_WithClipPlane(nullptr)
	, m_pVS_2(nullptr)
	, m_pPS_2(nullptr)
	, m_shaderFlag(0)
	, m_cullMode(eCull_BACK)
	, m_vertType(type)
	, m_iActivePass(0)
	, m_bEnableGS(false)
	{
		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			m_pSamplerState[i] = nullptr;
			m_bSamplerVS[i] = false;
			m_bSamplerGS[i] = false;
			m_bSamplerTess[i] = false;
		}

		m_vecSubMtls.resize(nSubMtl);
	}
	//-------------------------------------------------------------------------------
	Material::~Material()
	{
		SAFE_RELEASE(m_pVertexShader);
		SAFE_RELEASE(m_pPixelShader);
		SAFE_RELEASE(m_pHullShader);
		SAFE_RELEASE(m_pDomainShader);
		SAFE_RELEASE(m_pComputeShader);
		SAFE_RELEASE(m_pGeometryShader);
		SAFE_RELEASE(m_pVS_WithClipPlane);
		SAFE_RELEASE(m_pVS_2);
		SAFE_RELEASE(m_pPS_2);

		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			SAFE_DELETE(m_pSamplerState[i]);
		}
	}
	//-------------------------------------------------------------------------------
	bool Material::InitShader(const STRING& strShaderFile, eShader shaderType, uint32 shaderFalg, const D3D_SHADER_MACRO* pMacro, 
		const char* szVS1, const char* szPS1, const char* szVS2, const char* szPS2)
	{
		m_shaderFlag = shaderFalg;
		m_shaderType = shaderType;

		const std::vector<D3D_SHADER_MACRO> vecMacro = _InternelInitShader(pMacro, 1);

		// Create shader
		SAFE_RELEASE(m_pVertexShader);
		SAFE_RELEASE(m_pPixelShader);
		SAFE_RELEASE(m_pPS_GBuffer);
		SAFE_RELEASE(m_pVS_Shadow);
		SAFE_RELEASE(m_pPS_Shadow);
		SAFE_RELEASE(m_pPS_GBuffer);
		SAFE_RELEASE(m_pVS_2);
		SAFE_RELEASE(m_pPS_2);

		// Shadow map gen tech
		if (strShaderFile.find("Opaque") != STRING::npos ||
			strShaderFile.find("SkinModel") != STRING::npos ||
			shaderType == eShader_Forward ||
			shaderType == eShader_Fur)
		{
			m_pVS_Shadow = m_pRenderSystem->CreateShader(eShaderType_VS, eRenderPhase_ShadowMap, strShaderFile, shaderFalg, "VS_ShadowMapGen", m_vertType, vecMacro);
			m_pPS_Shadow = m_pRenderSystem->CreateShader(eShaderType_PS, eRenderPhase_ShadowMap, strShaderFile, shaderFalg, "PS_ShadowMapGen", m_vertType, vecMacro);
		}

		if (m_shaderType == eShader_Opaque)
		{
			m_pVertexShader = m_pRenderSystem->CreateShader(eShaderType_VS, eRenderPhase_GBuffer, strShaderFile, shaderFalg, szVS1, m_vertType, vecMacro);
			m_pPS_GBuffer = m_pRenderSystem->CreateShader(eShaderType_PS, eRenderPhase_GBuffer, strShaderFile, shaderFalg, "PS_GBuffer", m_vertType, vecMacro);
		}
		else if (m_shaderType == eShader_Fur)
		{
			m_pVS_GBuffer = m_pRenderSystem->CreateShader(eShaderType_VS, eRenderPhase_GBuffer, strShaderFile, shaderFalg, "VS", m_vertType, vecMacro);
			m_pPS_GBuffer = m_pRenderSystem->CreateShader(eShaderType_PS, eRenderPhase_GBuffer, strShaderFile, shaderFalg, "PS_GBuffer", m_vertType, vecMacro);
			m_pVertexShader = m_pRenderSystem->CreateShader(eShaderType_VS, eRenderPhase_Forward, strShaderFile, shaderFalg, szVS1, m_vertType, vecMacro);
			m_pPixelShader = m_pRenderSystem->CreateShader(eShaderType_PS, eRenderPhase_Forward, strShaderFile, shaderFalg, szPS1, m_vertType, vecMacro);
		}
		else
		{
			// Not go into g-buffer
			m_pVertexShader = m_pRenderSystem->CreateShader(eShaderType_VS, eRenderPhase_Forward, strShaderFile, shaderFalg, szVS1, m_vertType, vecMacro);
			m_pPixelShader = m_pRenderSystem->CreateShader(eShaderType_PS, eRenderPhase_Forward, strShaderFile, shaderFalg, szPS1, m_vertType, vecMacro);
		}

		if (szVS2 && szPS2)
		{
			m_pVS_2 = m_pRenderSystem->CreateShader(eShaderType_VS, eRenderPhase_Forward, strShaderFile, shaderFalg, szVS2, m_vertType, vecMacro);
			m_pPS_2 = m_pRenderSystem->CreateShader(eShaderType_PS, eRenderPhase_Forward, strShaderFile, shaderFalg, szPS2, m_vertType, vecMacro);
		}

		return true;
	}
	//------------------------------------------------------------------------------------
	bool Material::InitTessellationShader( const STRING& filename, uint32 shaderFalg, const D3D_SHADER_MACRO* pMacro )
	{
		m_shaderFlag = shaderFalg;

		const std::vector<D3D_SHADER_MACRO> vecMacro = _InternelInitShader(nullptr, 0);

		m_pHullShader = m_pRenderSystem->CreateShader(eShaderType_HS, eRenderPhase_None, filename, shaderFalg, "HS", m_vertType, vecMacro);
		m_pDomainShader = m_pRenderSystem->CreateShader(eShaderType_DS, eRenderPhase_None, filename, shaderFalg, "DS", m_vertType, vecMacro);

		return true;
	}
	//------------------------------------------------------------------------------------
	bool Material::InitComputeShader(const STRING& filename)
	{
		std::vector<D3D_SHADER_MACRO> vecMacro = _InternelInitShader(nullptr, 0);

		m_pComputeShader = m_pRenderSystem->CreateShader(eShaderType_CS, eRenderPhase_None, filename, 0, "CS", m_vertType, vecMacro);

		return true;
	}
	//------------------------------------------------------------------------------------
	bool Material::InitGeometryShader(const STRING& filename)
	{
		std::vector<D3D_SHADER_MACRO> vecMacro = _InternelInitShader(nullptr, 0);

		m_pGeometryShader = m_pRenderSystem->CreateShader(eShaderType_GS, eRenderPhase_None, filename, 0, "GS", m_vertType, vecMacro);

		return true;
	}
	//-------------------------------------------------------------------------------
	void Material::Activate(uint32 iSubMtl)
	{
		Renderer* pRenderer = g_env.pRenderer;

		// Cull mode
		SStateRaster rasterState = pRenderer->GetCurRasterState();

		if (pRenderer->IsClipPlaneEnabled())
		{
			switch (m_cullMode)
			{
			case eCull_FRONT: rasterState.Desc.CullMode = eCull_BACK; break;
			case eCull_BACK: rasterState.Desc.CullMode = eCull_FRONT; break;
			default: break;
			}
			
			pRenderer->SetRasterState(&rasterState);
		}
		else if (m_cullMode != rasterState.Desc.CullMode)
		{
			rasterState.Desc.CullMode = m_cullMode;
			pRenderer->SetRasterState(&rasterState);
		}

		const uint32 curPhase = g_env.pSceneMgr->GetCurRenderPhase();

		if (curPhase == eRenderPhase_GBuffer)
		{
			if (m_shaderType == eShader_Fur)
			{
				m_pVS_GBuffer->Activate();
			} 
			else
			{
				m_pVertexShader->Activate();
			}
			m_pPS_GBuffer->Activate();
		} 
		else if (curPhase == eRenderPhase_ShadowMap && (m_shaderType != eShader_PostProcess))
		{
			m_pVS_Shadow->Activate();
			m_pPS_Shadow->Activate();
		}
		else if (curPhase == eRenderPhase_TiledCS)
		{
			m_pComputeShader->Activate();
		}
		else
		{
			if (m_iActivePass == 0)
			{
				m_pVertexShader->Activate();
				m_pPixelShader->Activate();
			} 
			else if (m_iActivePass == 1)
			{
				m_pVS_2->Activate();
				m_pPS_2->Activate();
			}
			else
			{
				_AST(0);
			}
		}

		if (m_bEnableGS)
		{
			m_pGeometryShader->Activate();
		}

		for (int i = 0; i < MAX_TEXTURE_STAGE; ++i)
		{
			if (m_pSamplerState[i])
			{
				pRenderer->SetActiveSamplerState(i, m_pSamplerState[i], m_bSamplerVS[i], m_bSamplerGS[i], m_bSamplerTess[i]);
			}
		}
		
		m_vecSubMtls[iSubMtl].Activate(false, m_bEnableGS);
	}
	//------------------------------------------------------------------------------------
	void Material::SetSamplerStateDesc(int stage, const SSamplerDesc& desc, bool bVS, bool bGS, bool bTessellation)
	{
		_AST(stage >= 0 && stage < MAX_TEXTURE_STAGE);

		SAFE_DELETE(m_pSamplerState[stage]);

		m_samplerStateDesc[stage] = desc;
		m_bSamplerVS[stage] = bVS;
		m_bSamplerGS[stage] = bGS;
		m_bSamplerTess[stage] = bTessellation;

		HRESULT hr = S_OK;
		m_pSamplerState[stage] = m_pRenderSystem->CreateSamplerState(m_samplerStateDesc[stage]);
	}
	//-------------------------------------------------------------------------------
	void Material::TurnOffTessellation()
	{
		_AST(m_pHullShader && m_pDomainShader);
		m_pHullShader->DeActivate();
		m_pDomainShader->DeActivate();
	}
	//-------------------------------------------------------------------------------
	void Material::TurnOffComputeShader()
	{
		_AST(m_pComputeShader);
		m_pComputeShader->DeActivate();
	}
	//-------------------------------------------------------------------------------
	void Material::TurnOffGeometryShader()
	{
		_AST(m_pGeometryShader);
		m_bEnableGS = false;
		m_pGeometryShader->DeActivate();
	}
	//------------------------------------------------------------------------------------
	std::vector<D3D_SHADER_MACRO> Material::_InternelInitShader(const D3D_SHADER_MACRO* pMacro, uint32 nMacro)
	{
		std::vector<D3D_SHADER_MACRO> retMacros;

		if (pMacro)
		{
			for (uint32 i = 0; i<nMacro; ++i)
			{
				retMacros.push_back(pMacro[i]);
			}
		}

		if (m_vertType == eVertexType_NormalMap && m_shaderType != eShader_Fur)
		{
			D3D_SHADER_MACRO macro = { "NORMAL_MAP", "" };
			retMacros.push_back(macro);
		}

		if (m_vecSubMtls[0].m_pTexture[eTexSlot_SpecMap])
		{
			D3D_SHADER_MACRO macro = { "SPEC_MAP", "" };
			retMacros.push_back(macro);
		}

//		if (m_shaderFlag & eShaderFlag_EnableSSAO)
//		{
//			for (int i=0; i<MAX_TEXTURE_STAGE; ++i)
//			{
//				if (m_pTexture[i] == nullptr)
//				{
//					SetTexture(i, g_env.pSceneMgr->GetSSAO()->GetBlurVMap());
//
//					D3D_SHADER_MACRO macro = { "SSAO", "" };
//					retMacros.push_back(macro);
//
//					break;
//				}
//			}
//		}
//
//		if (m_shaderFlag & eShaderFlag_EnableShadowReceive)
//		{
//			for (int i=0; i<MAX_TEXTURE_STAGE; ++i)
//			{
//				if (m_pTexture[i] == nullptr)
//				{
//					D3D_SHADER_MACRO macro = { "SHADOW_RECEIVER", "" };
//					retMacros.push_back(macro);
//
//					D3D11_SAMPLER_DESC& samDesc = GetSamplerStateDesc(i);
//					samDesc.Filter = D3D11_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT;
//					samDesc.ComparisonFunc = D3D11_COMPARISON_LESS;
//					samDesc.AddressU = D3D11_TEXTURE_ADDRESS_BORDER;
//					samDesc.AddressV = D3D11_TEXTURE_ADDRESS_BORDER;
//					samDesc.BorderColor[0] = samDesc.BorderColor[1] = samDesc.BorderColor[2] = samDesc.BorderColor[3] = 1;
//
//					SetSamplerStateDesc(i, samDesc);
//

//
//					break;
//				}
//			}
//		}


#if USE_PSSM
		{
			D3D_SHADER_MACRO macro = { "SHADOW_PSSM", "" };
			retMacros.push_back(macro);
		}
#endif

#if USE_ESM
		{
			D3D_SHADER_MACRO macro = { "USE_ESM", "" };
			retMacros.push_back(macro);
		}
#endif

		D3D_SHADER_MACRO macro = { 0, 0 };
		retMacros.push_back(macro);

		return std::move(retMacros);
	}
	//------------------------------------------------------------------------------------
	SubMaterial& Material::GetSubMaterial(uint32 i)
	{
		assert(i >= 0 && i < m_vecSubMtls.size());
		return m_vecSubMtls[i];
	}
	//------------------------------------------------------------------------------------
	void Material::SetTexture(int stage, Texture* pTexture)
	{
		assert(stage >= 0 && stage < MAX_TEXTURE_STAGE);

		for (uint32 i = 0; i < m_vecSubMtls.size(); ++i)
		{
			m_vecSubMtls[i].SetTexture(stage, pTexture);
		}
	}
	//------------------------------------------------------------------------------------
	void Material::SetActivePass(uint32 iPass, bool bEnableGS /*= false*/)
	{
		m_iActivePass = iPass;
		m_bEnableGS = bEnableGS;
	}
	//------------------------------------------------------------------------------------
	SubMaterial::SubMaterial()
		: specular(0.05f, 0.05f, 0.05f)
		, glossiness(0)
	{
		for (int i = 0; i < MAX_TEXTURE_STAGE; ++i)
		{
			m_pTexture[i] = nullptr;
		}
	}
	//------------------------------------------------------------------------------------
	SubMaterial::~SubMaterial()
	{
		for (int i = 0; i < MAX_TEXTURE_STAGE; ++i)
		{
			SAFE_RELEASE(m_pTexture[i]);
		}
	}
	//------------------------------------------------------------------------------------
	void SubMaterial::Activate(bool bCS, bool bGS)
	{
		// Apply textures
		for (int i = 0; i < MAX_TEXTURE_STAGE; ++i)
		{
			if (m_pTexture[i])
			{
				g_env.pRenderer->SetActiveTexture(i, m_pTexture[i]);
			}
		}

		g_env.pRenderer->GetMaterialCB().specularGloss = VEC4(specular, glossiness);
		g_env.pRenderer->UpdateMaterialCBuffer(false, bCS, bGS);
	}
	//------------------------------------------------------------------------------------
	void SubMaterial::SetTexture(int stage, Texture* pTexture)
	{
		_AST(stage >= 0 && stage < MAX_TEXTURE_STAGE);

		SAFE_RELEASE(m_pTexture[stage]);
		m_pTexture[stage] = pTexture;

		if (pTexture)
			pTexture->AddRef();
	}
}



