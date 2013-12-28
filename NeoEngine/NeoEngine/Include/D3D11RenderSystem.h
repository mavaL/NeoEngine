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
#include "Color.h"

namespace Neo
{
	struct SFrameStat 
	{
		SFrameStat():lastFPS(0) {}

		float lastFPS;
	};
	//----------------------------------------------------------------------------------------
	class D3D11RenderSystem
	{
	public:
		D3D11RenderSystem();
		~D3D11RenderSystem() {}

		// Global GPU shader params
		// Update per frame
		__declspec(align(16))
		struct cBufferGlobal
		{
			MAT44	matTransform[eTransform_Count];		// TODO: Maybe world matrix should be separate for efficiency
			PLANE	clipPlane;							// Clipping plane, for water reflection rendering
			VEC4	frustumFarCorner[4];				// LT, RT, LB, RB
			SColor	ambientColor;
			SColor	lightColor;
			VEC3	lightDirection;
			float	padding;
			VEC3	camPos;
			float	time;
			float	nearZ, farZ;
		};

	public:
		bool		Init(uint32 wndWidth, uint32 wndHeight, HWND hwnd);
		void		Update();
		void		ShutDown();
		void		BeginScene();
		void		EndScene();
		void		SetViewport(const D3D11_VIEWPORT& vp);
		D3D11_VIEWPORT&	GetViewport() { return m_viewport; }
		void		OnViewportResize(uint32 width, uint32 height);
		void		OnWindowResize(uint32 width, uint32 height);
		uint32		GetWndWidth() const { return m_vpWidth; }
		uint32		GetWndHeight() const { return m_vpHeight; }

		ID3D11Device*				GetDevice()				{ return m_pd3dDevice; }
		ID3D11DeviceContext*		GetDeviceContext()		{ return m_pDeviceContext; }
		ID3D11DepthStencilView*		GetDSView()				{ return m_pDepthStencilView; }

		/// TODO: Currently doesn't have render states management
		D3D11_DEPTH_STENCIL_DESC&	GetDepthStencilDesc()	{ return m_depthStencilDesc; }
		D3D11_RASTERIZER_DESC&		GetRasterizeDesc()		{ return m_rasterDesc; }
		D3D11_BLEND_DESC&			GetBlendStateDesc()		{ return m_blendDesc; }
		void						SetDepthStencelState(const D3D11_DEPTH_STENCIL_DESC& desc);
		void						SetRasterizeDesc(const D3D11_RASTERIZER_DESC& desc);
		void						SetBlendStateDesc(const D3D11_BLEND_DESC& desc);

		// Add a new material to MatLib
		void		AddMaterial(const STRING& name, Material* pMaterial);
		// Get a material from MatLib
		Material*	GetMaterial(const STRING& name);
		// Set texture to device
		void		SetActiveTexture(int stage, D3D11Texture* pTexture, ID3D11SamplerState* sampler);

		// Create a RT
		D3D11RenderTarget* CreateRenderTarget();
		// Set RT to device
		void		SetRenderTarget(D3D11RenderTarget* pRT, bool bClearColor, bool bClearZBuffer, const SColor* pClearColor = nullptr);

		// Enable/Disable clipping plane
		void		EnableClipPlane(bool bEnable, const PLANE* plane);
		bool		IsClipPlaneEnabled() const { return m_bClipPlaneEnabled; }
		// Update global constant buffer to device
		void		UpdateGlobalCBuffer(bool bTessellate = false);
		
		/**	Copy back buffer content to another texture
			Note: The texture must be the same type of the back buffer,
			so be the dimension and format!
		*/
		void		CopyFrameBufferToTexture(D3D11Texture* pTexture);

		void		SetTransform(eTransform type, const MAT44& matrix, bool bUpdateCBuffer);
		void		DrawText(const STRING& text, const IPOINT& pos, const SColor& color);

	private:
		bool		_InitDevice(uint32 wndWidth, uint32 wndHeight, HWND hwnd);
		void		_ShutDownDevice();
		HRESULT		_OnSwapChainResized();

	private:
		ID3D11Device*				m_pd3dDevice;
		ID3D11DeviceContext*		m_pDeviceContext;
		DXGI_SWAP_CHAIN_DESC		m_swapChainDesc;
		IDXGISwapChain*				m_pSwapChain;
		D3D11_VIEWPORT				m_viewport;
		D3D11_RASTERIZER_DESC		m_rasterDesc;
		ID3D11RasterizerState*		m_rasterState;
		D3D11_BLEND_DESC			m_blendDesc;
		ID3D11BlendState*			m_blendState;
		D3D11_DEPTH_STENCIL_DESC	m_depthStencilDesc;
		ID3D11DepthStencilState*	m_depthState;
		ID3D11RenderTargetView*		m_pRenderTargetView;	// Frame buffer RT
		ID3D11DepthStencilView*		m_pDepthStencilView;
		ID3D11Texture2D*			m_pDepthStencil;
		D3D11Texture*				m_pTexture[MAX_TEXTURE_STAGE];
		Font*						m_pFont;

		uint32						m_vpWidth, m_vpHeight;

		cBufferGlobal				m_cBufferGlobal;
		ID3D11Buffer*				m_pGlobalCBuf;
		bool						m_bClipPlaneEnabled;

		typedef std::unordered_map<STRING, Material*>	MaterialLib;
		MaterialLib					m_matLib;

		std::vector<D3D11RenderTarget*>	m_vecRT;	// We centralize RT here for supporting to resize window.
	};
}
#endif // D3D11RenderSystem_h__