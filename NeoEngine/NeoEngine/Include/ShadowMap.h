/********************************************************************
	created:	3:5:2014   21:57
	filename	ShadowMap.h
	author:		maval

	purpose:	Shadow map implement
*********************************************************************/
#ifndef ShadowMap_h__
#define ShadowMap_h__

#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	class ShadowMap
	{
	public:
		ShadowMap();
		~ShadowMap();

		static const int	SHADOW_MAP_SIZE = 2048;

	public:
		void			Update();
		void			Render();
		D3D11Texture*	GetShadowTexture();
		const MAT44&	GetShadowTransform() const { return m_matShadowTransform; }
		void			SetDepthBias(int bias);

	private:
		D3D11RenderTarget*	m_pRT_ShadowMap;
		MAT44				m_matLightView;
		MAT44				m_matLightProj;
		MAT44				m_matShadowTransform;
		D3D11_RASTERIZER_DESC	m_depthBiasRasterDesc;
	};
}

#endif // ShadowMap_h__
