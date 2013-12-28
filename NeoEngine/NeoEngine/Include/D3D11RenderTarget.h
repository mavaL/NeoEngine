/********************************************************************
	created:	23:10:2013   20:10
	filename	D3D11RenderTarget.h
	author:		maval

	purpose:	Render target object
*********************************************************************/
#ifndef D3D11RenderTarget_h__
#define D3D11RenderTarget_h__

#include "Prerequiestity.h"
#include "IRefCount.h"
#include "Color.h"

namespace Neo
{
	//--------------------------------------------------------------------------
	class D3D11RenderTarget : public IRefCount
	{
	public:
		// NB: If the viewport dimension is not the same as the frame buffer, you should set
		// bUpdateViewport to true
		D3D11RenderTarget();
		~D3D11RenderTarget();

	public:
		void			Init(uint32 width, uint32 height, ePixelFormat format, bool bUpdateViewport = true, bool bOwnDepthBuffer = true);
		void			Destroy();
		void			OnWindowResized();

		void			SetClearEveryFrame(bool bColor, bool bZBuffer);
		void			SetClearColor(const SColor& color);
		void			SetRenderPhase(uint32 phaseFlag) { m_phaseFlag = phaseFlag; }
		D3D11Texture*	GetRenderTexture();

		// If pMaterial not null, use it to render all objects of this RT
		void			Update(Material* pMaterial = nullptr);

		// Render for a post effect
		void			RenderScreenQuad(Material* pMaterial);

		// If this RT doesn't have its own, return the one of the frame buffer.
		ID3D11DepthStencilView*	GetDSView();

	private:
		void			_CreateDepthBuffer(uint32 width, uint32 height);
		void			_BeforeRender();
		void			_AfterRender();

		D3D11RenderSystem*			m_pRenderSystem;
		D3D11Texture*				m_pRenderTexture;
		ID3D11DepthStencilView*		m_pDepthStencilView;
		ID3D11Texture2D*			m_pDepthStencil;

		static RenderObject*		m_pQuadMesh;

		VEC2			m_sizeRatio;		// ratio to screen size
		bool			m_bClearColor;
		bool			m_bClearZBuffer;
		bool			m_bUpdateViewport;
		bool			m_bHasDepthBuffer;
		SColor			m_clearColor;
		uint32			m_phaseFlag;
		uint32			m_oldViewportW, m_oldViewportH;
	};
}

#endif // D3D11RenderTarget_h__


