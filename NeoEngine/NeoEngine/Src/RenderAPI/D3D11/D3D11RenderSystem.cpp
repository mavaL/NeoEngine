#include "stdafx.h"
#include "D3D11/D3D11RenderSystem.h"
#include "Color.h"
#include "Camera.h"
#include "D3D11/D3D11Texture.h"
#include "D3D11/D3D11RenderTarget.h"
#include "D3D11/D3D11Buffer.h"
#include "D3D11/D3D11Shader.h"
#include "SceneManager.h"
#include "Material.h"
#include "ShadowMap.h"
#include "ShadowMapPSSM.h"

namespace Neo
{
	D3D11RenderSystem*	g_pRenderSys = nullptr;

	//----------------------------------------------------------------------------------------
	inline D3D11_PRIMITIVE_TOPOLOGY	GetD3D11PrimType(ePrimitive type)
	{
		switch (type)
		{
		case ePrimitive_TriangleList:				return D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST;
		case ePrimitive_4_Control_Point_PatchList:	return D3D11_PRIMITIVE_TOPOLOGY_4_CONTROL_POINT_PATCHLIST;
		case ePrimitive_LineList_Adj:				return D3D11_PRIMITIVE_TOPOLOGY_LINELIST_ADJ;
		default: _AST(0);
		}
		return D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST;
	}
	//------------------------------------------------------------------------------------
	D3D11RenderSystem::D3D11RenderSystem()
	: m_pd3dDevice(nullptr)
	, m_wndWidth(0)
	, m_wndHeight(0)
	, m_pDeviceContext(nullptr)
	, m_pSwapChain(nullptr)
	, m_pRenderTargetView(nullptr)
	{
		g_pRenderSys = this;
	}
	//----------------------------------------------------------------------------------------
	bool D3D11RenderSystem::Init( uint32 wndWidth, uint32 wndHeight, HWND hwnd )
	{
		HRESULT hr = S_OK;
		m_wndWidth = wndWidth;
		m_wndHeight = wndHeight;

		UINT createDeviceFlags = 0;
#ifdef _DEBUG
		createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

		D3D_DRIVER_TYPE driverTypes[] = { D3D_DRIVER_TYPE_HARDWARE };
		UINT numDriverTypes = ARRAYSIZE(driverTypes);

		D3D_FEATURE_LEVEL featureLevels[] = { D3D_FEATURE_LEVEL_11_0 };
		UINT numFeatureLevels = ARRAYSIZE(featureLevels);

		ZeroMemory(&m_swapChainDesc, sizeof(DXGI_SWAP_CHAIN_DESC));
		m_swapChainDesc.BufferCount = 1;
		m_swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
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

		for (UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++)
		{
			D3D_FEATURE_LEVEL featureLevel;
			D3D_DRIVER_TYPE driverType = driverTypes[driverTypeIndex];
			hr = D3D11CreateDeviceAndSwapChain(NULL, driverType, NULL, createDeviceFlags, featureLevels, numFeatureLevels,
				D3D11_SDK_VERSION, &m_swapChainDesc, &m_pSwapChain, &m_pd3dDevice, &featureLevel, &m_pDeviceContext);
			if (SUCCEEDED(hr))
				break;
		}
		V_RETURN(hr);

		V_RETURN(_OnSwapChainResized());

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
	void D3D11RenderSystem::Shutdown()
	{
		if (m_pDeviceContext) m_pDeviceContext->ClearState();

/*		for (uint32 i = 0; i < m_blendStates.size(); ++i)
		{
			ID3D11BlendState* pState = (ID3D11BlendState*)m_blendStates[i].pDeviceState;
			SAFE_RELEASE(pState);
		}
		for (uint32 i = 0; i < m_depthStates.size(); ++i)
		{
			ID3D11DepthStencilState* pState = (ID3D11DepthStencilState*)m_depthStates[i].pDeviceState;
			SAFE_RELEASE(pState);
		}
		for (uint32 i = 0; i < m_rasterStates.size(); ++i)
		{
			ID3D11RasterizerState* pState = (ID3D11RasterizerState*)m_rasterStates[i].pDeviceState;
			SAFE_RELEASE(pState);
		}

		m_rasterStates.clear();
		m_blendStates.clear();
		m_depthStates.clear();

		for (size_t i = 0; i < m_vecRT.size(); ++i)
			m_vecRT[i]->Release();
		m_vecRT.clear();

		for (auto iter = m_mapTexNeedResize.begin(); iter != m_mapTexNeedResize.end(); ++iter)
		{
			D3D11Texture* tex = iter->first;
			tex->Release();
		}
		m_mapTexNeedResize.clear();
*/

		SAFE_RELEASE(m_pSwapChain);
		SAFE_RELEASE(m_pDeviceContext);
		SAFE_RELEASE(m_pd3dDevice);
	}
	//----------------------------------------------------------------------------------------
	void D3D11RenderSystem::SwapBuffer()
	{
		HRESULT hr = S_OK;
		V(m_pSwapChain->Present(0, 0));
	}
	//------------------------------------------------------------------------------------
	RenderTarget* D3D11RenderSystem::CreateRenderTarget(uint32 nWidth, uint32 nHeight, uint32 nDepth, ePixelFormat format, uint32 usage)
	{
		_AST(nDepth >= 1);

		D3D11RenderTarget* pRT = new D3D11RenderTarget;

		if (nDepth > 1)
		{
			pRT->Init(nWidth, nHeight, nDepth, format, usage);
		} 
		else
		{
			pRT->Init(nWidth, nHeight, format, usage);
		}

		pRT->AddRef();
		m_vecRT.push_back(pRT);

		return pRT;
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetRenderTarget(RenderTarget** pRTs, Texture* pTexDepth, uint32 nRenderTarget,
		bool bClearColor, bool bClearZ, const SColor& clearClr)
	{
		ID3D11RenderTargetView* pRTVs[MAX_MRT_COUNT] = { 0 };

		if (pRTs)
		{
			for (uint32 i = 0; i < nRenderTarget; ++i)
			{
				pRTVs[i] = (ID3D11RenderTargetView*)pRTs[i]->GetRTV();
			}
		}
		else	// Recover device FBO
		{
			pRTVs[0] = m_pRenderTargetView;
		}

		ID3D11DepthStencilView* pDSV = nullptr;
		if (pTexDepth)
		{
			pDSV = (ID3D11DepthStencilView*)pTexDepth->GetDSV();
		}

		m_pDeviceContext->OMSetRenderTargets(nRenderTarget, pRTVs, pDSV);

		if (bClearColor)
		{
			for (uint32 i = 0; i < nRenderTarget; ++i)
			{
				m_pDeviceContext->ClearRenderTargetView(pRTVs[i], (float*)&clearClr);
			}
		}
		
		if (bClearZ && pDSV)
		{
			m_pDeviceContext->ClearDepthStencilView(pDSV, D3D11_CLEAR_DEPTH, 1.0f, 0);
		}
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
	void D3D11RenderSystem::SetViewport( const SViewport* vp )
	{
		D3D11_VIEWPORT d3d11_vp;
		d3d11_vp.TopLeftX = vp->TopLeftX;
		d3d11_vp.TopLeftY = vp->TopLeftY;
		d3d11_vp.Width = vp->Width;
		d3d11_vp.Height = vp->Height;
		d3d11_vp.MinDepth = vp->MinDepth;
		d3d11_vp.MaxDepth = vp->MaxDepth;

		m_pDeviceContext->RSSetViewports(1, &d3d11_vp);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::AddResizableTexture( D3D11Texture* pTexture )
	{
		assert(m_mapTexNeedResize.find(pTexture) == m_mapTexNeedResize.end() && "This texture already added!");

		VEC2 ratio(pTexture->GetWidth() / (float)m_wndWidth, pTexture->GetHeight() / (float)m_wndHeight);

		m_mapTexNeedResize.insert(std::make_pair(pTexture, ratio));

		pTexture->AddRef();
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::OnWindowResize( uint32 width, uint32 height )
	{
		// See: http://msdn.microsoft.com/en-us/library/windows/desktop/bb205075(v=vs.85).aspx#Handling_Window_Resizing

		//HRESULT hr = S_OK;
		//UINT Flags = 0;

		//// Unbind view
		//m_pDeviceContext->OMSetRenderTargets(0, nullptr, nullptr);

		//SAFE_RELEASE(m_pRenderTargetView);
		//SAFE_RELEASE(m_pTexDepthStencil);

		//V(m_pSwapChain->ResizeBuffers(m_swapChainDesc.BufferCount, width, height, m_swapChainDesc.BufferDesc.Format, Flags));

		//V(_OnSwapChainResized());

		//m_viewport.Width = (float)width;
		//m_viewport.Height = (float)height;
		//SetViewport(m_viewport);

		//g_env.pSceneMgr->GetCamera()->SetAspectRatio(m_viewport.Width / m_viewport.Height);

		//m_cBufferGlobal.matProj = g_env.pSceneMgr->GetCamera()->GetProjMatrix().Transpose();
		//UpdateGlobalCBuffer();

		//// Recreate RT resources
		//for(size_t i=0; i<m_vecRT.size(); ++i)
		//	m_vecRT[i]->OnWindowResized();

		//// Recreate resizable textures
		//for (auto iter=m_mapTexNeedResize.begin(); iter!=m_mapTexNeedResize.end(); ++iter)
		//{
		//	D3D11Texture* tex = iter->first;
		//	const VEC2& ratio = iter->second;

		//	const uint32 newWidth = (uint32)(m_wndWidth * ratio.x);
		//	const uint32 newHeight = (uint32)(m_wndHeight * ratio.y);

		//	tex->Resize(newWidth, newHeight);
		//}
	}
	//------------------------------------------------------------------------------------
	void* D3D11RenderSystem::CreateBlendState(const SStateBlendDesc& desc)
	{
		D3D11_BLEND_DESC d3d11_desc;
		d3d11_desc.AlphaToCoverageEnable = desc.AlphaToCoverageEnable;
		d3d11_desc.IndependentBlendEnable = desc.IndependentBlendEnable;

		for (int i = 0; i < MAX_MRT_COUNT; ++i)
		{
			d3d11_desc.RenderTarget[i].BlendEnable = desc.RenderTarget[i].BlendEnable;
			d3d11_desc.RenderTarget[i].BlendOp = (D3D11_BLEND_OP)desc.RenderTarget[i].BlendOp;
			d3d11_desc.RenderTarget[i].BlendOpAlpha = (D3D11_BLEND_OP)desc.RenderTarget[i].BlendOpAlpha;
			d3d11_desc.RenderTarget[i].DestBlend = (D3D11_BLEND)desc.RenderTarget[i].DestBlend;
			d3d11_desc.RenderTarget[i].DestBlendAlpha = (D3D11_BLEND)desc.RenderTarget[i].DestBlendAlpha;
			d3d11_desc.RenderTarget[i].RenderTargetWriteMask = desc.RenderTarget[i].RenderTargetWriteMask;
			d3d11_desc.RenderTarget[i].SrcBlend = (D3D11_BLEND)desc.RenderTarget[i].SrcBlend;
			d3d11_desc.RenderTarget[i].SrcBlendAlpha = (D3D11_BLEND)desc.RenderTarget[i].SrcBlendAlpha;
		}

		HRESULT hr = S_OK;
		ID3D11BlendState* pState = nullptr;

		V(m_pd3dDevice->CreateBlendState(&d3d11_desc, &pState));

		return pState;
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::ApplyBlendState(SStateBlend* pState)
	{
		float blendFactor[4] = { 0 };
		m_pDeviceContext->OMSetBlendState((ID3D11BlendState*)pState->pDeviceState, blendFactor, 0xffffffff);
	}
	//------------------------------------------------------------------------------------
	void* D3D11RenderSystem::CreateRasterState(const SStateRasterDesc& desc)
	{
		D3D11_RASTERIZER_DESC d3d11_desc;
		d3d11_desc.AntialiasedLineEnable = desc.AntialiasedLineEnable;
		d3d11_desc.CullMode = (D3D11_CULL_MODE)desc.CullMode;
		d3d11_desc.DepthBias = desc.DepthBias;
		d3d11_desc.DepthBiasClamp = desc.DepthBiasClamp;
		d3d11_desc.DepthClipEnable = desc.DepthClipEnable;
		d3d11_desc.FillMode = (D3D11_FILL_MODE)desc.FillMode;
		d3d11_desc.FrontCounterClockwise = desc.FrontCounterClockwise;
		d3d11_desc.MultisampleEnable = desc.MultisampleEnable;
		d3d11_desc.ScissorEnable = desc.ScissorEnable;
		d3d11_desc.SlopeScaledDepthBias = desc.SlopeScaledDepthBias;

		HRESULT hr = S_OK;
		ID3D11RasterizerState* pState = nullptr;

		V(m_pd3dDevice->CreateRasterizerState(&d3d11_desc, &pState));

		return pState;
	}
	//------------------------------------------------------------------------------------
	void* D3D11RenderSystem::CreateDepthState(const SStateDepthDesc& desc)
	{
		D3D11_DEPTH_STENCIL_DESC d3d11_desc;

		d3d11_desc.BackFace = *(D3D11_DEPTH_STENCILOP_DESC*)&desc.BackFace;
		d3d11_desc.DepthEnable = desc.DepthEnable;
		d3d11_desc.DepthFunc = (D3D11_COMPARISON_FUNC)desc.DepthFunc;
		d3d11_desc.DepthWriteMask = (D3D11_DEPTH_WRITE_MASK)(int)desc.DepthWriteMask;
		d3d11_desc.FrontFace = *(D3D11_DEPTH_STENCILOP_DESC*)&desc.FrontFace;
		d3d11_desc.StencilEnable = desc.StencilEnable;
		d3d11_desc.StencilReadMask = desc.StencilReadMask;
		d3d11_desc.StencilWriteMask = desc.StencilWriteMask;

		HRESULT hr = S_OK;
		ID3D11DepthStencilState* pState = nullptr;

		V(m_pd3dDevice->CreateDepthStencilState(&d3d11_desc, &pState));

		return pState;
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::ApplyRasterState(SStateRaster* pState)
	{
		m_pDeviceContext->RSSetState((ID3D11RasterizerState*)pState->pDeviceState);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::ApplyDepthState(SStateDepth* pState)
	{
		m_pDeviceContext->OMSetDepthStencilState((ID3D11DepthStencilState*)pState->pDeviceState, 1);
	}
	//------------------------------------------------------------------------------------
	ConstantBuffer* D3D11RenderSystem::CreateConstantBuffer(uint32 nSize, uint32 nSlot)
	{
		D3D11Buffer* pBuf = new D3D11Buffer(nSize, 0, eBufferUsage_ConstantBuf);

		D3D11ConstantBuffer* pCB = new D3D11ConstantBuffer(pBuf);

		return pCB;
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetTexture(uint32 iStage, Texture* pTexture, uint32 usage /*= 0*/)
	{
		if (pTexture)
		{
			ID3D11ShaderResourceView* pSRV = (ID3D11ShaderResourceView*)pTexture->GetSRV();

			if (pTexture->GetUsage() & eTextureUsage_HullShader)
			{
				m_pDeviceContext->HSSetShaderResources(iStage, 1, &pSRV);
			}
			if (pTexture->GetUsage() & eTextureUsage_DomainShader)
			{
				m_pDeviceContext->DSSetShaderResources(iStage, 1, &pSRV);
			}
			if (pTexture->GetUsage() & eTextureUsage_VertexShader)
			{
				m_pDeviceContext->VSSetShaderResources(iStage, 1, &pSRV);
			}
			if (pTexture->GetUsage() & eTextureUsage_GeometryShader)
			{
				m_pDeviceContext->GSSetShaderResources(iStage, 1, &pSRV);
			}

			m_pDeviceContext->PSSetShaderResources(iStage, 1, &pSRV);
		}
		else
		{
			ID3D11ShaderResourceView* pNullSRV = nullptr;
			m_pDeviceContext->PSSetShaderResources(iStage, 1, &pNullSRV);
		}
	}
	//------------------------------------------------------------------------------------
	class D3D11SamplerState : public SamplerState
	{
	public:
		D3D11SamplerState(ID3D11SamplerState* pSamp):m_pSamp(pSamp) {}
		~D3D11SamplerState() { SAFE_RELEASE(m_pSamp); }

		virtual	void	Apply(uint32 iStage, bool bVS, bool bGS, bool bTessellation)
		{
			ID3D11DeviceContext* pDC = g_pRenderSys->GetDeviceContext();
			pDC->PSSetSamplers(iStage, 1, &m_pSamp);

			if (bVS)
			{
				pDC->VSSetSamplers(iStage, 1, &m_pSamp);
			}
			if (bGS)
			{
				pDC->GSSetSamplers(iStage, 1, &m_pSamp);
			}
			if (bTessellation)
			{
				pDC->HSSetSamplers(iStage, 1, &m_pSamp);
				pDC->DSSetSamplers(iStage, 1, &m_pSamp);
			}
		}

		ID3D11SamplerState*		m_pSamp;
	};
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetSamplerState(uint32 iStage, SamplerState* pSampler, bool bVS, bool bGS, bool bTessellation)
	{
		pSampler->Apply(iStage, bVS, bGS, bTessellation);
	}
	//------------------------------------------------------------------------------------
	SamplerState* D3D11RenderSystem::CreateSamplerState(const SSamplerDesc& desc)
	{
		D3D11_SAMPLER_DESC d3d11_desc;
		d3d11_desc.AddressU = (D3D11_TEXTURE_ADDRESS_MODE)desc.AddressU;
		d3d11_desc.AddressV = (D3D11_TEXTURE_ADDRESS_MODE)desc.AddressV;
		d3d11_desc.AddressW = (D3D11_TEXTURE_ADDRESS_MODE)desc.AddressW;
		memcpy(d3d11_desc.BorderColor, desc.BorderColor, 4 * sizeof(float));
		d3d11_desc.ComparisonFunc = (D3D11_COMPARISON_FUNC)desc.ComparisonFunc;
		d3d11_desc.Filter = (D3D11_FILTER)desc.Filter;
		d3d11_desc.MaxAnisotropy = desc.MaxAnisotropy;
		d3d11_desc.MaxLOD = desc.MaxLOD;
		d3d11_desc.MinLOD = desc.MinLOD;
		d3d11_desc.MipLODBias = desc.MipLODBias;

		HRESULT hr = S_OK;
		ID3D11SamplerState* pDeviceSamp = nullptr;
		V(m_pd3dDevice->CreateSamplerState(&d3d11_desc, &pDeviceSamp));

		return new D3D11SamplerState(pDeviceSamp);
	}
	//------------------------------------------------------------------------------------
	Shader* D3D11RenderSystem::CreateShader(eShaderType type, eRenderPhase phase, const STRING& filename, uint32 flags, const STRING& strEntryFunc, eVertexType vertType, const std::vector<D3D_SHADER_MACRO>& vecMacros)
	{
		D3D11Shader* pShader = nullptr;
		STRING strShaderFile = GetShaderPath(filename);

		switch (type)
		{
		case eShaderType_VS: pShader = new D3D11VertexShader(strShaderFile.c_str(), flags, strEntryFunc.c_str(), vertType, vecMacros); break;
		case eShaderType_PS: pShader = new D3D11PixelShader(strShaderFile.c_str(), flags, strEntryFunc.c_str(), vecMacros); break;
		case eShaderType_GS: pShader = new D3D11GeometryShader(strShaderFile.c_str(), flags, strEntryFunc.c_str(), vecMacros); break;
		case eShaderType_CS: pShader = new D3D11ComputeShader(strShaderFile.c_str(), flags, strEntryFunc.c_str(), vecMacros); break;
		case eShaderType_HS: pShader = new D3D11HullShader(strShaderFile.c_str(), flags, strEntryFunc.c_str(), vecMacros); break;
		case eShaderType_DS: pShader = new D3D11DomainShader(strShaderFile.c_str(), flags, strEntryFunc.c_str(), vecMacros); break;
		default: _AST(0);
		}

		return pShader;
	}
	//------------------------------------------------------------------------------------
	Texture* D3D11RenderSystem::LoadTexture(const STRING& filename, eTextureType type, uint32 usage, bool bSRGB)
	{
		return new D3D11Texture(filename, type, usage, bSRGB);
	}
	//------------------------------------------------------------------------------------
	Texture* D3D11RenderSystem::GetDepthBuffer()
	{
		return m_pTexDepthStencil;
	}
	//------------------------------------------------------------------------------------
	Texture* D3D11RenderSystem::CreateTextureArray(const StringVector& vecTexNames, bool bSRGB /*= false*/)
	{
		return new D3D11Texture(vecTexNames, bSRGB);
	}
	//------------------------------------------------------------------------------------
	Texture* D3D11RenderSystem::CreateTextureManual(uint32 nWidth, uint32 nHeight, const char* pTexData, ePixelFormat format, uint32 usage, bool bMipMap)
	{
		return new D3D11Texture(nWidth, nHeight, pTexData, format, usage, bMipMap);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::DrawIndexed(ePrimitive type, IndexBuffer* indexBuf, uint32 nIndexCnt, uint32 nStartIndexLocation, uint32 nBaseIndexLocation)
	{
		m_pDeviceContext->IASetPrimitiveTopology(GetD3D11PrimType(type));
		m_pDeviceContext->IASetIndexBuffer((ID3D11Buffer*)indexBuf->GetInternel(), DXGI_FORMAT_R32_UINT, 0);
		m_pDeviceContext->DrawIndexed(nIndexCnt, nStartIndexLocation, nBaseIndexLocation);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::SetVertexBuffer(VertexBuffer* vertBuf, uint32 iStream, uint32 nOffset)
	{
		ID3D11Buffer* pVB = (ID3D11Buffer*)vertBuf->GetInternel();
		uint32 nStride = vertBuf->GetStride();
		m_pDeviceContext->IASetVertexBuffers(iStream, 1, &pVB, &nStride, &nOffset);
	}
	//------------------------------------------------------------------------------------
	VertexBuffer* D3D11RenderSystem::CreateVertexBuffer(uint32 nSize, uint32 nStride, const void* pData, uint32 nUsage)
	{
		D3D11Buffer* pBuf = new D3D11Buffer(nSize, nStride, nUsage | eBufferUsage_VertexBuf, pData);
		return new D3D11VertexBuffer(pBuf);
	}
	//------------------------------------------------------------------------------------
	IndexBuffer* D3D11RenderSystem::CreateIndexBuffer(uint32 nSize, const void* pData, uint32 nUsage)
	{
		D3D11Buffer* pBuf = new D3D11Buffer(nSize, sizeof(DWORD), nUsage | eBufferUsage_IndexBuf, pData);
		return new D3D11IndexBuffer(pBuf);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderSystem::Draw(uint32 nVertCnt, uint32 nStartVertLocation)
	{
		m_pDeviceContext->Draw(nVertCnt, nStartVertLocation);
	}

}

