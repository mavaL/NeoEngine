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
		D3D11RenderTarget(D3D11Texture* pRenderTexture);
		~D3D11RenderTarget();

	public:
		void		SetClearEveryFrame(bool bClear);
		void		SetClearColor(const SColor& color);
		void		SetRenderPhase(uint32 phaseFlag) { m_phaseFlag = phaseFlag; }
		// If pMaterial not null, use it to render all objects of this RT
		void		Update(Material* pMaterial = nullptr);
		D3D11Texture*			GetRenderTexture();
		ID3D11DepthStencilView*	GetDSView()	{ return m_pDepthStencilView; }

	private:
		D3D11RenderSystem*			m_pRenderSystem;
		D3D11Texture*				m_pRenderTexture;
		ID3D11DepthStencilView*		m_pDepthStencilView;
		ID3D11Texture2D*			m_pDepthStencil;

		bool			m_bClearEveryFrame;
		SColor			m_clearColor;
		uint32			m_phaseFlag;
	};
}

#endif // D3D11RenderTarget_h__


