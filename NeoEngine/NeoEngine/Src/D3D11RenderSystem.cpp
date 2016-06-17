#include "stdafx.h"
#include "D3D11RenderSystem.h"
#include "Color.h"
#include "Camera.h"
#include "D3D11Texture.h"
#include "D3D11RenderTarget.h"
#include "Font.h"
#include "SceneManager.h"
#include "Material.h"
#include "ShadowMap.h"
#include "ShadowMapCSM.h"

namespace Neo
{
	//----------------------------------------------------------------------------------------
	D3D11RenderSystem::D3D11RenderSystem()
	: m_pd3dDevice(nullptr)
	, m_wndWidth(0)
	, m_wndHeight(0)
	, m_pDeviceContext(nullptr)
	, m_pSwapChain(nullptr)
	, m_pRenderTargetView(nullptr)
	, m_pTexDepthStencil(nullptr)
	, m_rasterState(nullptr)
	, m_blendState(nullptr)
	, m_depthState(nullptr)
	, m_pGlobalCBuf(nullptr)
	, m_bClipPlaneEnabled(false)
	{
		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
			m_pTexture[i] = nullptr;
	}
	//----------------------------------------------------------------------------------------
	bool D3D11RenderSystem::Init( uint32 wndWidth, uint32 wndHeight, HWND hwnd )
	{
		if(!_InitDevice(wndWidth, wndHeight, hwnd))
			return false;

		m_pFont = new Font;
		
		return true;
	}
	//------------------------------------------------------------------------------------
	bool D3D11RenderSystem::_InitDevice(uint32 wndWidth, uint32 wndHeight, HWND hwnd)
	{
		HRESULT hr = S_OK;
		m_wndWidth = wndWidth;
		m_wndHeight = wndHeight;

		UINT createDeviceFlags = 0;
#ifdef _DEBUG
		createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

		D3D_DRIVER_TYPE driverTypes[] = { D3D_DRIVER_TYPE_HARDWARE };
		UINT numDriverTypes = ARRAYSIZE( driverTypes );

		D3D_FEATURE_LEVEL featureLevels[] = { D3D_FEATURE_LEVEL_11_0 };
		UINT numFeatureLevels = ARRAYSIZE( featureLevels );

		ZeroMemory( &m_swapChainDesc, sizeof( DXGI_SWAP_CHAIN_DESC ) );
		m_swapChainDesc.BufferCount = 1;
		m_swapChainDesc.SwapEffect	= DXGI_SWAP_EFFECT_DISCARD;
		m_swapChainDesc.BufferDesc.Width = wndWidth;
		m_swapChainDesc.BufferDesc.Height = wndHeight;
		m_swapChainDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
		if (/*m_bEnableVsync*/false)
		{
			m_swapChainDesc.BufferDesc.RefreshRate.Numerator = 60;	
			m_swapChainDesc.BufferDesc.RefreshRate.Denominator = 1;
		}
		else
		{
			m_swapChainDesc.BufferDesc.RefreshRate.Numerator = 0;	
			m_swapChainDesc.BufferDesc.RefreshRate.Denominator = 1;
		}
		m_swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
		m_swapChainDesc.OutputWindow = hwnd;
		m_swapChainDesc.SampleDesc.Count = 1;
		m_swapChainDesc.SampleDesc.Quality = 0;
		m_swapChainDesc.Windowed = TRUE;

		for( UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++ )
		{
			D3D_FEATURE_LEVEL featureLevel;
			D3D_DRIVER_TYPE driverType = driverTypes[driverTypeIndex];
			hr = D3D11CreateDeviceAndSwapChain( NULL, driverType, NULL, createDeviceFlags, featureLevels, numFeatureLevels,
				D3D11_SDK_VERSION, &m_swapChainDesc, &m_pSwapChain, &m_pd3dDevice, &featureLevel, &m_pDeviceContext );
			if( SUCCEEDED( hr ) )
				break;
		}
		V_RETURN(hr);

		V_RETURN(_OnSwapChainResized());

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
		m_depthStencilDesc.DepthFunc = D3D11_COMPARISON_LESS_EQUAL;

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
		m_viewport.Width = (float)wndWidth;
		m_viewport.Height = (float)wndHeight;
		m_viewport.MinDepth = 0.0f;
		m_viewport.MaxDepth = 1.0f;
		m_viewport.TopLeftX = 0;
		m_viewport.TopLeftY = 0;
		
		SetViewport(m_viewport);

		// Create the constant buffer
		D3D11_BUFFER_DESC bd;
		ZeroMemory( &bd, sizeof(D3D11_BUFFER_DESC) );
		bd.Usage = D3D11_USAGE_DEFAULT;
		bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.ByteWidth = sizeof(cBufferGlobal);

		V_RETURN(m_pd3dDevice->CreateBuffer( &bd, NULL, &m_pGlobalCBuf ));

		return true;
	}
	//------------------------------------------------------------------------------------
	HRESULT D3D11RenderSystem::_OnSwapChainResized()
	{
		HRESULT hr = S_OK;
		ID3D11Texture2D* pBackBuffer = NULL;
		
		// Create back buffer render target view
		V(m_pSwapChain->GetBuffer( 0, __uuidof( ID3D11Texture2D ), ( LPVOID* )&pBackBuffer ));
		V(m_pd3dDevice->CreateRenderTargetView( pBackBuffer, NULL, &m_pRenderTargetView ));

		D3D11_TEXTURE2D_DESC BBDesc;
		pBackBuffer->GetDesc( &BBDesc );

		// Create depth stencil texture
		ID3D11Texture2D* pTexDepth;
		D3D11_TEXTURE2D_DESC descDepth;

		ZeroMemory( &descDepth, sizeof(D3D11_TEXTURE2D_DESC) );
		descDepth.Width = BBDesc.Width;
		descDepth.Height = BBDesc.Height;
		descDepth.MipLevels = 1;
		descDepth.ArraySize = 1;
		descDepth.Format = DXGI_FORMAT_R24G8_TYPELESS;
		descDepth.SampleDesc.Count = 1;
		descDepth.SampleDesc.Quality = 0;
		descDepth.Usage = D3D11_USAGE_DEFAULT;
		descDepth.BindFlags = D3D11_BIND_DEPTH_STENCIL | D3D11_BIND_SHADER_RESOURCE;
		descDepth.CPUAccessFlags = 0;
		descDepth.MiscFlags = 0;

		V(m_pd3dDevice->CreateTexture2D(&descDepth, NULL, &pTexDepth));

		// Create DSV of the depth buffer
		ID3D11DepthStencilView* pDSV = nullptr;
		D3D11_DEPTH_STENCIL_VIEW_DESC descDSV;

		ZeroMemory( &descDSV, sizeof(D3D11_DEPTH_STENCIL_VIEW_DESC) );
		descDSV.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
		descDSV.Flags = 0;
		descDSV.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
		descDSV.Texture2D.MipSlice = 0;
		V(m_pd3dDevice->CreateDepthStencilView(pTexDepth, &descDSV, &pDSV));

		// Create SRV of the depth buffer
		ID3D11ShaderResourceView* pSRV = nullptr;
		D3D11_SHADER_RESOURCE_VIEW_DESC SRVDesc;

		ZeroMemory(&SRVDesc, sizeof(D3D11_SHADER_RESOURCE_VIEW_DESC));
		SRVDesc.Format = DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
		SRVDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
		SRVDesc.Texture2D.MipLevels = 1;
		SRVDesc.Texture2D.MostDetailedMip = 0;

		V(m_pd3dDevice->CreateShaderResourceView(pTexDepth, &SRVDesc, &pSRV));

		m_pTexDepthStencil = new D3D11Texture(pSRV, nullptr, pDSV);

		m_pDeviceContext->OMSetRenderTargets(1, &m_pRenderTargetView, pDSV);

		pBackBuffer->Release();
		pTexDepth->Release();

		return hr;
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::_ShutDownDevice()
	{
		if( m_pDeviceContext ) m_pDeviceContext->ClearState();
		SAFE_RELEASE(m_pGlobalCBuf);
		SAFE_RELEASE(m_pRenderTargetView);
		SAFE_RELEASE(m_pTexDepthStencil);
		SAFE_RELEASE(m_rasterState);
		SAFE_RELEASE(m_blendState);
		SAFE_RELEASE(m_depthState);

		SAFE_RELEASE(m_pSwapChain);
		SAFE_RELEASE(m_pDeviceContext);
		SAFE_RELEASE(m_pd3dDevice);
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderSystem::ShutDown()
	{
		SAFE_DELETE(m_pFont);

		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
			SAFE_RELEASE(m_pTexture[i]);

		for(size_t i=0; i<m_vecRT.size(); ++i)
			m_vecRT[i]->Release();
		m_vecRT.clear();

		for (auto iter=m_mapTexNeedResize.begin(); iter!=m_mapTexNeedResize.end(); ++iter)	
		{
			D3D11Texture* tex = iter->first;
			tex->Release();
		}
		m_mapTexNeedResize.clear();

		_ShutDownDevice();
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderSystem::BeginScene()
	{

	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderSystem::EndScene()
	{
		HRESULT hr = S_OK;
		V(m_pSwapChain->Present(0, 0));
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
	void D3D11RenderSystem::SetActiveTexture( int stage, D3D11Texture* pTexture)
	{
		assert(stage >=0 && stage < MAX_TEXTURE_STAGE);

		if (m_pTexture[stage] == pTexture)
			return;

		SAFE_RELEASE(m_pTexture[stage]);
		m_pTexture[stage] = pTexture;

		if(pTexture)
		{
			pTexture->AddRef();

			if (pTexture->GetUsage() & eTextureUsage_DomainShader)
			{
				m_pDeviceContext->DSSetShaderResources(stage, 1, pTexture->GetSRV());
			}

			if (pTexture->GetUsage() & eTextureUsage_HullShader)
			{
				m_pDeviceContext->HSSetShaderResources(stage, 1, pTexture->GetSRV());
			}

			m_pDeviceContext->PSSetShaderResources(stage, 1, pTexture->GetSRV());
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetActiveSamplerState(int stage, ID3D11SamplerState* sampler)
	{
		assert(stage >= 0 && stage < MAX_TEXTURE_STAGE);

		m_pDeviceContext->PSSetSamplers(stage, 1, &sampler);

	}
	//------------------------------------------------------------------------------------
	D3D11RenderTarget* D3D11RenderSystem::CreateRenderTarget()
	{
		D3D11RenderTarget* pRT = new D3D11RenderTarget;
		pRT->AddRef();

		m_vecRT.push_back(pRT);

		return pRT;
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetRenderTarget(D3D11RenderTarget** pRTs, D3D11Texture* pTexDepth, uint32 nRenderTarget,
		bool bClearColor, bool bClearZ, const SColor& clearClr)
	{
		ID3D11RenderTargetView* pRTVs[8] = {0};

		if (pRTs)
		{
			for (uint32 i = 0; i < nRenderTarget; ++i)
			{
				pRTVs[i] = pRTs[i]->GetRTV();
			}
		}
		else	// Recover device FBO
		{
			pRTVs[0] = m_pRenderTargetView;
		}

		ID3D11DepthStencilView* pDSV = nullptr;
		if (pTexDepth)
		{
			pDSV = pTexDepth->GetDSV();
		}

		m_pDeviceContext->OMSetRenderTargets(nRenderTarget, pRTVs, pDSV);

		if (bClearColor)
		{
			for (uint32 i = 0; i < nRenderTarget; ++i)
			{
				m_pDeviceContext->ClearRenderTargetView(pRTVs[i], (float*)&clearClr);
			}
		}
		
		if (bClearZ)
		{
			assert(pDSV);
			m_pDeviceContext->ClearDepthStencilView(pDSV, D3D11_CLEAR_DEPTH, 1.0f, 0);
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetDepthStencelState( const D3D11_DEPTH_STENCIL_DESC& desc )
	{
		m_depthStencilDesc = desc;

		SAFE_RELEASE(m_depthState);

		HRESULT hr = S_OK;
		V(m_pd3dDevice->CreateDepthStencilState(&m_depthStencilDesc, &m_depthState));	

		m_pDeviceContext->OMSetDepthStencilState(m_depthState, 1);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetRasterizeDesc( const D3D11_RASTERIZER_DESC& desc )
	{
		m_rasterDesc = desc;

		SAFE_RELEASE(m_rasterState);

		HRESULT hr = S_OK;
		V(m_pd3dDevice->CreateRasterizerState(&m_rasterDesc, &m_rasterState));

		m_pDeviceContext->RSSetState(m_rasterState);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetBlendStateDesc( const D3D11_BLEND_DESC& desc )
	{
		m_blendDesc = desc;

		SAFE_RELEASE(m_blendState);

		HRESULT hr = S_OK;
		V(m_pd3dDevice->CreateBlendState(&m_blendDesc, &m_blendState));

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
		pSrcTex->Release();

		pTexture->CreateSRV();
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetTransform(eTransform type, const MAT44& matrix, bool bUpdateCBuffer)
	{
		// D3D11 wants column major by default
		m_cBufferGlobal.matTransform[type] = matrix.Transpose();

		if (bUpdateCBuffer)
		{
			m_cBufferGlobal.matTransform[eTransform_WVP] = (
				m_cBufferGlobal.matTransform[eTransform_Proj]*
				m_cBufferGlobal.matTransform[eTransform_View]*
				m_cBufferGlobal.matTransform[eTransform_World]);

			UpdateGlobalCBuffer();
		}
	}
	//-------------------------------------------------------------------------------
	void D3D11RenderSystem::Update()
	{
		DWORD curTime = GetTickCount();
		static DWORD lastTime = curTime, nFrameCnt = 0, nFrameTime = 0;

		DWORD dt = curTime - lastTime;
		lastTime = curTime;

		// Calc FPS
		++nFrameCnt;
		nFrameTime += dt;

		if (nFrameTime >= 1000)
		{
			g_env.pFrameStat->lastFPS = nFrameCnt / (nFrameTime * 0.001f);
			nFrameCnt = nFrameTime = 0;
		}

		// Update cBuffer
		m_cBufferGlobal.time = GetTickCount() / 1000.0f;

		Camera* cam = g_env.pSceneMgr->GetCamera();
		const MAT44& matView = cam->GetViewMatrix();
		const MAT44& matProj = cam->GetProjMatrix();

		m_cBufferGlobal.camPos = cam->GetPos();
		m_cBufferGlobal.lightDirection = g_env.pSceneMgr->GetSunLight().lightDir;
		m_cBufferGlobal.lightColor = g_env.pSceneMgr->GetSunLight().lightColor;
		m_cBufferGlobal.ambientColor.Set(0.2f, 0.2f, 0.2f);
		m_cBufferGlobal.nearZ = cam->GetNearClip();
		m_cBufferGlobal.farZ = cam->GetFarClip();
		m_cBufferGlobal.shadowMapTexelSize = 1.0f / ShadowMap::SHADOW_MAP_SIZE;
		
		cam->GetFarCorner(m_cBufferGlobal.frustumFarCorner);

#if USE_CSM
		ShadowMapCSM* pCSM = g_env.pSceneMgr->GetShadowMap()->GetCSM();

		SetTransform(eTransform_Shadow, pCSM->GetShadowTransform(0), false);
		SetTransform(eTransform_Shadow2, pCSM->GetShadowTransform(1), false);
		SetTransform(eTransform_Shadow3, pCSM->GetShadowTransform(2), false);
#else
		SetTransform(eTransform_Shadow, g_env.pSceneMgr->GetShadowMap()->GetShadowTransform(), false);
#endif
		SetTransform(eTransform_World, MAT44::IDENTITY, false);
		SetTransform(eTransform_WorldIT, MAT44::IDENTITY, false);
		SetTransform(eTransform_View, matView, false);
		SetTransform(eTransform_Proj, matProj, true);	
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetViewport( const D3D11_VIEWPORT& vp )
	{
		m_pDeviceContext->RSSetViewports( 1, &vp );
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::EnableClipPlane( bool bEnable, const PLANE* plane )
	{
		m_bClipPlaneEnabled = bEnable;
		if (m_bClipPlaneEnabled)
		{
			assert(plane);
			m_cBufferGlobal.clipPlane = *plane;
			UpdateGlobalCBuffer();
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::UpdateGlobalCBuffer(bool bTessellate)
	{
		m_pDeviceContext->UpdateSubresource( m_pGlobalCBuf, 0, NULL, &m_cBufferGlobal, 0, 0 );
		m_pDeviceContext->VSSetConstantBuffers( 0, 1, &m_pGlobalCBuf );
		m_pDeviceContext->PSSetConstantBuffers( 0, 1, &m_pGlobalCBuf );

		if (bTessellate)
		{
			m_pDeviceContext->HSSetConstantBuffers( 0, 1, &m_pGlobalCBuf );
			m_pDeviceContext->DSSetConstantBuffers( 0, 1, &m_pGlobalCBuf );
		}
	}
	//-------------------------------------------------------------------------------
	void D3D11RenderSystem::DrawText( const STRING& text, const IPOINT& pos, const SColor& color )
	{
		m_pFont->DrawText(text, pos, color);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::AddResizableTexture( D3D11Texture* pTexture )
	{
		assert(m_mapTexNeedResize.find(pTexture) == m_mapTexNeedResize.end() && "This texture already added!");

		VEC2 ratio(pTexture->GetWidth() / (float)m_wndWidth, pTexture->GetHeight() / (float)m_wndHeight);

		m_mapTexNeedResize.insert(std::make_pair(pTexture, ratio));

		pTexture->AddRef();
	}
	//-------------------------------------------------------------------------------
	void D3D11RenderSystem::RestoreViewport()
	{
		SetViewport(m_viewport);	
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::OnWindowResize( uint32 width, uint32 height )
	{
		// See: http://msdn.microsoft.com/en-us/library/windows/desktop/bb205075(v=vs.85).aspx#Handling_Window_Resizing

		HRESULT hr = S_OK;
		UINT Flags = 0;

		// Unbind view
		m_pDeviceContext->OMSetRenderTargets(0, nullptr, nullptr);

		SAFE_RELEASE(m_pRenderTargetView);
		SAFE_RELEASE(m_pTexDepthStencil);

		V(m_pSwapChain->ResizeBuffers(m_swapChainDesc.BufferCount, width, height, m_swapChainDesc.BufferDesc.Format, Flags));

		V(_OnSwapChainResized());

		m_viewport.Width = (float)width;
		m_viewport.Height = (float)height;
		SetViewport(m_viewport);

		g_env.pSceneMgr->GetCamera()->SetAspectRatio(m_viewport.Width / m_viewport.Height);
		SetTransform(eTransform_Proj, g_env.pSceneMgr->GetCamera()->GetProjMatrix(), true);

		// Recreate RT resources
		for(size_t i=0; i<m_vecRT.size(); ++i)
			m_vecRT[i]->OnWindowResized();

		// Recreate resizable textures
		for (auto iter=m_mapTexNeedResize.begin(); iter!=m_mapTexNeedResize.end(); ++iter)
		{
			D3D11Texture* tex = iter->first;
			const VEC2& ratio = iter->second;

			const uint32 newWidth = (uint32)(m_wndWidth * ratio.x);
			const uint32 newHeight = (uint32)(m_wndHeight * ratio.y);

			tex->Resize(newWidth, newHeight);
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::ExtractFrustumWorldPlanes( PLANE oPlanes[6], const MAT44& matViewProj )
	{
		// Left clipping plane
		oPlanes[0].n.x = matViewProj.m03 + matViewProj.m00;
		oPlanes[0].n.y = matViewProj.m13 + matViewProj.m10;
		oPlanes[0].n.z = matViewProj.m23 + matViewProj.m20;
		oPlanes[0].d = matViewProj.m33 + matViewProj.m30;

		// Right clipping plane
		oPlanes[1].n.x = matViewProj.m03 - matViewProj.m00;
		oPlanes[1].n.y = matViewProj.m13 - matViewProj.m10;
		oPlanes[1].n.z = matViewProj.m23 - matViewProj.m20;
		oPlanes[1].d = matViewProj.m33 - matViewProj.m30;

		// Top clipping plane
		oPlanes[2].n.x = matViewProj.m03 - matViewProj.m01;
		oPlanes[2].n.y = matViewProj.m13 - matViewProj.m11;
		oPlanes[2].n.z = matViewProj.m23 - matViewProj.m21;
		oPlanes[2].d = matViewProj.m33 - matViewProj.m31;

		// Bottom clipping plane
		oPlanes[3].n.x = matViewProj.m03 + matViewProj.m01;
		oPlanes[3].n.y = matViewProj.m13 + matViewProj.m11;
		oPlanes[3].n.z = matViewProj.m23 + matViewProj.m21;
		oPlanes[3].d = matViewProj.m33 + matViewProj.m31;

		// Near clipping plane
		oPlanes[4].n.x = matViewProj.m02;
		oPlanes[4].n.y = matViewProj.m12;
		oPlanes[4].n.z = matViewProj.m22;
		oPlanes[4].d = matViewProj.m32;

		// Far clipping plane
		oPlanes[5].n.x = matViewProj.m03 - matViewProj.m02;
		oPlanes[5].n.y = matViewProj.m13 - matViewProj.m12;
		oPlanes[5].n.z = matViewProj.m23 - matViewProj.m22;
		oPlanes[5].d = matViewProj.m33 - matViewProj.m32;

		// Normalize the plane equations
		oPlanes[0].Normalize();
		oPlanes[1].Normalize();
		oPlanes[2].Normalize();
		oPlanes[3].Normalize();
		oPlanes[4].Normalize();
		oPlanes[5].Normalize();
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::UnbindTexture(D3D11Texture* tex)
	{
		for (int i = 0; i < MAX_TEXTURE_STAGE; ++i)
		{
			if (m_pTexture[i] == tex)
			{
				SAFE_RELEASE(m_pTexture[i]);

				ID3D11ShaderResourceView* pSRV = nullptr;
				m_pDeviceContext->PSSetShaderResources(i, 1, &pSRV);
			}
		}
	}
}

