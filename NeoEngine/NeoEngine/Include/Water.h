/********************************************************************
	created:	2:12:2013   22:32
	filename	Water.h
	author:		maval

	purpose:	ÀÆ‰÷»æ. See
				http://http.developer.nvidia.com/GPUGems2/gpugems2_chapter19.html
*********************************************************************/
#ifndef Water_h__
#define Water_h__

#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	class Water
	{
	public:
		Water();
		~Water();

	public:
		void		Update();
		void		Render();

	private:
		void		_InitMaterial();
		void		_InitWaterMesh();
		void		_InitConstantBuffer();
		void		_RenderReflection();
		void		_RenderRefraction();
		void		_RenderWaterDepth();
		void		_FinalCompose();

		__declspec(align(16))
		struct cBufferVSFinal
		{
			VEC3	viewPt;
			float	padding;
			VEC2	texScale;
			VEC2	bumpSpeed;
			float	BumpScale;
			float	waveFreq;
			float	waveAmp;
		};

		__declspec(align(16))
		struct cBufferPSFinal 
		{
			VEC4	deepColor;
			VEC4	shallowColor;
			VEC4	reflectionColor;
			float	reflectionAmount;
			float	reflectionBlur;
			float	waterAmount;
			float	fresnelPower; 
			float	fresnelBias;
			float	refractionAmount;
		};

		__declspec(align(16))
		struct cBufferDepth
		{
			float	waterPlaneHeight;
			float	depthLimit;
		};

	private:
		D3D11RenderSystem*	m_pRenderSystem;
		D3D11Texture*		m_pTexSceneWithRefracMask;
		D3D11RenderTarget*	m_pRT_Reflection;
		D3D11RenderTarget*	m_pRT_Depth;

		cBufferVSFinal		m_constantBufVS;
		cBufferPSFinal		m_constantBufPS;
		cBufferDepth		m_constantBufDepth;
		ID3D11Buffer*		m_pCB_VS;
		ID3D11Buffer*		m_pCB_PS;
		ID3D11Buffer*		m_pCB_Depth;

		Material*			m_pRefracMaterial;
		Material*			m_pWaterDepthMaterial;
		Material*			m_pFinalComposeMaterial;

		RenderObject*		m_waterMesh;
		Common::Plane		m_waterPlane;
	};
}

#endif // Water_h__
