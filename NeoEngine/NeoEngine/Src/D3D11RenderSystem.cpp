#include "stdafx.h"
#include "D3D11RenderSystem.h"
#include "Color.h"
#include "Application.h"
#include "Camera.h"
#include "D3D11Texture.h"
#include "D3D11RenderTarget.h"

namespace Neo
{
	//----------------------------------------------------------------------------------------
	D3D11RenderSystem::D3D11RenderSystem()
	:m_pd3dDevice(nullptr)		   
	,m_pDeviceContext(nullptr)
	,m_pSwapChain(nullptr)
	,m_pRenderTargetView(nullptr)
	,m_pDepthStencil(nullptr)
	,m_pDepthStencilView(nullptr)
	,m_rasterState(nullptr)
	,m_blendState(nullptr)
	,m_depthState(nullptr)
	,m_pGlobalCBuf(nullptr)
	{
		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
			m_pTexture[i] = nullptr;
	}
	//----------------------------------------------------------------------------------------
	bool D3D11RenderSystem::Init( HWND hwnd )
	{
		HRESULT hr = S_OK;

		RECT rc;
		GetClientRect( hwnd, &rc );
		UINT width = rc.right - rc.left;
		UINT height = rc.bottom - rc.top;

		UINT createDeviceFlags = 0;
#ifdef _DEBUG
		createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

		D3D_DRIVER_TYPE driverTypes[] = { D3D_DRIVER_TYPE_HARDWARE };
		UINT numDriverTypes = ARRAYSIZE( driverTypes );

		D3D_FEATURE_LEVEL featureLevels[] = { D3D_FEATURE_LEVEL_11_0 };
		UINT numFeatureLevels = ARRAYSIZE( featureLevels );

		DXGI_SWAP_CHAIN_DESC sd;
		ZeroMemory( &sd, sizeof( sd ) );
		sd.BufferCount = 1;
		sd.BufferDesc.Width = width;
		sd.BufferDesc.Height = height;
		sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
		if (/*m_bEnableVsync*/false)
		{
			sd.BufferDesc.RefreshRate.Numerator = 60;	
			sd.BufferDesc.RefreshRate.Denominator = 1;
		}
		else
		{
			sd.BufferDesc.RefreshRate.Numerator = 0;	
			sd.BufferDesc.RefreshRate.Denominator = 1;
		}
		sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
		sd.OutputWindow = hwnd;
		sd.SampleDesc.Count = 1;
		sd.SampleDesc.Quality = 0;
		sd.Windowed = TRUE;

		for( UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++ )
		{
			D3D_FEATURE_LEVEL featureLevel;
			D3D_DRIVER_TYPE driverType = driverTypes[driverTypeIndex];
			hr = D3D11CreateDeviceAndSwapChain( NULL, driverType, NULL, createDeviceFlags, featureLevels, numFeatureLevels,
				D3D11_SDK_VERSION, &sd, &m_pSwapChain, &m_pd3dDevice, &featureLevel, &m_pDeviceContext );
			if( SUCCEEDED( hr ) )
				break;
		}
		if( FAILED( hr ) )
			return false;

		// Create a render target view
		ID3D11Texture2D* pBackBuffer = NULL;
		hr = m_pSwapChain->GetBuffer( 0, __uuidof( ID3D11Texture2D ), ( LPVOID* )&pBackBuffer );
		if( FAILED( hr ) )
			return false;

		hr = m_pd3dDevice->CreateRenderTargetView( pBackBuffer, NULL, &m_pRenderTargetView );
		pBackBuffer->Release();
		if( FAILED( hr ) )
			return false;

		// Create depth stencil texture
		D3D11_TEXTURE2D_DESC descDepth;
		ZeroMemory( &descDepth, sizeof(descDepth) );
		descDepth.Width = width;
		descDepth.Height = height;
		descDepth.MipLevels = 1;
		descDepth.ArraySize = 1;
		descDepth.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
		descDepth.SampleDesc.Count = 1;
		descDepth.SampleDesc.Quality = 0;
		descDepth.Usage = D3D11_USAGE_DEFAULT;
		descDepth.BindFlags = D3D11_BIND_DEPTH_STENCIL;
		descDepth.CPUAccessFlags = 0;
		descDepth.MiscFlags = 0;
		hr = m_pd3dDevice->CreateTexture2D( &descDepth, NULL, &m_pDepthStencil );
		if( FAILED( hr ) )
			return false;

		// Create the depth stencil view
		D3D11_DEPTH_STENCIL_VIEW_DESC descDSV;
		ZeroMemory( &descDSV, sizeof(descDSV) );
		descDSV.Format = descDepth.Format;
		descDSV.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
		descDSV.Texture2D.MipSlice = 0;
		hr = m_pd3dDevice->CreateDepthStencilView( m_pDepthStencil, &descDSV, &m_pDepthStencilView );
		if( FAILED( hr ) )
			return false;

		m_pDeviceContext->OMSetRenderTargets( 1, &m_pRenderTargetView, m_pDepthStencilView );

		// Init rasterize desc
		m_rasterDesc.AntialiasedLineEnable = false;
		m_rasterDesc.CullMode				= D3D11_CULL_BACK;
		m_rasterDesc.DepthBias				= 0;
		m_rasterDesc.DepthBiasClamp			= 0.0f;
		m_rasterDesc.DepthClipEnable		= true;
		m_rasterDesc.FillMode				= D3D11_FILL_SOLID;
		m_rasterDesc.FrontCounterClockwise	= false;
		m_rasterDesc.MultisampleEnable		= false;
		m_rasterDesc.ScissorEnable			= false;
		m_rasterDesc.SlopeScaledDepthBias	= 0.0f;

		SetRasterizeDesc(m_rasterDesc);

		// Init depth stencil desc
		m_depthStencilDesc = CD3D11_DEPTH_STENCIL_DESC (CD3D11_DEFAULT());

		SetDepthStencelState(m_depthStencilDesc);

		// Init blend state desc
		m_blendDesc.AlphaToCoverageEnable			= FALSE;
		m_blendDesc.IndependentBlendEnable			= FALSE;
		m_blendDesc.RenderTarget[0].BlendEnable		= FALSE;
		m_blendDesc.RenderTarget[0].SrcBlend		= D3D11_BLEND_ONE;
		m_blendDesc.RenderTarget[0].DestBlend		= D3D11_BLEND_ZERO; 
		m_blendDesc.RenderTarget[0].BlendOp			= D3D11_BLEND_OP_ADD; 
		m_blendDesc.RenderTarget[0].SrcBlendAlpha	= D3D11_BLEND_ONE;
		m_blendDesc.RenderTarget[0].DestBlendAlpha	= D3D11_BLEND_ZERO; 
		m_blendDesc.RenderTarget[0].BlendOpAlpha	= D3D11_BLEND_OP_ADD; 
		m_blendDesc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;

		SetBlendStateDesc(m_blendDesc);

		// Setup the viewport
		D3D11_VIEWPORT vp;
		vp.Width = (FLOAT)width;
		vp.Height = (FLOAT)height;
		vp.MinDepth = 0.0f;
		vp.MaxDepth = 1.0f;
		vp.TopLeftX = 0;
		vp.TopLeftY = 0;
		m_pDeviceContext->RSSetViewports( 1, &vp );

		// Create the constant buffer
		D3D11_BUFFER_DESC bd;
		ZeroMemory( &bd, sizeof(bd) );
		bd.Usage = D3D11_USAGE_DEFAULT;
		bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.ByteWidth = sizeof(cBufferGlobal);

		hr = m_pd3dDevice->CreateBuffer( &bd, NULL, &m_pGlobalCBuf );
		assert(SUCCEEDED(hr) && "Create cBuffer failed!");

		return true;
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderSystem::ShutDown()
	{
		if( m_pDeviceContext ) m_pDeviceContext->ClearState();
		SAFE_RELEASE(m_pGlobalCBuf);
		SAFE_RELEASE(m_pRenderTargetView);
		SAFE_RELEASE(m_pSwapChain);
		SAFE_RELEASE(m_pDeviceContext);
		SAFE_RELEASE(m_pd3dDevice);
		SAFE_RELEASE(m_pDepthStencilView);
		SAFE_RELEASE(m_pDepthStencil);
		SAFE_RELEASE(m_rasterState);

		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
			SAFE_RELEASE(m_pTexture[i]);
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderSystem::BeginScene()
	{
		float c[4] = {0.0f, 0.125f, 0.3f, 1};
		m_pDeviceContext->ClearRenderTargetView( m_pRenderTargetView, c );
		m_pDeviceContext->ClearDepthStencilView( m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0 );

		// Update cBuffer
		Camera* cam = g_env.pApp->GetCamera();
		m_cBufferGlobal.matView = m_cBufferGlobal.matView.Transpose();
		m_cBufferGlobal.matProj = m_cBufferGlobal.matProj.Transpose();
		m_cBufferGlobal.time = GetTickCount() / 1000.0f;
		SetWorldTransform(MAT44::IDENTITY, MAT44::IDENTITY);
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderSystem::EndScene()
	{
		if(FAILED(m_pSwapChain->Present(0, 0)))
		{
			assert(0);
		}
	}
	//-------------------------------------------------------------------------------
	void D3D11RenderSystem::AddMaterial( const STRING& name, Material* pMaterial )
	{
		auto iter = m_matLib.find(name);
		if (iter != m_matLib.end())
		{
			throw std::exception("Error! There is already a same name material!");
			return;
		}

		m_matLib.insert(std::make_pair(name, pMaterial));
	}
	//-------------------------------------------------------------------------------
	Material* D3D11RenderSystem::GetMaterial( const STRING& name )
	{
		auto iter = m_matLib.find(name);
		if (iter == m_matLib.end())
		{
			return nullptr;
		} 
		else
		{
			return iter->second;
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetActiveTexture( int stage, D3D11Texture* pTexture )
	{
		assert(stage >=0 && stage < MAX_TEXTURE_STAGE);

		if(m_pTexture[stage] == pTexture)
			return;

		SAFE_RELEASE(m_pTexture[stage]);
		m_pTexture[stage] = pTexture;

		if(pTexture)
		{
			pTexture->AddRef();
			m_pDeviceContext->PSSetShaderResources(stage, 1, pTexture->GetSRV());
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetRenderTarget( D3D11RenderTarget* pRT, bool bClear, const SColor* pClearColor )
	{
		ID3D11RenderTargetView* rtView = nullptr;
		if (pRT)
			rtView = pRT->GetRenderTexture()->GetRTView();
		else	// Recover back frame buffer
			rtView = m_pRenderTargetView;

		m_pDeviceContext->OMSetRenderTargets(1, &rtView, m_pDepthStencilView);

		if (bClear)
		{
			assert(pClearColor);
			m_pDeviceContext->ClearRenderTargetView( rtView, (float*)pClearColor );
			m_pDeviceContext->ClearDepthStencilView( m_pDepthStencilView, D3D11_CLEAR_DEPTH, 1.0f, 0 );
		}
	}
	//------------------------------------------------------------------------------------
	D3D11Texture* D3D11RenderSystem::CreateManualTexture( const STRING& name, uint32 width, uint32 height, 
		ePixelFormat format, eTextureUsage usage, bool bMipMap )
	{
		return new D3D11Texture(width, height, format, usage, bMipMap);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetDepthStencelState( const D3D11_DEPTH_STENCIL_DESC& desc )
	{
		m_depthStencilDesc = desc;

		SAFE_RELEASE(m_depthState);

		HRESULT hr = m_pd3dDevice->CreateDepthStencilState(&m_depthStencilDesc, &m_depthState);
		assert(SUCCEEDED(hr));		

		m_pDeviceContext->OMSetDepthStencilState(m_depthState, 1);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetRasterizeDesc( const D3D11_RASTERIZER_DESC& desc )
	{
		m_rasterDesc = desc;

		SAFE_RELEASE(m_rasterState);

		HRESULT hr = m_pd3dDevice->CreateRasterizerState(&m_rasterDesc, &m_rasterState);
		assert(SUCCEEDED(hr));

		m_pDeviceContext->RSSetState(m_rasterState);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetBlendStateDesc( const D3D11_BLEND_DESC& desc )
	{
		m_blendDesc = desc;

		SAFE_RELEASE(m_blendState);

		HRESULT hr = m_pd3dDevice->CreateBlendState(&m_blendDesc, &m_blendState);
		assert(SUCCEEDED(hr));

		float blendFactor[4];
		// Setup the blend factor.
		blendFactor[0] = 0.0f;
		blendFactor[1] = 0.0f;
		blendFactor[2] = 0.0f;
		blendFactor[3] = 0.0f;

		m_pDeviceContext->OMSetBlendState(m_blendState, blendFactor, 0xffffffff);
	}
	//-------------------------------------------------------------------------------
	void D3D11RenderSystem::CopyFrameBufferToTexture( D3D11Texture* pTexture )
	{
		ID3D11Resource* pSrcTex = nullptr;
		m_pRenderTargetView->GetResource(&pSrcTex);
		m_pDeviceContext->CopyResource(pTexture->GetInternalTex(), pSrcTex);

		pTexture->CreateSRV();
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetWorldTransform( const MAT44& matWorld, const MAT44& matWorldIT )
	{
		Camera* cam = g_env.pApp->GetCamera();

		m_cBufferGlobal.matWorld = matWorld;
		m_cBufferGlobal.matView = cam->GetViewMatrix();
		m_cBufferGlobal.matProj = cam->GetProjMatrix();
		m_cBufferGlobal.matMVP = m_cBufferGlobal.matWorld * m_cBufferGlobal.matView * m_cBufferGlobal.matProj;
		m_cBufferGlobal.matWorldIT = matWorldIT;

		// D3D11 wants column major by default
		m_cBufferGlobal.matWorld = m_cBufferGlobal.matWorld.Transpose();
		m_cBufferGlobal.matWorldIT = m_cBufferGlobal.matWorldIT.Transpose();		
		m_cBufferGlobal.matMVP = m_cBufferGlobal.matMVP.Transpose();

		m_pDeviceContext->UpdateSubresource( m_pGlobalCBuf, 0, NULL, &m_cBufferGlobal, 0, 0 );
		m_pDeviceContext->VSSetConstantBuffers( 0, 1, &m_pGlobalCBuf );
		m_pDeviceContext->PSSetConstantBuffers( 0, 1, &m_pGlobalCBuf );
	}
}

