/********************************************************************
	created:	1:12:2013   16:48
	filename: 	Material.h
	author:		maval
	
	purpose:	²ÄÖÊ·â×°
*********************************************************************/
#ifndef Material_h__
#define Material_h__

#include "Prerequiestity.h"
#include "Color.h"
#include "IRefCount.h"
#include "RenderDefine.h"
#include "RenderState.h"

namespace Neo
{
	//------------------------------------------------------------------------------------

	class SubMaterial
	{
	public:
		SubMaterial();
		~SubMaterial();

		void		Activate(bool bCS = false, bool bGS = false);
		void		SetTexture(int stage, Texture* pTexture);

		Texture*			m_pTexture[MAX_TEXTURE_STAGE];
		VEC3				specular;
		float				glossiness;
		VEC4				anisotropicParam;
	};
	//------------------------------------------------------------------------------------
	class Material : public IRefCount
	{
	public:
		Material(const STRING& name, eVertexType type = eVertexType_General, uint32 nSubMtl = 1);
		~Material();

	public:
		void		SetActivePass(uint32 iPass, bool bEnableGS = false);
		void		Activate(uint32 iSubMtl = 0);
		void		TurnOffTessellation();
		void		TurnOffComputeShader();
		void		TurnOffGeometryShader();

		// NB: Called before InitShader..
		void		SetVertexType(eVertexType type) { m_vertType = type; }
		void		SetTexture(int stage, Texture* pTexture);

		// NB: Should be called after all texture stages have been setup
		bool		InitShader(const STRING& strShaderFile, eShader shaderType, uint32 shaderFalg = 0, const D3D_SHADER_MACRO* pMacro = nullptr, 
			const char* szVS1 = "VS", const char* szPS1 = "PS",
			const char* szVS2 = nullptr, const char* szPS2 = nullptr);

		bool		InitTessellationShader(const STRING& filename, uint32 shaderFalg = 0, const D3D_SHADER_MACRO* pMacro = nullptr);
		bool		InitComputeShader(const STRING& filename);
		bool		InitGeometryShader(const STRING& filename);

		void					SetSamplerStateDesc(int stage, const SSamplerDesc& desc, bool bVS = false, bool bCS = false, bool bTessellation = false);
		SSamplerDesc&			GetSamplerStateDesc(int stage)		{ return m_samplerStateDesc[stage]; }
		void					SetCullMode(eCullMode mode)	{ m_cullMode = mode; }
		eCullMode				GetCullMode() const	{ return m_cullMode; }
		void					SetFillMode(eFillMode mode) { m_fillMode = mode; }
		eFillMode				GetFillMode() const { return m_fillMode; }
		void					SetDepthFunc(eCompareFunc func) { m_depthFunc = func; }
		eCompareFunc			GetDepthFunc() const { return m_depthFunc; }
		SubMaterial&			GetSubMaterial(uint32 i);
		SamplerState*			GetSamplerState(uint32 i) { return m_pSamplerState[i]; }
		eVertexType				GetVertexType() const { return m_vertType; }
		const STRING&			GetName() const { return m_name; }
		eShader					GetShaderType() const { return m_shaderType; }
		Shader*					GetCS() const		{ return m_pComputeShader; }
		Shader*					GetGS() const		{ return m_pGeometryShader; }
		Shader*					GetHS() const		{ return m_pHullShader; }
		Shader*					GetDS() const		{ return m_pDomainShader; }

	private:	
		std::vector<D3D_SHADER_MACRO> _InternelInitShader(const D3D_SHADER_MACRO* pMacro, uint32 nMacro);

		STRING						m_name;
		RenderSystem*				m_pRenderSystem;
		uint32						m_iActivePass;
	
		Shader*						m_pHullShader;
		Shader*						m_pDomainShader;
		Shader*						m_pGeometryShader;
		Shader*						m_pComputeShader;
		Shader*						m_pVS_WithClipPlane;

		Shader*						m_pVertexShader;
		Shader*						m_pPixelShader;
		// TODO: multi-passes
		Shader*						m_pVS_2;
		Shader*						m_pPS_2;

		Shader*						m_pVS_GBuffer;
		Shader*						m_pPS_GBuffer;

		Shader*						m_pVS_Shadow;
		Shader*						m_pPS_Shadow;

		uint32						m_shaderFlag;
		eCullMode					m_cullMode;
		eFillMode					m_fillMode;
		eCompareFunc				m_depthFunc;
		eVertexType					m_vertType;
		eShader						m_shaderType;
		bool						m_bEnableGS;
		uint32						m_nInstancedNum;

		std::vector<SubMaterial>	m_vecSubMtls;
		SSamplerDesc				m_samplerStateDesc[MAX_TEXTURE_STAGE];
		SamplerState*				m_pSamplerState[MAX_TEXTURE_STAGE];
		bool						m_bSamplerVS[MAX_TEXTURE_STAGE];
		bool						m_bSamplerGS[MAX_TEXTURE_STAGE];
		bool						m_bSamplerTess[MAX_TEXTURE_STAGE];
	};
}

#endif // Material_h__