#include "stdafx.h"
#include "Material.h"
#include <D3Dcompiler.h>
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"


namespace Neo
{
	//-------------------------------------------------------------------------------
	Material::Material()
	:ambient(SColor::WHITE)
	,diffuse(SColor::WHITE)
	,specular(SColor::WHITE)
	,shiness(20)
	,m_pVertexShader(nullptr)
	,m_pPixelShader(nullptr)
	,m_pInputLayout(nullptr)
	{
		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			m_pTexture[i] = nullptr;

			D3D11_SAMPLER_DESC ssDesc = CD3D11_SAMPLER_DESC(CD3D11_DEFAULT());
			// Default wrap mode
			ssDesc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
			ssDesc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
			ssDesc.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;

			HRESULT hr = g_env.pRenderSystem->GetDevice()->CreateSamplerState(&ssDesc, &m_pSamplerState[i]);
			assert(SUCCEEDED(hr) && "Failed to CreateSamplerState!");
		}
	}
	//-------------------------------------------------------------------------------
	Material::~Material()
	{
		SAFE_RELEASE(m_pInputLayout);
		SAFE_RELEASE(m_pVertexShader);
		SAFE_RELEASE(m_pPixelShader);

		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			SAFE_RELEASE(m_pTexture[i]);
			SAFE_RELEASE(m_pSamplerState[i]);
		}
	}
	//-------------------------------------------------------------------------------
	bool Material::InitShader( const STRING& vsFileName, const STRING& psFileName )
	{
		HRESULT hr = S_OK;

		// Compile the vertex shader
		ID3DBlob* pVSBlob = NULL;
		bool bSucceed = _CompileShaderFromFile( vsFileName.c_str(), "VS", "vs_4_0", &pVSBlob );
		assert(bSucceed);

		// Create the vertex shader
		hr = g_env.pRenderSystem->GetDevice()->CreateVertexShader( pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize(), NULL, &m_pVertexShader );
		assert(SUCCEEDED(hr) && "Create vertex shader failed!");

		// Compile the pixel shader
		ID3DBlob* pPSBlob = NULL;
		bSucceed = _CompileShaderFromFile( psFileName.c_str(), "PS", "ps_4_0", &pPSBlob );
		assert(bSucceed);

		// Create the pixel shader
		hr = g_env.pRenderSystem->GetDevice()->CreatePixelShader( pPSBlob->GetBufferPointer(), pPSBlob->GetBufferSize(), NULL, &m_pPixelShader );
		assert(SUCCEEDED(hr) && "Create pixel shader failed!");		

		m_vsCode.resize(pVSBlob->GetBufferSize());
		memcpy_s(&m_vsCode[0], m_vsCode.size(), pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize());

		pVSBlob->Release();
		pPSBlob->Release();

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

		HRESULT hr = g_env.pRenderSystem->GetDevice()->CreateInputLayout( 
			layout, ARRAYSIZE(layout), &m_vsCode[0], m_vsCode.size(), &m_pInputLayout );

		assert(SUCCEEDED( hr ) && "Create vertex input layout failed!");
	}
	//-------------------------------------------------------------------------------
	void Material::Activate()
	{
		ID3D11DeviceContext* pDeviceContext = g_env.pRenderSystem->GetDeviceContext();

		pDeviceContext->VSSetShader( m_pVertexShader, NULL, 0 );
		pDeviceContext->PSSetShader( m_pPixelShader, NULL, 0 );
		pDeviceContext->IASetInputLayout( m_pInputLayout );

		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
		{
			if (m_pTexture[i])
			{
				pDeviceContext->PSSetSamplers(i, 1, &m_pSamplerState[i]);
				pDeviceContext->PSSetShaderResources(i, 1, m_pTexture[i]->GetSRV());
			}
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
}



