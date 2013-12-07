#include "stdafx.h"
#include "D3D11RenderTarget.h"
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "SceneManager.h"
#include "Application.h"
#include "Camera.h"


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

		// Create depth stencil buffer
		D3D11_TEXTURE2D_DESC descTex;
		pRenderTexture->GetInternalTex()->GetDesc(&descTex);

		D3D11_TEXTURE2D_DESC descDepth;
		ZeroMemory( &descDepth, sizeof(descDepth) );

		descDepth.Width = pRenderTexture->GetWidth();
		descDepth.Height = pRenderTexture->GetHeight();
		descDepth.MipLevels				= 1;
		descDepth.ArraySize				= descTex.ArraySize;
		descDepth.Format				= DXGI_FORMAT_D32_FLOAT;
		descDepth.SampleDesc.Count		= descTex.SampleDesc.Count;
		descDepth.SampleDesc.Quality	= descTex.SampleDesc.Quality;
		descDepth.Usage					= D3D11_USAGE_DEFAULT;
		descDepth.BindFlags				= D3D11_BIND_DEPTH_STENCIL;
		descDepth.CPUAccessFlags		= 0;
		descDepth.MiscFlags				= 0;

		HRESULT hr = m_pRenderSystem->GetDevice()->CreateTexture2D( &descDepth, NULL, &m_pDepthStencil );
		assert(SUCCEEDED(hr));

		// Create the depth stencil view
		D3D11_DEPTH_STENCIL_VIEW_DESC descDSV;
		ZeroMemory( &descDSV, sizeof(descDSV) );
		descDSV.Format = descDepth.Format;
		descDSV.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
		descDSV.Texture2D.MipSlice = 0;
		hr = m_pRenderSystem->GetDevice()->CreateDepthStencilView( m_pDepthStencil, &descDSV, &m_pDepthStencilView );
		assert(SUCCEEDED(hr));
	}
	//----------------------------------------------------------------------------------------
	D3D11RenderTarget::~D3D11RenderTarget()
	{
		SAFE_RELEASE(m_pDepthStencilView);
		SAFE_RELEASE(m_pDepthStencil);
		SAFE_RELEASE(m_pRenderTexture);
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderTarget::Update(Material* pMaterial)
	{
		// Update aspect ratio and viewport
		Camera* pCamera = g_env.pApp->GetCamera();
		float oldAspectRatio = pCamera->GetAspectRatio();
		pCamera->SetAspectRatio(m_pRenderTexture->GetWidth() / (float)m_pRenderTexture->GetHeight());

		m_pRenderSystem->SetTransform(eTransform_Proj, pCamera->GetProjMatrix(), true);

		D3D11_VIEWPORT& vp = m_pRenderSystem->GetViewport();
		vp.Width = (float)m_pRenderTexture->GetWidth();
		vp.Height = (float)m_pRenderTexture->GetHeight();

		m_pRenderSystem->SetRenderTarget(this, m_bClearEveryFrame, &m_clearColor);
		m_pRenderSystem->SetViewport(vp);

		// Update RT
		g_env.pSceneMg->RenderPipline(m_phaseFlag, pMaterial);

		// Restore
		pCamera->SetAspectRatio(oldAspectRatio);
		m_pRenderSystem->SetTransform(eTransform_Proj, pCamera->GetProjMatrix(), true);

		vp.Width = (float)SCREEN_WIDTH;
		vp.Height = (float)SCREEN_HEIGHT;

		m_pRenderSystem->SetRenderTarget(nullptr, false);
		m_pRenderSystem->SetViewport(vp);
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
