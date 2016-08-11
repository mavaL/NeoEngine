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
	//------------------------------------------------------------------------------------
	// Per-frame constant buffer: (b0)
	__declspec(align(16))
	struct cBufferGlobal
	{
		cBufferGlobal(): shadowDepthBias(0.01f) {}

		MAT44	matView;
		MAT44	matProj;
		MAT44	matViewProj;
		MAT44	matInvView;
		MAT44	matShadow[3];
		PLANE	clipPlane;							// Clipping plane, for water reflection rendering
		VEC4	frustumFarCorner[4];				// LT, RT, LB, RB
		SColor	ambientColor;
		SColor	lightColor;
		uint32	frameBufferSize[4];					// zw unuesd
		VEC3	lightDirection;
		float	padding;
		VEC3	camPos;
		float	time;
		float	nearZ, farZ;
		float	shadowMapTexelSize;
		float	shadowDepthBias;					// Improving shadow acne artifacts
	};
	// Per-SubMaterial constant buffer: (b1)
	__declspec(align(16))
	struct cBufferMaterial
	{
		MAT44	matWorld;
		MAT44	matWorldIT;
		VEC4	specularGloss;
	};
	// Skined matrixs constant buffer: (b2)
	__declspec(align(16))
	struct cBufferSkin
	{
		MAT44	matSkin[100];
	};
	// Terrain constant buffer: (b3)
	__declspec(align(16))
	struct cBufferTerrain
	{
		PLANE	m_frustumPlane[4];

		// When distance is minimum, the tessellation is maximum
		// When distance is maximum, the tessellation is minimum
		float	minTessDist;
		float	maxTessDist;

		// Exponents for power of 2 tessellation.  The tessellation
		// range is [2^(gMinTess), 2^(gMaxTess)].  Since the maximum
		// tessellation is 64, this means gMaxTess can be at most 6
		// since 2^6 = 64.
		float	minTess;
		float	maxTess;

		VEC2	invTexSize;
		float	terrainCellSpace;
	};
	//----------------------------------------------------------------------------------------
	class D3D11RenderSystem
	{
	public:
		D3D11RenderSystem();
		~D3D11RenderSystem() {}

	public:
		bool		Init(uint32 wndWidth, uint32 wndHeight, HWND hwnd);
		void		Update(float dt);
		void		ShutDown();
		void		BeginScene();
		void		EndScene();
		void		SetViewport(const D3D11_VIEWPORT& vp);
		void		RestoreViewport();
		D3D11_VIEWPORT&	GetViewport() { return m_viewport; }
		void		OnWindowResize(uint32 width, uint32 height);
		uint32		GetWndWidth() const { return m_wndWidth; }
		uint32		GetWndHeight() const { return m_wndHeight; }

		ID3D11Device*				GetDevice()				{ return m_pd3dDevice; }
		ID3D11DeviceContext*		GetDeviceContext()		{ return m_pDeviceContext; }
		D3D11Texture*				GetDepthTexture()		{ return m_pTexDepthStencil; }
		cBufferMaterial&			GetMaterialCB()			{ return m_cBufferMaterial; }
		cBufferGlobal&				GetGlobalCB()			{ return m_cBufferGlobal; }
		cBufferSkin&				GetSkinCB()				{ return m_cBufferSkin; }
		cBufferTerrain&				GetTerrainCB()			{ return m_cBufferTerrain; }

		/// TODO: Currently doesn't have render states management
		D3D11_DEPTH_STENCIL_DESC&	GetDepthStencilDesc()	{ return m_depthStencilDesc; }
		D3D11_RASTERIZER_DESC&		GetRasterizeDesc()		{ return m_rasterDesc; }
		D3D11_BLEND_DESC&			GetBlendStateDesc()		{ return m_blendDesc; }
		void						SetDepthStencelState(const D3D11_DEPTH_STENCIL_DESC& desc);
		void						SetRasterizeDesc(const D3D11_RASTERIZER_DESC& desc);
		void						SetBlendStateDesc(const D3D11_BLEND_DESC& desc);

		// Set texture to device
		void		SetActiveTexture(int stage, D3D11Texture* pTexture);
		void		SetActiveSamplerState(int stage, ID3D11SamplerState* sampler);
		// This texture will be recreated after window resized.
		void		AddResizableTexture(D3D11Texture* pTexture);

		// Create a RT
		D3D11RenderTarget* CreateRenderTarget();
		// Set RT to device
		void		SetRenderTarget(D3D11RenderTarget** pRTs, D3D11Texture* pTexDepth, uint32 nRenderTarget, bool bClearColor = true, bool bClearZ = true, const SColor& clearClr = SColor::BLACK);
		// Before SetRT, unbind the SRV.
		void		UnbindTexture(D3D11Texture* tex);

		// Enable/Disable clipping plane
		void		EnableClipPlane(bool bEnable, const PLANE* plane);
		bool		IsClipPlaneEnabled() const { return m_bClipPlaneEnabled; }

		// Update constant buffer to device
		void		UpdateGlobalCBuffer(bool bTessellate = false, bool bComputeShader = false);
		void		UpdateMaterialCBuffer(bool bTessellate = false, bool bComputeShader = false);
		void		UpdateSkinCBuffer();
		void		UpdateTerrainCBuffer();
		
		/**	Copy back buffer content to another texture
			Note: The texture must be the same type of the back buffer,
			so be the dimension and format!
		*/
		void		CopyFrameBufferToTexture(D3D11Texture* pTexture);

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
		D3D11Texture*				m_pTexDepthStencil;
		D3D11Texture*				m_pTexture[MAX_TEXTURE_STAGE];
		Font*						m_pFont;

		uint32						m_wndWidth, m_wndHeight;

		cBufferGlobal				m_cBufferGlobal;
		cBufferMaterial				m_cBufferMaterial;
		cBufferSkin					m_cBufferSkin;
		cBufferTerrain				m_cBufferTerrain;
		ID3D11Buffer*				m_pTerrainCB;
		ID3D11Buffer*				m_pGlobalCBuf;
		ID3D11Buffer*				m_pMaterialCB;
		ID3D11Buffer*				m_pSkinCB;
		bool						m_bClipPlaneEnabled;

		// We centralize them here for supporting to resize window.
		std::vector<D3D11RenderTarget*>			m_vecRT;
		std::unordered_map<D3D11Texture*, VEC2>	m_mapTexNeedResize;		// Map value records size ratio
	};
}
#endif // D3D11RenderSystem_h__