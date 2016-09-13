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
		Texture*		GetSSAOMap()	{ return m_pTexSsao; }
		Texture*		GetBlurHMap()	{ return m_pTexBlurH; }
		Texture*		GetBlurVMap()	{ return m_pTexBlurV; }

	private:
		__declspec(align(16))
		struct cBufferBlur
		{
			VEC4	texelKernel[11];
		};

		RenderSystem*		m_pRenderSystem;

		RenderTarget*		m_pRT_ssao;
		Texture*			m_pTexSsao;
		Material*			m_pSsaoMaterial;

		RenderTarget*		m_pRT_BlurH;
		RenderTarget*		m_pRT_BlurV;
		Texture*			m_pTexBlurH;
		Texture*			m_pTexBlurV;
		Material*			m_pBlurHMaterial;
		Material*			m_pBlurVMaterial;

		cBufferBlur			m_cBufferBlur;
		ConstantBuffer*		m_pCB_Blur;
	};
}

#endif // SSAO_h__
