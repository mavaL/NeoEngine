#include "stdafx.h"
#include "SSAO.h"
#include "D3D11RenderTarget.h"
#include "D3D11Texture.h"
#include "D3D11RenderSystem.h"
#include "Material.h"


namespace Neo
{
	//------------------------------------------------------------------------------------
	SSAO::SSAO()
	:m_pRenderSystem(g_env.pRenderSystem)
	{
		// Init ssao RT & material
		m_pTexNormalDepth = new D3D11Texture(SCREEN_WIDTH, SCREEN_HEIGHT, nullptr, 
			ePF_A16B16G16R16F, eTextureUsage_RenderTarget, false);

		m_pRT_NormalDepth = new D3D11RenderTarget(m_pTexNormalDepth, false, false);
		m_pRT_NormalDepth->SetRenderPhase(eRenderPhase_Solid);
		m_pRT_NormalDepth->SetClearEveryFrame(true, false);

		m_pNormalDepthMaterial = new Material;
		m_pNormalDepthMaterial->InitShader(GetResPath("ViewSpaceNormalDepth.hlsl"), GetResPath("ViewSpaceNormalDepth.hlsl"), false);

		m_pTexSsao = new D3D11Texture(SCREEN_WIDTH, SCREEN_HEIGHT, nullptr, 
			ePF_R16F, eTextureUsage_RenderTarget, false);

		m_pRT_ssao = new D3D11RenderTarget(m_pTexSsao, false, false);
		m_pRT_ssao->SetClearEveryFrame(false, false);

		m_pSsaoMaterial = new Material;
		m_pSsaoMaterial->InitShader(GetResPath("SSAO.hlsl"), GetResPath("SSAO.hlsl"), false);
		m_pSsaoMaterial->SetTexture(0, m_pTexNormalDepth);

		D3D11_SAMPLER_DESC& samDesc = m_pSsaoMaterial->GetSamplerStateDesc(0);
		samDesc.Filter = D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT;
		samDesc.AddressU = D3D11_TEXTURE_ADDRESS_BORDER;
		samDesc.AddressV = D3D11_TEXTURE_ADDRESS_BORDER;
		samDesc.BorderColor[0] = samDesc.BorderColor[1] = samDesc.BorderColor[2] = 0;
		// Set a very far depth value if sampling outside of the NormalDepth map
		// so we do not get false occlusions.
		samDesc.BorderColor[3] = 1e7;

		m_pSsaoMaterial->SetSamplerStateDesc(0, samDesc);

		// Init blur RT & material
		m_pTexBlurH = new D3D11Texture(SCREEN_WIDTH, SCREEN_HEIGHT, nullptr, ePF_R16F, eTextureUsage_RenderTarget, false);
		m_pTexBlurV = new D3D11Texture(SCREEN_WIDTH, SCREEN_HEIGHT, nullptr, ePF_R16F, eTextureUsage_RenderTarget, false);

		m_pRT_BlurH = new D3D11RenderTarget(m_pTexBlurH, false, false);
		m_pRT_BlurV = new D3D11RenderTarget(m_pTexBlurV, false, false);

		m_pRT_BlurH->SetClearEveryFrame(true, false);
		m_pRT_BlurV->SetClearEveryFrame(true, false);

		m_pBlurHMaterial = new Material;
		m_pBlurVMaterial = new Material;
		m_pBlurHMaterial->InitShader(GetResPath("BilateralBlur.hlsl"), GetResPath("BilateralBlur.hlsl"), false, nullptr);
		m_pBlurVMaterial->InitShader(GetResPath("BilateralBlur.hlsl"), GetResPath("BilateralBlur.hlsl"), false, nullptr);
		m_pBlurHMaterial->SetTexture(0, m_pTexNormalDepth);
		m_pBlurVMaterial->SetTexture(0, m_pTexNormalDepth);

		// Clamp in case of out of border
		D3D11_SAMPLER_DESC& sampler = m_pBlurHMaterial->GetSamplerStateDesc(0);
		sampler.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
		sampler.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;
		sampler.Filter = D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT;

		m_pBlurHMaterial->SetSamplerStateDesc(0, sampler);
		m_pBlurHMaterial->SetSamplerStateDesc(1, sampler);
		m_pBlurVMaterial->SetSamplerStateDesc(0, sampler);
		m_pBlurVMaterial->SetSamplerStateDesc(1, sampler);

		// Create constant buffer
		HRESULT hr = S_OK;
		D3D11_BUFFER_DESC bd;
		ZeroMemory( &bd, sizeof(bd) );

		bd.Usage = D3D11_USAGE_DEFAULT;
		bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.ByteWidth = sizeof(cBufferBlur);
		V(m_pRenderSystem->GetDevice()->CreateBuffer( &bd, NULL, &m_pCB_Blur ));
	}
	//------------------------------------------------------------------------------------
	SSAO::~SSAO()
	{
		SAFE_RELEASE(m_pNormalDepthMaterial);
		SAFE_RELEASE(m_pTexNormalDepth);
		SAFE_RELEASE(m_pRT_NormalDepth);
		SAFE_RELEASE(m_pSsaoMaterial);
		SAFE_RELEASE(m_pBlurHMaterial);
		SAFE_RELEASE(m_pBlurVMaterial);
		SAFE_RELEASE(m_pTexSsao);
		SAFE_RELEASE(m_pTexBlurH);
		SAFE_RELEASE(m_pTexBlurV);
		SAFE_RELEASE(m_pRT_ssao);
		SAFE_RELEASE(m_pRT_BlurH);
		SAFE_RELEASE(m_pRT_BlurV);
		SAFE_RELEASE(m_pCB_Blur);
	}
	//-------------------------------------------------------------------------------
	void SSAO::Update()
	{
		// Save solid object's normal & depth
		m_pRT_NormalDepth->Update(m_pNormalDepthMaterial);

		// Calc ssao map
		m_pRT_ssao->RenderScreenQuad(m_pSsaoMaterial);

		ID3D11DeviceContext* pContext = m_pRenderSystem->GetDeviceContext();
		float fInvTexW = 1.0f / m_pTexSsao->GetWidth();
		float fInvTexH = 1.0f / m_pTexSsao->GetHeight();
		const int blurRadius = 5;

		// BlurH
		for(int i=-blurRadius; i<=blurRadius; ++i)
			m_cBufferBlur.texelKernel[i+blurRadius].Set(i*fInvTexW, 0, 0, 0);

		pContext->UpdateSubresource( m_pCB_Blur, 0, NULL, &m_cBufferBlur, 0, 0 );
		pContext->VSSetConstantBuffers( 1, 1, &m_pCB_Blur );
		pContext->PSSetConstantBuffers( 1, 1, &m_pCB_Blur );

		m_pBlurHMaterial->SetTexture(1, m_pTexSsao);
		m_pRT_BlurH->RenderScreenQuad(m_pBlurHMaterial);

		// BlurV
		for(int i=-blurRadius; i<=blurRadius; ++i)
			m_cBufferBlur.texelKernel[i+blurRadius].Set(0, i*fInvTexH, 0, 0);

		pContext->UpdateSubresource( m_pCB_Blur, 0, NULL, &m_cBufferBlur, 0, 0 );
		pContext->VSSetConstantBuffers( 1, 1, &m_pCB_Blur );
		pContext->PSSetConstantBuffers( 1, 1, &m_pCB_Blur );

		m_pBlurVMaterial->SetTexture(1, m_pTexBlurH);
		m_pRT_BlurV->RenderScreenQuad(m_pBlurVMaterial);
	}
}