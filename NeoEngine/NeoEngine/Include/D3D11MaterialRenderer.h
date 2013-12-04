/********************************************************************
	created:	2013/09/19
	created:	19:9:2013   11:11
	filename: 	CD3D11HLSLMaterialRenderer.h
	author:		maval
	
	purpose:	Material Renderer for D3D11 HLSL
*********************************************************************/
#ifndef CD3D11HLSLMaterialRenderer_h__
#define CD3D11HLSLMaterialRenderer_h__

#include "IMaterialRenderer.h"
#include "IMaterialRendererServices.h"
#include "IGPUProgrammingServices.h"
#include "irrArray.h"
#include "irrString.h"
#include "D3D11RenderSystem.h"
#include <vector>

namespace irr
{
namespace scene
{
	class CWaterSurfaceSceneNode;
}
namespace video  
{
	//--------------------------------------------------------------------------
	class CD3D11HLSLMaterialRenderer : public IMaterialRenderer, public IMaterialRendererServices
	{
	public:
		//! Constructor
		CD3D11HLSLMaterialRenderer(
			D3D11RenderSystem* driver, 
			s32& materialID,
			const c8* vertexShaderProgram = 0,
			const c8* vertexShaderEntryPointName = 0,
			const c8* pixelShaderProgram = 0,
			const c8* pixelShaderEntryPointName = 0,
			IShaderConstantSetCallBack* callback = 0,
			IMaterialRenderer* baseMaterial = 0,
			s32 userData = 0);

		//! Destructor
		virtual ~CD3D11HLSLMaterialRenderer();

	public:
		// implementations for IMaterialRenderer
		virtual void OnSetMaterial(const SMaterial& material, const SMaterial& lastMaterial, bool resetAllRenderstates, IMaterialRendererServices* services);
		virtual bool OnRender(IMaterialRendererServices* service, E_VERTEX_TYPE vtxtype);
		virtual void OnUnsetMaterial();
		virtual bool isTransparent() const;

		// implementations for the IMaterialRendererServices
		virtual void setBasicRenderStates(const SMaterial& material, const SMaterial& lastMaterial, bool resetAllRenderstates) {  }
		virtual bool setVertexShaderConstant(const c8* name, const f32* floats, int count) { return false; }
		virtual bool setVertexShaderConstant(const c8* name, const bool* bools, int count) { return false; }
		virtual bool setVertexShaderConstant(const c8* name, const s32* ints, int count) { return false; }
		virtual void setVertexShaderConstant(const f32* data, s32 startRegister, s32 constantAmount=1) {}
		virtual bool setPixelShaderConstant(const c8* name, const f32* floats, int count) { return false; }
		virtual bool setPixelShaderConstant(const c8* name, const bool* bools, int count) { return false; }
		virtual bool setPixelShaderConstant(const c8* name, const s32* ints, int count) { return false; }
		virtual void setPixelShaderConstant(const f32* data, s32 startRegister, s32 constantAmount=1) {}
		virtual IVideoDriver* getVideoDriver();

		// Global GPU shader params
		__declspec(align(16))
		struct cBufferGlobal
		{
			core::matrix4	matWorld;
			core::matrix4	matView;
			core::matrix4	matProj;
			core::matrix4	matMVP;
			core::matrix4	matWorldIT;
			video::SColorf	ambientColor;
			video::SColorf	lightColor;
			core::vector3df	lightDirection;
			float		time;
		};

		cBufferGlobal&	getGlobalConstantBuffer() { return m_cBufferGlobal; }

	protected:
		void	_init(const c8* vertexShaderProgram, const c8* vsEP, const c8* pixelShaderProgram, const c8* psEP);
		bool	_compileShaderFromFile( const c8* szFileName, const c8* szEntryPoint, const c8* szShaderModel, ID3DBlob** ppBlobOut );
		void	_createInputLayout();

		D3D11RenderSystem*				m_driver;
		IShaderConstantSetCallBack* m_callBack;

		ID3D11Device*				m_pd3dDevice;
		ID3D11DeviceContext*		m_pd3dContext;
		ID3D11VertexShader*			m_pVertexShader;
		ID3D11PixelShader*			m_pPixelShader; 
		ID3D11Buffer*				m_pMatrixCB;
		E_VERTEX_TYPE				m_vertexType;
		ID3D11InputLayout*			m_pInputLayout;
		std::vector<char>			m_vsCode;	// Cached for creating vertex layout
		cBufferGlobal				m_cBufferGlobal;
	};

	//--------------------------------------------------------------------------
	class GrassShaderCallBack : public IShaderConstantSetCallBack
	{
	public:
		GrassShaderCallBack(IVideoDriver* driver);
		~GrassShaderCallBack();

