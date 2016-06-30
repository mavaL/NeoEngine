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
	class PointListBody;

	class ShadowMap
	{
	public:
		ShadowMap();
		~ShadowMap();

	public:
		void			Update();
		void			Render();
		D3D11Texture*	GetShadowTexture();
		ShadowMapCSM*	GetCSM() { return m_pCSM; }
		const MAT44&	GetShadowTransform() const { return m_matShadowTransform; }
		ID3D11SamplerState*	GetShadowSampler() { return m_pShadowSampler; }

	private:
		D3D11RenderTarget*	m_pRT_ShadowMap;
		MAT44				m_matLightView;
		MAT44				m_matLightProj;
		MAT44				m_matShadowTransform;
		ShadowMapCSM*		m_pCSM;
		ID3D11SamplerState*	m_pShadowSampler;
	};
}

#endif // ShadowMap_h__
