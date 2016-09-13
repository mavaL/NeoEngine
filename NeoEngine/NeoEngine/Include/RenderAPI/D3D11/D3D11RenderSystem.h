/********************************************************************
	created:	27:11:2013   22:28
	filename	D3D11RenderSystem.h
	author:		maval

	purpose:	DX11 render system
*********************************************************************/
#ifndef D3D11RenderSystem_h__
#define D3D11RenderSystem_h__

#include "Prerequiestity.h"
#include "MathDef.h"
#include "RenderState.h"
#include "RenderSystem.h"
#include "RenderDefine.h"


namespace Neo
{
	//----------------------------------------------------------------------------------------
	class D3D11RenderSystem : public RenderSystem
	{
	public:
		D3D11RenderSystem();
		~D3D11RenderSystem() {}

	public:
		virtual	void			SetRenderTarget(RenderTarget** pRTs, Texture* pTexDepth, uint32 nRenderTarget, bool bClearColor = true, bool bClearZ = true, const SColor& clearClr = SColor::BLACK);
		virtual void*			CreateBlendState(const SStateBlendDesc& desc);
		virtual void*			CreateRasterState(const SStateRasterDesc& desc);
		virtual void*			CreateDepthState(const SStateDepthDesc& desc);
		virtual	void			ApplyBlendState(SStateBlend* pState);
		virtual	void			ApplyRasterState(SStateRaster* pState);
		virtual	void			ApplyDepthState(SStateDepth* pState);
		virtual void			SetViewport(const SViewport* vp);
		virtual void			SwapBuffer();
		virtual ConstantBuffer*	CreateConstantBuffer(uint32 nSize);
		virtual void			SetTexture(uint32 iStage, Texture* pTexture, uint32 usage = 0);
		virtual SamplerState*	CreateSamplerState(const SSamplerDesc& desc);
		virtual void			SetSamplerState(uint32 iStage, SamplerState* pSampler, bool bVS = false, bool bGS = false, bool bTessellation = false);
		virtual Shader*			CreateShader(eShaderType type, const STRING& filename, uint32 flags, const STRING& strEntryFunc, eVertexType vertType, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		virtual Texture*		LoadTexture(const STRING& filename, eTextureType type = eTextureType_2D, uint32 usage = 0, bool bSRGB = false);
		virtual RenderTarget*	CreateRenderTarget(uint32 nWidth, uint32 nHeight, uint32 nDepth, ePixelFormat format, uint32 usage);
		virtual Texture*		GetDepthBuffer();
		virtual Texture*		CreateTextureArray(const StringVector& vecTexNames, bool bSRGB = false);
		virtual Texture*		CreateTextureManual(uint32 nWidth, uint32 nHeight, const char* pTexData, ePixelFormat format, uint32 usage, bool bMipMap);
		virtual void			DrawIndexed(ePrimitive type, IndexBuffer* indexBuf, uint32 nIndexCnt, uint32 nStartIndexLocation, uint32 nBaseIndexLocation);
		virtual void			Draw(uint32 nVertCnt, uint32 nStartVertLocation);
		virtual void			SetVertexBuffer(VertexBuffer* vertBuf, uint32 iStream, uint32 nOffset);
		virtual VertexBuffer*	CreateVertexBuffer(uint32 nSize, uint32 nStride, const void* pData, uint32 nUsage);
		virtual IndexBuffer*	CreateIndexBuffer(uint32 nSize, const void* pData, uint32 nUsage);


	public:
		bool		Init(uint32 wndWidth, uint32 wndHeight, HWND hwnd);
		void		Shutdown();
		uint32		GetWndWidth() const { return m_wndWidth; }
		uint32		GetWndHeight() const { return m_wndHeight; }

		void		OnWindowResize(uint32 width, uint32 height);

		ID3D11Device*				GetDevice()				{ return m_pd3dDevice; }
		ID3D11DeviceContext*		GetDeviceContext()		{ return m_pDeviceContext; }

		// This texture will be recreated after window resized.
		void		AddResizableTexture(D3D11Texture* pTexture);

		/**	Copy back buffer content to another texture
			Note: The texture must be the same type of the back buffer,
			so be the dimension and format!
		*/
		void		CopyFrameBufferToTexture(D3D11Texture* pTexture);


	private:
		HRESULT		_OnSwapChainResized();

	private:
		uint32						m_wndWidth, m_wndHeight;
		ID3D11Device*				m_pd3dDevice;
		ID3D11DeviceContext*		m_pDeviceContext;
		DXGI_SWAP_CHAIN_DESC		m_swapChainDesc;
		IDXGISwapChain*				m_pSwapChain;
		ID3D11RenderTargetView*		m_pRenderTargetView;	// Frame buffer RT
		D3D11Texture*				m_pTexDepthStencil;

		// We centralize them here for supporting to resize window.
		std::vector<D3D11RenderTarget*>			m_vecRT;
		std::unordered_map<D3D11Texture*, VEC2>	m_mapTexNeedResize;		// Map value records size ratio
	};

	extern	D3D11RenderSystem*	g_pRenderSys;
}
#endif // D3D11RenderSystem_h__