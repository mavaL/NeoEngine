#include "stdafx.h"
#include "D3D11/D3D11RenderTarget.h"
#include "D3D11/D3D11RenderSystem.h"
#include "D3D11/D3D11Texture.h"
#include "SceneManager.h"
#include "Camera.h"
#include "Material.h"
#include "Renderer.h"
#include "Entity.h"

namespace Neo
{
	//----------------------------------------------------------------------------------------
	D3D11RenderTarget::D3D11RenderTarget()
		: m_sizeRatio(0, 0)
	{
		
	}
	//----------------------------------------------------------------------------------------
	D3D11RenderTarget::~D3D11RenderTarget()
	{
		Destroy();
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::Init(uint32 width, uint32 height, ePixelFormat format, uint32 usage)
	{
		// Setup the viewport
		m_viewport.Width = (float)width;
		m_viewport.Height = (float)height;
		m_viewport.MinDepth = 0.0f;
		m_viewport.MaxDepth = 1.0f;
		m_viewport.TopLeftX = 0;
		m_viewport.TopLeftY = 0;

		const uint32 screenW = g_env.pRenderer->GetWndWidth();
		const uint32 screenH = g_env.pRenderer->GetWndHeight();

		m_nUsage = usage;
		m_sizeRatio.Set(width / (float)screenW, height / (float)screenH);

		// Create render texture
		if (!(m_nUsage & eRenderTargetUsage_NoColorTex))
		{
			uint32 nTexUsage = eTextureUsage_RenderTarget;

			if (m_nUsage & eRenderTargetUsage_GenMips)
			{
				nTexUsage |= eTextureUsage_AutoGenMips;
			}

			m_pRenderTexture = new D3D11Texture(width, height, nullptr, format, nTexUsage, m_nUsage & eRenderTargetUsage_GenMips);
		}

		// Create depth stencil buffer
		if (m_nUsage & eRenderTargetUsage_OwnDepthTex)
		{
			_CreateDepthBuffer(width, height);
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::Init(uint32 width, uint32 height, uint32 depth, ePixelFormat format, uint32 usage)
	{
		// Setup the viewport
		m_viewport.Width = (float)width;
		m_viewport.Height = (float)height;
		m_viewport.MinDepth = 0.0f;
		m_viewport.MaxDepth = 1.0f;
		m_viewport.TopLeftX = 0;
		m_viewport.TopLeftY = 0;

		const uint32 screenW = g_env.pRenderer->GetWndWidth();
		const uint32 screenH = g_env.pRenderer->GetWndHeight();

		m_nUsage = usage;
		m_sizeRatio.Set(width / (float)screenW, height / (float)screenH);

		// Create render texture
		if (!(m_nUsage & eRenderTargetUsage_NoColorTex))
		{
			m_pRenderTexture = new D3D11Texture(width, height, depth, format, eTextureUsage_RenderTarget, false);
		}

		// Create depth stencil buffer
		if (m_nUsage & eRenderTargetUsage_OwnDepthTex)
		{
			_CreateDepthBuffer(width, height);
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::Destroy()
	{
		SAFE_RELEASE(m_pDepthStencil);
		SAFE_RELEASE(m_pRenderTexture);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::_CreateDepthBuffer( uint32 width, uint32 height )
	{
		m_pDepthStencil = new D3D11Texture(width, height, nullptr, ePF_Depth32, eTextureUsage_Depth, false);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::RenderScreenQuad(Material* pMaterial, bool bClearColor, bool bClearZ, const SColor& clearColor, float fz)
	{
		BeforeRender(bClearColor, bClearZ, clearColor, fz);

		// Turn off z buffer
		SStateDepth oldDepthState = g_env.pRenderer->GetCurDepthState();
		SStateDepth depthState = oldDepthState;
		depthState.Desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
		depthState.Desc.DepthEnable = FALSE;
		g_env.pRenderer->SetDepthState(&depthState);

		pMaterial->Activate();
		m_pQuadEntity->Render();	

		AfterRender();

		// Restore render state
		g_env.pRenderer->SetDepthState(&oldDepthState);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::OnWindowResized()
	{
		const uint32 screenW = g_env.pRenderer->GetWndWidth();
		const uint32 screenH = g_env.pRenderer->GetWndHeight();

		const uint32 newWidth = (uint32)(screenW * m_sizeRatio.x);
		const uint32 newHeight = (uint32)(screenH * m_sizeRatio.y);

		// Resize render texture
		m_pRenderTexture->Resize(newWidth, newHeight);
		m_pDepthStencil->Resize(newWidth, newHeight);
	}
}
