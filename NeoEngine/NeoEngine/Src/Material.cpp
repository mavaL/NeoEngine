#include "stdafx.h"
#include "Material.h"
#include <D3Dcompiler.h>
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "SceneManager.h"
#include "SSAO.h"
#include "ShadowMap.h"
#include "ShadowMapCSM.h"

namespace Neo
{
	SColor SColor::WHITE	=	SColor(1.0f, 1.0f, 1.0f);
	SColor SColor::BLACK	=	SColor(0.0f, 0.0f, 0.0f);
	SColor SColor::BLUE		=	SColor(0.0f, 0.0f, 1.0f);
	SColor SColor::RED		=	SColor(1.0f, 0.0f, 0.0f);
	SColor SColor::YELLOW	=	SColor(1.0f, 1.0f, 0.0f);
	SColor SColor::NICE_BLUE =	SColor(0.0f, 0.125f, 0.3f);

	//-------------------------------------------------------------------------------
	Material::Material(eVertexType type, uint32 nSubMtl)
	:m_pRenderSystem(g_env.pRenderSystem)
	,ambient(SColor::WHITE)
	,diffuse(SColor::WHITE)
	,specular(SColor::WHITE)
	,shiness(20)
	,m_pVertexShader(nullptr)
	,m_pPixelShader(nullptr)
	,m_pHullShader(nullptr)
	,m_pDomainShader(nullptr)
	,m_pVS_GBuffer(nullptr)
	,m_pPS_GBuffer(nullptr)
	,m_pVS_WithClipPlane(nullptr)
	,m_pInputLayout(nullptr)
	,m_shaderFlag(0)
	,m_cullMode(D3D11_CULL_BACK)
	,m_vertType(type)
	{
		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			m_pSamplerState[i] = nullptr;

			m_samplerStateDesc[i] = CD3D11_SAMPLER_DESC(CD3D11_DEFAULT());
			// Default wrap mode
			m_samplerStateDesc[i].AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
			m_samplerStateDesc[i].AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
			m_samplerStateDesc[i].AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
		}

