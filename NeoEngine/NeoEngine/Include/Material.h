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

namespace Neo
{
	//------------------------------------------------------------------------------------
	enum eTexSlot
	{
		eTexSlot_DiffuseMap = 0,
		eTexSlot_NormalMap,
	};

	class SubMaterial
	{
	public:
		SubMaterial();
		~SubMaterial();

		void		Activate();
		void		SetTexture(int stage, D3D11Texture* pTexture);

		D3D11Texture*		m_pTexture[MAX_TEXTURE_STAGE];
		VEC3				specular;
		float				glossiness;
	};
	//------------------------------------------------------------------------------------
	class Material : public IRefCount
	{
	public:
		Material(const STRING& name, eVertexType type = eVertexType_General, uint32 nSubMtl = 1);
		~Material();

	public:
		void		Activate(uint32 iSubMtl = 0);
		void		TurnOffTessellation();
		void		TurnOffComputeShader();
		// NB: Called before InitShader..
		void		SetVertexType(eVertexType type) { m_vertType = type; }
		void		SetTexture(int stage, D3D11Texture* pTexture);
		// NB: Should be called after all texture stages have been setup
		bool		InitShader(const STRING& vsFileName, const STRING& psFileName, eShader shaderType, 
			uint32 shaderFalg = 0, const D3D_SHADER_MACRO* pMacro = nullptr, const char* szVSEntryFunc = "VS", const char* szPSEntryFunc = "PS");
		bool		InitTessellationShader(const STRING& filename, uint32 shaderFalg = 0, const D3D_SHADER_MACRO* pMacro = nullptr);
		bool		InitComputeShader(const STRING& filename);

		void					SetSamplerStateDesc(int stage, const D3D11_SAMPLER_DESC& desc);
		D3D11_SAMPLER_DESC&		GetSamplerStateDesc(int stage)		{ return m_samplerStateDesc[stage]; }
		void					SetCullMode(D3D11_CULL_MODE mode)	{ m_cullMode = mode; }
		SubMaterial&			GetSubMaterial(uint32 i);
		eVertexType				GetVertexType() const { return m_vertType; }
		const STRING&			GetName() const { return m_name; }

	private:
		bool		_CompileShaderFromFile( const char* szFileName, const char* szEntryPoint, const char* szShaderModel, 
			const std::vector<D3D_SHADER_MACRO>& vecMacro, ID3DBlob** ppBlobOut );		
		void		_CreateVertexLayout();
		std::vector<D3D_SHADER_MACRO> _InternelInitShader(const D3D_SHADER_MACRO* pMacro, uint32 nMacro);

		STRING						m_name;
		D3D11RenderSystem*			m_pRenderSystem;
	
		ID3D11HullShader*			m_pHullShader;
		ID3D11DomainShader*			m_pDomainShader;
		ID3D11ComputeShader*		m_pComputeShader;
		ID3D11VertexShader*			m_pVS_WithClipPlane;
		ID3D11InputLayout*			m_pInputLayout;			// Why keep it here? Because it's depend on m_vsCode

		ID3D11VertexShader*			m_pVertexShader;
		ID3D11PixelShader*			m_pPixelShader;

		ID3D11VertexShader*			m_pVS_GBuffer;
		ID3D11PixelShader*			m_pPS_GBuffer;

		ID3D11VertexShader*			m_pVS_Shadow;
		ID3D11PixelShader*			m_pPS_Shadow;

		std::vector<char>			m_vsCode;				// Cached for creating vertex layout
		uint32						m_shaderFlag;
		D3D11_CULL_MODE				m_cullMode;
		eVertexType					m_vertType;
		eShader						m_shaderType;

		std::vector<SubMaterial>	m_vecSubMtls;
		D3D11_SAMPLER_DESC			m_samplerStateDesc[MAX_TEXTURE_STAGE];
		ID3D11SamplerState*			m_pSamplerState[MAX_TEXTURE_STAGE];
	};
}

#endif // Material_h__