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
		void			Init(uint32 width, uint32 height, ePixelFormat format, bool bOwnDepthBuffer = true, bool bUpdateRatioAspect = true, bool bNoColorBuffer = false);
		void			Destroy();
		void			OnWindowResized();

		void			SetRenderPhase(uint32 phaseFlag) { m_phaseFlag = phaseFlag; }
		D3D11Texture*	GetRenderTexture() { return m_pRenderTexture; }
		D3D11Texture*	GetDepthTexture() {return m_pDepthStencil; }

		// If pMaterial not null, use it to render all objects of this RT
		//void			Update(Material* pMaterial = nullptr);

		// Render for a post effect
		void			RenderScreenQuad(Material* pMaterial, bool bClearColor, bool bClearZ, const SColor& clearColor = SColor::BLACK, float fz = 1.0f);

		ID3D11DepthStencilView*		GetDSV();
		ID3D11RenderTargetView*		GetRTV();
		ID3D11ShaderResourceView*	GetSRV();

		static Entity*	m_pQuadEntity;

	private:
		void			_CreateDepthBuffer(uint32 width, uint32 height);
		void			_BeforeRender(bool bClearColor, bool bClearZ, const SColor& clearColor = SColor::BLACK, float fz = 1.0f);
		void			_AfterRender();

		D3D11RenderSystem*			m_pRenderSystem;
		D3D11_VIEWPORT				m_viewport;
		D3D11Texture*				m_pRenderTexture;
		D3D11Texture*				m_pDepthStencil;

		static Mesh*	m_pQuadMesh;

		VEC2			m_sizeRatio;		// ratio to screen size
		bool			m_bHasDepthBuffer;
		bool			m_bUpdateRatioAspect;
		uint32			m_phaseFlag;
	};
}

#endif // D3D11RenderTarget_h__


