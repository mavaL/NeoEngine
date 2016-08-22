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
		// 2D rendering
		void			Init(uint32 width, uint32 height, ePixelFormat format, bool bOwnDepthBuffer = true, bool bUpdateRatioAspect = true, bool bNoColorBuffer = false, bool bMips = false);
		// Volume rendering
		void			Init(uint32 width, uint32 height, uint32 depth, ePixelFormat format, bool bOwnDepthBuffer = true, bool bUpdateRatioAspect = true, bool bNoColorBuffer = false);

		void			Destroy();
		void			OnWindowResized();

		void			BeforeRender(bool bClearColor, bool bClearZ, const SColor& clearColor = SColor::BLACK, float fz = 1.0f);
		void			AfterRender();
		D3D11Texture*	GetRenderTexture() { return m_pRenderTexture; }
		D3D11Texture*	GetDepthTexture() {return m_pDepthStencil; }
		void			SetActiveSlice(uint32 i);
		void			GenerateMips();

		// Render for a post effect
		void			RenderScreenQuad(Material* pMaterial, bool bClearColor, bool bClearZ, const SColor& clearColor = SColor::BLACK, float fz = 1.0f);

		ID3D11RenderTargetView*		GetRTV();

		static Entity*	m_pQuadEntity;

	private:
		void			_CreateDepthBuffer(uint32 width, uint32 height);
		

		D3D11RenderSystem*			m_pRenderSystem;
		D3D11_VIEWPORT				m_viewport;
		D3D11Texture*				m_pRenderTexture;
		D3D11Texture*				m_pDepthStencil;

		static Mesh*	m_pQuadMesh;

		VEC2			m_sizeRatio;		// ratio to screen size
		bool			m_bHasDepthBuffer;
		bool			m_bUpdateRatioAspect;
		uint32			m_iActiveSlice;
	};
}

#endif // D3D11RenderTarget_h__


