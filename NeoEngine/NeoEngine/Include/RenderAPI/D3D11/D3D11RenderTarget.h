/********************************************************************
	created:	23:10:2013   20:10
	filename	D3D11RenderTarget.h
	author:		maval

	purpose:	Render target object
*********************************************************************/
#ifndef D3D11RenderTarget_h__
#define D3D11RenderTarget_h__

#include "Prerequiestity.h"
#include "RenderTarget.h"
#include "Color.h"

namespace Neo
{
	//--------------------------------------------------------------------------
	class D3D11RenderTarget : public RenderTarget
	{
	public:
		D3D11RenderTarget();
		~D3D11RenderTarget();

	public:
		virtual void		RenderScreenQuad(Material* pMaterial, bool bClearColor, bool bClearZ, const SColor& clearColor = SColor::BLACK, float fz = 1.0f);

	public:
		// 2D rendering
		void			Init(uint32 width, uint32 height, ePixelFormat format, uint32 usage);
		// Volume rendering
		void			Init(uint32 width, uint32 height, uint32 depth, ePixelFormat format, uint32 usage);

		void			Destroy();
		void			OnWindowResized();

	private:
		void			_CreateDepthBuffer(uint32 width, uint32 height);
		
		VEC2			m_sizeRatio;		// ratio to screen size
	};
}

#endif // D3D11RenderTarget_h__


