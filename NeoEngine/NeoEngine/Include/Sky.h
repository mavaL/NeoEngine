/********************************************************************
	created:	2016/08/04 16:29
	filename	Sky.h
	author:		maval

	purpose:	Atmospheric scattering sky rendering.

	reference:	1. "Precomputed Atomspheric Scattering"
				2. http://vterrain.org/Atmosphere/
				3. http://www.scratchapixel.com/old/lessons/3d-advanced-lessons/simulating-the-colors-of-the-sky/atmospheric-scattering/	Very recommended!
*********************************************************************/
#ifndef Sky_h__
#define Sky_h__

#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	class Sky
	{
	public:
		Sky();
		~Sky();

	public:
		void		Update();
		void		Render();

	private:
		bool		OnKeyPressed(const OIS::KeyEvent &arg);
		bool		OnKeyReleased(const OIS::KeyEvent &arg);
		bool		OnMouseMoved(const OIS::MouseEvent &arg);

		void		_InitMaterials();
		void		_Precompute();
		void		_InitConstantBuffer();
		void		_SetLayer(uint32 i);

	private:
		__declspec(align(16))
		struct cBufferInscatter1
		{
			VEC4 dhdH;
			float r;
			int layer;
		};

	private:
		D3D11RenderSystem*	m_pRenderSystem;

		D3D11RenderTarget*	m_pRT_Transmittance;
		D3D11RenderTarget*	m_pRT_InscatterDeltaS[2];
		D3D11RenderTarget*	m_pRT_Inscatter;

		Material*			m_pMtl_Transmittance;
		Material*			m_pMtl_InscatterDeltaS;
		Material*			m_pMtl_CopyInscatter1;
		Material*			m_pMtl_Sky;

		cBufferInscatter1	m_cbInscatter1;
		ID3D11Buffer*		m_pCB_Inscatter1;
	};
}

#endif // Sky_h__
