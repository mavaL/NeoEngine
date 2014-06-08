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
		D3D11RenderTarget();
		~D3D11RenderTarget();

	public:
		void			Init(uint32 width, uint32 height, ePixelFormat format, bool bOwnDepthBuffer = true, bool bUpdateRatioAspect = true, bool bNoFrameBuffer = false);
		void			Destroy();
		void			OnWindowResized();

		void			SetClearEveryFrame(bool bColor, bool bZBuffer);
		void			SetClearColor(const SColor& color);
		bool			IsNoFrameBuffer() const { return m_bNoFrameBuffer; }
		void			SetRenderPhase(uint32 phaseFlag) { m_phaseFlag = phaseFlag; }
		D3D11Texture*	GetRenderTexture() { return m_pRenderTexture; }
		D3D11Texture*	GetDepthTexture() {return m_pDepthStencil; }

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
		D3D11_VIEWPORT				m_viewport;
		D3D11Texture*				m_pRenderTexture;
		D3D11Texture*				m_pDepthStencil;

		static Mesh*	m_pQuadMesh;
		static Entity*	m_pQuadEntity;

		VEC2			m_sizeRatio;		// ratio to screen size
		bool			m_bClearColor;
		bool			m_bClearZBuffer;
		bool			m_bHasDepthBuffer;
		bool			m_bNoFrameBuffer;
		bool			m_bUpdateRatioAspect;
		SColor			m_clearColor;
		uint32			m_phaseFlag;
	};
}

#endif // D3D11RenderTarget_h__