		virtual void OnSetMaterial(const SMaterial& material);
		virtual void OnSetConstants(IMaterialRendererServices* services, s32 userData);
		//virtual bool isTransparent() const { return true; }	//FIXME: BUG......

	private:
		__declspec(align(16))
		struct ConstantAlphaRef
		{
			core::vector4d	offset;				// Wave param
			f32				ref;				// Alpha test ref value
		};

		D3D11RenderSystem*			m_driver;
		ID3D11DeviceContext*	m_pd3dContext;
		ID3D11Buffer*			m_pAlphaRefCB;
		ConstantAlphaRef		m_shaderParams;
	};

	//--------------------------------------------------------------------------
	class SkyShaderCallBack: public IShaderConstantSetCallBack
	{
	public:
		SkyShaderCallBack(IVideoDriver* driver);
		~SkyShaderCallBack();

		virtual void OnSetMaterial(const SMaterial& material);
		virtual void OnSetConstants(IMaterialRendererServices* services, s32 userData);

	private:
		__declspec(align(16))
		struct ConstantShaderParam
		{
			core::vector4d	uLightDir;
			core::vector4d	uCameraPos;
			core::vector4d	uInvWaveLength;
			float			uInnerRadius;
			// Atmosphere properties
			float			uScale;              // 1 / (outerRadius - innerRadius)
			float			uScaleDepth;          // Where the average atmosphere density is found
			float			uScaleOverScaleDepth; // Scale / ScaleDepth
			// Number of samples
			int				uNumberOfSamples;
			float			uSamples;
		};

		D3D11RenderSystem*			m_driver;
		ID3D11DeviceContext*	m_pd3dContext;
		ID3D11Buffer*			m_pShaderCB;
	};

	//--------------------------------------------------------------------------
	class WaterShaderCallBack_Final: public IShaderConstantSetCallBack
	{
	public:
		WaterShaderCallBack_Final(IVideoDriver* driver, scene::ISceneManager* sceneMgr);
		~WaterShaderCallBack_Final();

		virtual void OnSetMaterial(const SMaterial& material) {}
		virtual void OnSetConstants(IMaterialRendererServices* services, s32 userData);

	private:
		__declspec(align(16))
		struct ConstantVS
		{
			core::vector3df	viewPt;
			float			padding;
			core::vector2df	texScale;
			core::vector2df	bumpSpeed;
			float			BumpScale;
			float			waveFreq;
			float			waveAmp;
		};

		__declspec(align(16))
		struct ConstantPS 
		{
			core::vector4d	deepColor;
			core::vector4d	shallowColor;
			core::vector4d	reflectionColor;
			float			reflectionAmount;
			float			reflectionBlur;
			float			waterAmount;
			float			fresnelPower; 
			float			fresnelBias;
			float			refractionAmount;
		};

		D3D11RenderSystem*			m_driver;
		ID3D11DeviceContext*	m_pd3dContext;
		ConstantVS				m_constantBufVS;
		ConstantPS				m_constantBufPS;
		ID3D11Buffer*			m_pCB_VS;
		ID3D11Buffer*			m_pCB_PS;
		scene::ISceneManager*	m_sceneMgr;
	};
	//----------------------------------------------------------------------------------------
	class WaterShaderCallBack_Depth: public IShaderConstantSetCallBack
	{
	public:
		WaterShaderCallBack_Depth(IVideoDriver* driver, scene::CWaterSurfaceSceneNode* node);
		~WaterShaderCallBack_Depth();

		virtual void OnSetMaterial(const SMaterial& material) {}
		virtual void OnSetConstants(IMaterialRendererServices* services, s32 userData);

	private:
		__declspec(align(16))
		struct cBuffer
		{
			f32		waterPlaneHeight;	// World y pos of the water plane
			f32		depthLimit;			// Water to shore transition control value
		};

		D3D11RenderSystem*		m_driver;
		ID3D11DeviceContext*m_pd3dContext;
		scene::CWaterSurfaceSceneNode*	m_waterNode;
		ID3D11Buffer*		m_pCB;
	};
	//----------------------------------------------------------------------------------------
	class WaterShaderCallBack_RefractiveMask: public IShaderConstantSetCallBack
	{
	public:
		WaterShaderCallBack_RefractiveMask(IVideoDriver* driver);
		~WaterShaderCallBack_RefractiveMask();

		virtual void OnSetMaterial(const SMaterial& material) {}
		virtual void OnSetConstants(IMaterialRendererServices* services, s32 userData);

	private:
		__declspec(align(16))
		struct cBuffer
		{
			f32		refractionMask;
		};

		D3D11RenderSystem*		m_driver;
		ID3D11DeviceContext*m_pd3dContext;
		ID3D11Buffer*		m_pCB;
	};

} // end namespace video
} // end namespace irr

#endif // CD3D11HLSLMaterialRenderer_h__

