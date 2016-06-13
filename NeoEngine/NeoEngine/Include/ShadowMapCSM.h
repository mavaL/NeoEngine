/********************************************************************
	created:	2016/05/16 10:46
	filename	ShadowMapCSM.h
	author:		maval

	purpose:	Cascade shadow mapping.
*********************************************************************/
#ifndef ShadowMapCSM_h__
#define ShadowMapCSM_h__

#include "Prerequiestity.h"
#include "MathDef.h"

class CFirstPersonCamera;

namespace Neo
{
	class ShadowMapCSM
	{
	public:
		ShadowMapCSM();
		~ShadowMapCSM();

	public:
		void				Update(Camera& cam);
		void				Render();
		D3D11Texture*		GetShadowTexture(int i);
		const MAT44&		GetShadowTransform(int i) { return m_matShadowTransform[i]; }
		void				SetCascadePadding(float f) { m_fCascadePadding = f; }

	private:
		MAT44				m_matLightView;
		MAT44				m_matLightProj[CSM_CASCADE_NUM];
		MAT44				m_matShadowTransform[CSM_CASCADE_NUM];
		D3D11RenderTarget*	m_shadowMapCascades[CSM_CASCADE_NUM];
		float				m_fCascadePadding;
	};
}

#endif // ShadowMapCSM_h__