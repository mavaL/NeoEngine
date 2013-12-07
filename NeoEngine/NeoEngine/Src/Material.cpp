#include "stdafx.h"
#include "Material.h"
#include <D3Dcompiler.h>
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"


namespace Neo
{
	//-------------------------------------------------------------------------------
	Material::Material()
	:m_pRenderSystem(g_env.pRenderSystem)
	,ambient(SColor::WHITE)
	,diffuse(SColor::WHITE)
	,specular(SColor::WHITE)
	,shiness(20)
	,m_pVertexShader(nullptr)
	,m_pPixelShader(nullptr)
	,m_pVS_WithClipPlane(nullptr)
	,m_pInputLayout(nullptr)
	{
		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			m_pTexture[i] = nullptr;
			m_pSamplerState[i] = nullptr;

			m_samplerStateDesc[i] = CD3D11_SAMPLER_DESC(CD3D11_DEFAULT());
			// Default wrap mode
			m_samplerStateDesc[i].AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
			m_samplerStateDesc[i].AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
			m_samplerStateDesc[i].AddressW = D3D11_TEXTURE_ADDRESS_WRAP;

			SetSamplerStateDesc(i, m_samplerStateDesc[i]);
		}
	}
	//-------------------------------------------------------------------------------
	Material::~Material()
	{
		SAFE_RELEASE(m_pInputLayout);
		SAFE_RELEASE(m_pVertexShader);
		SAFE_RELEASE(m_pPixelShader);
		SAFE_RELEASE(m_pVS_WithClipPlane);

		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			SAFE_RELEASE(m_pTexture[i]);
			SAFE_RELEASE(m_pSamplerState[i]);
		}
	}
	//-------------------------------------------------------------------------------
	bool Material::InitShader( const STRING& vsFileName, const STRING& psFileName, bool bHasClipPlaneShader )
	{
		HRESULT hr = S_OK;

		// Compile the vertex shader
		ID3DBlob* pVSBlob = NULL;
		bool bSucceed = _CompileShaderFromFile( vsFileName.c_str(), "VS", "vs_4_0", &pVSBlob );
		assert(bSucceed);

		// Create the vertex shader
		hr = m_pRenderSystem->GetDevice()->CreateVertexShader( pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize(), NULL, &m_pVertexShader );
		assert(SUCCEEDED(hr) && "Create vertex shader failed!");

		// Compile the pixel shader
		ID3DBlob* pPSBlob = NULL;
		bSucceed = _CompileShaderFromFile( psFileName.c_str(), "PS", "ps_4_0", &pPSBlob );
		assert(bSucceed);

		// Create the pixel shader
		hr = m_pRenderSystem->GetDevice()->CreatePixelShader( pPSBlob->GetBufferPointer(), pPSBlob->GetBufferSize(), NULL, &m_pPixelShader );
		assert(SUCCEEDED(hr) && "Create pixel shader failed!");		

		m_vsCode.resize(pVSBlob->GetBufferSize());
		memcpy_s(&m_vsCode[0], m_vsCode.size(), pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize());

		pVSBlob->Release();
		pPSBlob->Release();

		// Create clip plane shader
		m_bHasClipPlaneShader = bHasClipPlaneShader;
		if (m_bHasClipPlaneShader)
		{
			bSucceed = _CompileShaderFromFile( vsFileName.c_str(), "VS_ClipPlane", "vs_4_0", &pVSBlob );
			assert(bSucceed);

			hr = m_pRenderSystem->GetDevice()->CreateVertexShader( pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize(), NULL, &m_pVS_WithClipPlane );
			assert(SUCCEEDED(hr) && "Create clip plane shader failed!");

			pVSBlob->Release();
		}

		// Create vertex layout
		_CreateVertexLayout();

		return true;
	}
	//-------------------------------------------------------------------------------
	bool Material::_CompileShaderFromFile( const char* szFileName, const char* szEntryPoint, const char* szShaderModel, ID3DBlob** ppBlobOut )
	{
		HRESULT hr = S_OK;

		DWORD dwShaderFlags = D3DCOMPILE_ENABLE_STRICTNESS;
#if defined( DEBUG ) || defined( _DEBUG )
		dwShaderFlags |= D3DCOMPILE_DEBUG;
#endif

		ID3DBlob* pErrorBlob;
		hr = D3DX11CompileFromFile( szFileName, NULL, NULL, szEntryPoint, szShaderModel, 
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
		D3D11_INPUT_ELEMENT_DESC layout[] =
		{
			{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
			{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
			{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
			{ "COLOR", 0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		};

		SAFE_RELEASE(m_pInputLayout);

		HRESULT hr = m_pRenderSystem->GetDevice()->CreateInputLayout( 
			layout, ARRAYSIZE(layout), &m_vsCode[0], m_vsCode.size(), &m_pInputLayout );

		assert(SUCCEEDED( hr ) && "Create vertex input layout failed!");
	}
	//-------------------------------------------------------------------------------
	void Material::Activate()
	{
		ID3D11DeviceContext* pDeviceContext = m_pRenderSystem->GetDeviceContext();

		if (m_pRenderSystem->IsClipPlaneEnabled() && m_pVS_WithClipPlane)
			pDeviceContext->VSSetShader( m_pVS_WithClipPlane, NULL, 0 );
		else			
			pDeviceContext->VSSetShader( m_pVertexShader, NULL, 0 );

		pDeviceContext->PSSetShader( m_pPixelShader, NULL, 0 );
		pDeviceContext->IASetInputLayout( m_pInputLayout );

		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			m_pRenderSystem->SetActiveTexture(i, m_pTexture[i], m_pSamplerState[i]);
		}
	}
	//------------------------------------------------------------------------------------
	void Material::SetTexture( int stage, D3D11Texture* pTexture )
	{
		assert(stage >= 0 && stage < MAX_TEXTURE_STAGE);

		SAFE_RELEASE(m_pTexture[stage]);
		m_pTexture[stage] = pTexture;

		if(pTexture)
			pTexture->AddRef();
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
}



