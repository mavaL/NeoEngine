/********************************************************************
	created:	2:12:2013   22:32
	filename	Water.h
	author:		maval

	purpose:	ˮ��Ⱦ. See
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
		Water(float waterHeight);
		~Water();

	public:
		void		Update();
		void		Render();

	private:
		void		_InitMaterial();
		void		_InitWaterMesh(float waterHeight);
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
		//RenderSystem*		m_pRenderSystem;
		//Texture*			m_pTexSceneWithRefracMask;
		//RenderTarget*		m_pRT_Reflection;
		//RenderTarget*		m_pRT_Depth;

		//cBufferVSFinal		m_constantBufVS;
		//cBufferPSFinal		m_constantBufPS;
		//cBufferDepth		m_constantBufDepth;
		//ID3D11Buffer*		m_pCB_VS;
		//ID3D11Buffer*		m_pCB_PS;
		//ID3D11Buffer*		m_pCB_Depth;

		//Material*			m_pRefracMaterial;
		//Material*			m_pWaterDepthMaterial;
		//Material*			m_pFinalComposeMaterial;

		//Mesh*				m_waterMesh;
		//Entity*				m_pEntity;
		//Common::Plane		m_waterPlane;
	};
}

#endif // Water_h__
