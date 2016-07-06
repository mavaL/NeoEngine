/********************************************************************
	created:	2016/06/22 16:57
	filename	TiledRenderer.h
	author:		maval

	purpose:	Tiled-based deferred shading renderer
*********************************************************************/
#ifndef TiledRenderer_h__
#define TiledRenderer_h__


#include "Prerequiestity.h"
#include "Light.h"

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

		const static int	MAX_POINT_LIGHT = 1000;

	public:
		void		Render();
		StructuredBuffer<FramebufferFlatElement>*		GetLitBuffer() { return m_pLitBuffer; }

	private:
		ID3D11ShaderResourceView*	_SetupLight();

	private:
		ID3D11DeviceContext*	m_pDeviceContext;
		Material*				m_pMtlTiledCS;
		StructuredBuffer<FramebufferFlatElement>* m_pLitBuffer;
		StructuredBuffer<SPointLightCS>*		m_pLightParamBuffer;
		ID3D11SamplerState*		m_pSampPoint;
		ID3D11SamplerState*		m_pSampLinear;
	};
}

#endif // TiledRenderer_h__