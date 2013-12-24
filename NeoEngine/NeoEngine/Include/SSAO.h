/********************************************************************
	created:	23:12:2013   9:54
	filename: 	SSAO.h
	author:		maval
	
	purpose:	SSAO effect
*********************************************************************/
#ifndef SSAO_h__
#define SSAO_h__

#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	class SSAO
	{
	public:
		SSAO();
		~SSAO();

	public:
		void			Update();
		D3D11Texture*	GetSSAOMap()	{ return m_pTexSsao; }
		D3D11Texture*	GetBlurHMap()	{ return m_pTexBlurH; }
		D3D11Texture*	GetBlurVMap()	{ return m_pTexBlurV; }

	private:
		__declspec(align(16))
		struct cBufferBlur
		{
			VEC4	texelKernel[11];
		};

		D3D11RenderSystem*	m_pRenderSystem;
		D3D11RenderTarget*	m_pRT_NormalDepth;	// View space scene n&z, use for SSAO
		D3D11Texture*		m_pTexNormalDepth;		
		Material*			m_pNormalDepthMaterial;

		D3D11RenderTarget*	m_pRT_ssao;
		D3D11Texture*		m_pTexSsao;
		Material*			m_pSsaoMaterial;

		D3D11RenderTarget*	m_pRT_BlurH;
		D3D11RenderTarget*	m_pRT_BlurV;
		D3D11Texture*		m_pTexBlurH;
		D3D11Texture*		m_pTexBlurV;
		Material*			m_pBlurHMaterial;
		Material*			m_pBlurVMaterial;

		cBufferBlur			m_cBufferBlur;
		ID3D11Buffer*		m_pCB_Blur;
	};
}

#endif // SSAO_h__