		m_vecSubMtls.resize(nSubMtl);
	}
	//-------------------------------------------------------------------------------
	Material::~Material()
	{
		SAFE_RELEASE(m_pInputLayout);
		SAFE_RELEASE(m_pVertexShader);
		SAFE_RELEASE(m_pPixelShader);
		SAFE_RELEASE(m_pHullShader);
		SAFE_RELEASE(m_pDomainShader);
		SAFE_RELEASE(m_pVS_WithClipPlane);

		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			SAFE_RELEASE(m_pSamplerState[i]);
		}
	}
	//-------------------------------------------------------------------------------
	bool Material::InitShader(const STRING& vsFileName, const STRING& psFileName, eShader shaderType, 
		uint32 shaderFalg, const D3D_SHADER_MACRO* pMacro, const char* szVSEntryFunc, const char* szPSEntryFunc)
	{
		HRESULT hr = S_OK;
		ID3DBlob* pVSBlob = NULL;
		ID3DBlob* pPSBlob = NULL;

		m_shaderFlag = shaderFalg;
		m_shaderType = shaderType;

		const std::vector<D3D_SHADER_MACRO> vecMacro = _InternelInitShader(pMacro);

		// Compile
		V_RETURN(_CompileShaderFromFile(vsFileName.c_str(), szVSEntryFunc, "vs_4_0", vecMacro, &pVSBlob));
		V_RETURN(_CompileShaderFromFile(psFileName.c_str(), szPSEntryFunc, "ps_4_0", vecMacro, &pPSBlob));

		// Create shader
		V_RETURN(m_pRenderSystem->GetDevice()->CreateVertexShader( pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize(), NULL, &m_pVertexShader ));
		V_RETURN(m_pRenderSystem->GetDevice()->CreatePixelShader( pPSBlob->GetBufferPointer(), pPSBlob->GetBufferSize(), NULL, &m_pPixelShader ));

		m_vsCode.resize(pVSBlob->GetBufferSize());
		memcpy_s(&m_vsCode[0], m_vsCode.size(), pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize());

		pVSBlob->Release();
		pPSBlob->Release();

		// Create clip plane shader
		if (m_shaderFlag & eShaderFlag_EnableClipPlane)
		{
			V_RETURN(_CompileShaderFromFile( vsFileName.c_str(), "VS_ClipPlane", "vs_4_0", vecMacro, &pVSBlob ));

			V_RETURN(m_pRenderSystem->GetDevice()->CreateVertexShader( pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize(), NULL, &m_pVS_WithClipPlane ));

			pVSBlob->Release();
		}

		// Create vertex layout
		_CreateVertexLayout();

		if (m_shaderType == eShader_Opaque)
		{
			V_RETURN(_CompileShaderFromFile(psFileName.c_str(), "PS_GBuffer", "ps_4_0", vecMacro, &pPSBlob));
			V_RETURN(m_pRenderSystem->GetDevice()->CreatePixelShader(pPSBlob->GetBufferPointer(), pPSBlob->GetBufferSize(), NULL, &m_pPS_GBuffer));
			pPSBlob->Release();
		}

		return true;
	}
	//------------------------------------------------------------------------------------
	bool Material::InitTessellationShader( const STRING& filename, uint32 shaderFalg, const D3D_SHADER_MACRO* pMacro )
	{
		HRESULT hr = S_OK;
		ID3DBlob* pHSBlob = NULL;
		ID3DBlob* pDSBlob = NULL;

		m_shaderFlag = shaderFalg;

		const std::vector<D3D_SHADER_MACRO> vecMacro = _InternelInitShader(pMacro);

		V_RETURN(_CompileShaderFromFile( filename.c_str(), "HS", "hs_5_0", vecMacro, &pHSBlob ));
		V_RETURN(_CompileShaderFromFile( filename.c_str(), "DS", "ds_5_0", vecMacro, &pDSBlob ));

		V_RETURN(m_pRenderSystem->GetDevice()->CreateHullShader( pHSBlob->GetBufferPointer(), pHSBlob->GetBufferSize(), NULL, &m_pHullShader ));
		V_RETURN(m_pRenderSystem->GetDevice()->CreateDomainShader( pDSBlob->GetBufferPointer(), pDSBlob->GetBufferSize(), NULL, &m_pDomainShader ));

		pHSBlob->Release();
		pDSBlob->Release();

		return true;
	}
	//-------------------------------------------------------------------------------
	bool Material::_CompileShaderFromFile( const char* szFileName, const char* szEntryPoint, const char* szShaderModel, 
		const std::vector<D3D_SHADER_MACRO>& vecMacro, ID3DBlob** ppBlobOut )
	{
		HRESULT hr = S_OK;

		const D3D_SHADER_MACRO* pMacro = vecMacro.size() == 1 ? nullptr : &vecMacro[0];

		DWORD dwShaderFlags = D3DCOMPILE_ENABLE_STRICTNESS;
#if defined( DEBUG ) || defined( _DEBUG )
		dwShaderFlags |= D3DCOMPILE_DEBUG;
#endif

		ID3DBlob* pErrorBlob;
		hr = D3DX11CompileFromFile( szFileName, pMacro, NULL, szEntryPoint, szShaderModel, 
			dwShaderFlags, 0, NULL, ppBlobOut, &pErrorBlob, NULL );
		if( FAILED(hr) )
		{
			if( pErrorBlob != NULL )
			{
				MessageBoxA(nullptr, (char*)pErrorBlob->GetBufferPointer(), "Error", MB_OK | MB_ICONERROR);
			}
			if( pErrorBlob ) pErrorBlob->Release();
			return false;
		}
		if( pErrorBlob ) pErrorBlob->Release();

		return true;
	}
	//-------------------------------------------------------------------------------
	void Material::_CreateVertexLayout()
	{
		switch (m_vertType)
		{
		case eVertexType_General:
			{
				D3D11_INPUT_ELEMENT_DESC layout[] =
				{
					{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
					{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
					{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
					{ "COLOR", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				};

				SAFE_RELEASE(m_pInputLayout);

				HRESULT hr = m_pRenderSystem->GetDevice()->CreateInputLayout( 
					layout, ARRAYSIZE(layout), &m_vsCode[0], m_vsCode.size(), &m_pInputLayout );

				assert(SUCCEEDED( hr ) && "Create vertex input layout failed!");
			}
			break;

		case eVertexType_TreeLeaf:
			{
				D3D11_INPUT_ELEMENT_DESC layout[] =
				{
					{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
					{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
					{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
					{ "TEXCOORD", 1, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
					{ "TEXCOORD", 2, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
					{ "TEXCOORD", 3, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },					
				};

				SAFE_RELEASE(m_pInputLayout);

				HRESULT hr = m_pRenderSystem->GetDevice()->CreateInputLayout( 
					layout, ARRAYSIZE(layout), &m_vsCode[0], m_vsCode.size(), &m_pInputLayout );

				assert(SUCCEEDED( hr ) && "Create vertex input layout failed!");
			}
			break;

		default: assert(0); break;
		}
	}
	//-------------------------------------------------------------------------------
	void Material::Activate(uint32 iSubMtl)
	{
		ID3D11DeviceContext* pDeviceContext = m_pRenderSystem->GetDeviceContext();

		// Cull mode
		const D3D11_CULL_MODE curCullMode = m_pRenderSystem->GetRasterizeDesc().CullMode;
		D3D11_RASTERIZER_DESC& desc = m_pRenderSystem->GetRasterizeDesc();

		if (m_pRenderSystem->IsClipPlaneEnabled())
		{
			switch (m_cullMode)
			{
			case D3D11_CULL_FRONT: desc.CullMode = D3D11_CULL_BACK; break;
			case D3D11_CULL_BACK: desc.CullMode = D3D11_CULL_FRONT; break;
			default: break;
			}
			
			m_pRenderSystem->SetRasterizeDesc(desc);
		}
		else if (m_cullMode != curCullMode)
		{
			desc.CullMode = m_cullMode;
			m_pRenderSystem->SetRasterizeDesc(desc);
		}

		// Clip plane
		if (m_pRenderSystem->IsClipPlaneEnabled() && m_pVS_WithClipPlane)
			pDeviceContext->VSSetShader( m_pVS_WithClipPlane, NULL, 0 );
		else			
			pDeviceContext->VSSetShader( m_pVertexShader, NULL, 0 );

		pDeviceContext->IASetInputLayout( m_pInputLayout );

		if (m_pHullShader && m_pDomainShader)
		{
			pDeviceContext->HSSetShader(m_pHullShader, nullptr, 0);
			pDeviceContext->DSSetShader(m_pDomainShader, nullptr, 0);

			m_pRenderSystem->UpdateGlobalCBuffer(true);

			pDeviceContext->IASetPrimitiveTopology( D3D11_PRIMITIVE_TOPOLOGY_4_CONTROL_POINT_PATCHLIST );
		}
		else
		{
			pDeviceContext->IASetPrimitiveTopology( D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST );
		}

		const uint32 curPhase = g_env.pSceneMgr->GetCurRenderPhase();

		switch (curPhase)
		{
		case eRenderPhase_GBuffer: pDeviceContext->PSSetShader(m_pPS_GBuffer, NULL, 0); break;
		default: pDeviceContext->PSSetShader(m_pPixelShader, NULL, 0); break;
		}

		for (int i = 0; i < MAX_TEXTURE_STAGE; ++i)
		{
			if (m_pSamplerState[i])
			{
				g_env.pRenderSystem->SetActiveSamplerState(i, m_pSamplerState[i]);
			}
		}
		
		m_vecSubMtls[iSubMtl].Activate();
	}
	//------------------------------------------------------------------------------------
	void Material::SetSamplerStateDesc( int stage, const D3D11_SAMPLER_DESC& desc )
	{
		assert(stage >= 0 && stage < MAX_TEXTURE_STAGE);

		SAFE_RELEASE(m_pSamplerState[stage]);

		m_samplerStateDesc[stage] = desc;
		HRESULT hr = m_pRenderSystem->GetDevice()->CreateSamplerState(&m_samplerStateDesc[stage], &m_pSamplerState[stage]);
		assert(SUCCEEDED(hr) && "Failed to CreateSamplerState!");
	}
	//-------------------------------------------------------------------------------
	void Material::TurnOffTessellation()
	{
		ID3D11DeviceContext* pDeviceContext = m_pRenderSystem->GetDeviceContext();

		pDeviceContext->HSSetShader(nullptr, nullptr, 0);
		pDeviceContext->DSSetShader(nullptr, nullptr, 0);
	}
	//------------------------------------------------------------------------------------
	std::vector<D3D_SHADER_MACRO> Material::_InternelInitShader( const D3D_SHADER_MACRO* pMacro )
	{
		std::vector<D3D_SHADER_MACRO> retMacros;

		if (pMacro)
		{
			for (int i=0; i<sizeof(pMacro)/sizeof(pMacro[0]); ++i)
			{
				retMacros.push_back(pMacro[i]);
			}
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
//#if USE_CSM
//					D3D_SHADER_MACRO macroCSM = { "SHADOW_CSM", "" };
//					retMacros.push_back(macroCSM);
//
//					for (int iCascade = 0; iCascade < CSM_CASCADE_NUM; ++iCascade)
//					{
//						SetTexture(i + iCascade, g_env.pSceneMgr->GetShadowMap()->GetCSM()->GetShadowTexture(iCascade));
//					}
//#else
//					SetTexture(i, g_env.pSceneMgr->GetShadowMap()->GetShadowTexture());
//#endif
//
//					break;
//				}
//			}
//		}

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
	void Material::SetTexture(int stage, D3D11Texture* pTexture)
	{
		assert(stage >= 0 && stage < MAX_TEXTURE_STAGE);

		for (uint32 i = 0; i < m_vecSubMtls.size(); ++i)
		{
			m_vecSubMtls[i].SetTexture(stage, pTexture);
		}
	}

	//------------------------------------------------------------------------------------
	SubMaterial::SubMaterial()
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
	void SubMaterial::Activate()
	{
		// Apply textures
		for (int i = 0; i < MAX_TEXTURE_STAGE; ++i)
		{
			if (m_pTexture[i])
			{
				g_env.pRenderSystem->SetActiveTexture(i, m_pTexture[i]);
			}
		}
	}
	//------------------------------------------------------------------------------------
	void SubMaterial::SetTexture(int stage, D3D11Texture* pTexture)
	{
		assert(stage >= 0 && stage < MAX_TEXTURE_STAGE);

		SAFE_RELEASE(m_pTexture[stage]);
		m_pTexture[stage] = pTexture;

		if (pTexture)
			pTexture->AddRef();
	}
}



