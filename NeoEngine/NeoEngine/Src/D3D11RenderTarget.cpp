#include "stdafx.h"
#include "D3D11RenderTarget.h"
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "SceneManager.h"


namespace Neo
{
	//----------------------------------------------------------------------------------------
	D3D11RenderTarget::D3D11RenderTarget( D3D11Texture* pRenderTexture )
	:m_clearColor(SColor::BLACK)
	,m_bClearEveryFrame(true)
	,m_phaseFlag(eRenderPhase_All)
	{
		m_pRenderSystem = g_env.pRenderSystem;
		m_pRenderTexture = pRenderTexture;
		pRenderTexture->AddRef();
	}
	//----------------------------------------------------------------------------------------
	D3D11RenderTarget::~D3D11RenderTarget()
	{
		SAFE_RELEASE(m_pRenderTexture);
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderTarget::Update()
	{
		m_pRenderSystem->SetRenderTarget(this, m_bClearEveryFrame, &m_clearColor);

		g_env.pSceneMg->RenderPipline(m_phaseFlag);

		m_pRenderSystem->SetRenderTarget(nullptr, false);
	}
	//----------------------------------------------------------------------------------------
	D3D11Texture* D3D11RenderTarget::GetRenderTexture()
	{
		return m_pRenderTexture;
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderTarget::SetClearColor( const SColor& color )
	{
		m_clearColor = color;
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderTarget::SetClearEveryFrame( bool bClear )
	{
		m_bClearEveryFrame = bClear;
	}
}
