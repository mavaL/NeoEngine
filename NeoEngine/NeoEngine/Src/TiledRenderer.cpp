#include "stdafx.h"
#include "TiledRenderer.h"
#include "Material.h"
#include "StructuredBuffer.h"
#include "D3D11RenderSystem.h"
#include "SceneManager.h"
#include "D3D11RenderTarget.h"
#include "D3D11Texture.h"

namespace Neo
{
	const uint32	COMPUTE_SHADER_TILE_GROUP_DIM = 16;
	//------------------------------------------------------------------------------------
	TileBasedDeferredRenderer::TileBasedDeferredRenderer()
	{
		m_pMtlTiledCS = new Material;
		m_pMtlTiledCS->InitComputeShader(GetResPath("TiledCS.hlsl"));

		const uint32 nBufferSize = g_env.pRenderSystem->GetWndWidth() * g_env.pRenderSystem->GetWndHeight();
		m_pLitBuffer = new StructuredBuffer<FramebufferFlatElement>(g_env.pRenderSystem->GetDevice(), nBufferSize, D3D11_BIND_UNORDERED_ACCESS | D3D11_BIND_SHADER_RESOURCE);

		D3D11_SAMPLER_DESC samDesc = CD3D11_SAMPLER_DESC(CD3D11_DEFAULT());
		samDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
		g_env.pRenderSystem->GetDevice()->CreateSamplerState(&samDesc, &m_pSamp);
	}
	//------------------------------------------------------------------------------------
	TileBasedDeferredRenderer::~TileBasedDeferredRenderer()
	{
		SAFE_RELEASE(m_pSamp);
		SAFE_RELEASE(m_pMtlTiledCS);
		SAFE_RELEASE(m_pLitBuffer);
	}
	//------------------------------------------------------------------------------------
	void TileBasedDeferredRenderer::Render()
	{
		ID3D11DeviceContext* pDeviceContext = g_env.pRenderSystem->GetDeviceContext();

		g_env.pRenderSystem->SetRenderTarget(nullptr, nullptr, 1, false, false);

		ID3D11ShaderResourceView* pSRV1 = g_env.pSceneMgr->GetAlbedoRT()->GetRenderTexture()->GetSRV();
		ID3D11ShaderResourceView* pSRV2 = g_env.pSceneMgr->GetNormalRT()->GetRenderTexture()->GetSRV();
		ID3D11ShaderResourceView* pSRV3 = g_env.pSceneMgr->GetSpecRT()->GetRenderTexture()->GetSRV();
		ID3D11ShaderResourceView* pSRV4 = g_env.pSceneMgr->GetDepthRT()->GetRenderTexture()->GetSRV();

		pDeviceContext->CSSetShaderResources(0, 1, &pSRV1);
		pDeviceContext->CSSetShaderResources(1, 1, &pSRV2);
		pDeviceContext->CSSetShaderResources(2, 1, &pSRV3);
		pDeviceContext->CSSetShaderResources(3, 1, &pSRV4);

		auto pUAV = m_pLitBuffer->GetUnorderedAccess();
		pDeviceContext->CSSetUnorderedAccessViews(0, 1, &pUAV, 0);

		m_pMtlTiledCS->Activate();

		pDeviceContext->CSSetSamplers(0, 1, &m_pSamp);

		// Dispatch
		unsigned int dispatchWidth = (g_env.pRenderSystem->GetWndWidth() + COMPUTE_SHADER_TILE_GROUP_DIM - 1) / COMPUTE_SHADER_TILE_GROUP_DIM;
		unsigned int dispatchHeight = (g_env.pRenderSystem->GetWndHeight() + COMPUTE_SHADER_TILE_GROUP_DIM - 1) / COMPUTE_SHADER_TILE_GROUP_DIM;
		pDeviceContext->Dispatch(dispatchWidth, dispatchHeight, 1);

		ID3D11ShaderResourceView* pNullSRV[4] = {nullptr};
		ID3D11UnorderedAccessView* pNullUAV = nullptr;

		m_pMtlTiledCS->TurnOffComputeShader();
		pDeviceContext->CSSetShaderResources(0, 4, pNullSRV);
		pDeviceContext->CSSetUnorderedAccessViews(0, 1, &pNullUAV, 0);
	}

}

