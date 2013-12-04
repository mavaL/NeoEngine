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
			MAT44	matWorld;		// TODO: Maybe world matrix should be separate for efficiency
			MAT44	matView;
			MAT44	matProj;
			MAT44	matMVP;
			MAT44	matWorldIT;
			SColor	ambientColor;
			SColor	lightColor;
			VEC3	lightDirection;
			float	time;
		};

	public:
		bool		Init(HWND hwnd);
		void		ShutDown();
		void		BeginScene();
		void		EndScene();

		ID3D11Device*				GetDevice()				{ return m_pd3dDevice; }
		ID3D11DeviceContext*		GetDeviceContext()		{ return m_pDeviceContext; }

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
		void		SetActiveTexture(int stage, D3D11Texture* pTexture);
		// Set RT to device
		void		SetRenderTarget(D3D11RenderTarget* pRT, bool bClear, const SColor* pClearColor = nullptr);
		// Manually create texture
		D3D11Texture*	CreateManualTexture(const STRING& name, uint32 width, uint32 height, ePixelFormat format, 
			eTextureUsage usage, bool bMipMap = false);
		
		/**	Copy back buffer content to another texture
			Note: The texture must be the same type of the back buffer,
			so be the dimension and format!
		*/
		void		CopyFrameBufferToTexture(D3D11Texture* pTexture);

		void		SetWorldTransform(const MAT44& matWorld, const MAT44& matWorldIT);

	private:
		ID3D11Device*				m_pd3dDevice;
		ID3D11DeviceContext*		m_pDeviceContext;
		IDXGISwapChain*				m_pSwapChain;
		D3D11_RASTERIZER_DESC		m_rasterDesc;
		ID3D11RasterizerState*		m_rasterState;
		D3D11_BLEND_DESC			m_blendDesc;
		ID3D11BlendState*			m_blendState;
		D3D11_DEPTH_STENCIL_DESC	m_depthStencilDesc;
		ID3D11DepthStencilState*	m_depthState;
		ID3D11RenderTargetView*		m_pRenderTargetView;	// Frame buffer RT
		ID3D11DepthStencilView*		m_pDepthStencilView;
		ID3D11Texture2D*			m_pDepthStencil;

		cBufferGlobal				m_cBufferGlobal;
		ID3D11Buffer*				m_pGlobalCBuf;

		typedef std::unordered_map<STRING, Material*>	MaterialLib;
		MaterialLib					m_matLib;

		D3D11Texture*				m_pTexture[MAX_TEXTURE_STAGE];
	};
}
#endif // D3D11RenderSystem_h__