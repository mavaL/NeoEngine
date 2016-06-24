/********************************************************************
	created:	2016/06/22 16:57
	filename	TiledRenderer.h
	author:		maval

	purpose:	Tiled-based deferred shading renderer
*********************************************************************/
#ifndef TiledRenderer_h__
#define TiledRenderer_h__



#include "Prerequiestity.h"

namespace Neo
{
	// Flat framebuffer RGBA16-encoded
	struct FramebufferFlatElement
	{
		uint32 rb;
		uint32 ga;
	};

	class TileBasedDeferredRenderer
	{
	public:
		TileBasedDeferredRenderer();
		~TileBasedDeferredRenderer();

	public:
		void		Render();
		StructuredBuffer<FramebufferFlatElement>*		GetLitBuffer() { return m_pLitBuffer; }

	private:
		Material*	m_pMtlTiledCS;
		StructuredBuffer<FramebufferFlatElement>* m_pLitBuffer;
		ID3D11SamplerState*	m_pSamp;
	};
}

#endif // TiledRenderer_h__