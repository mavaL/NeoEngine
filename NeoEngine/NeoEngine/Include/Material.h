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
	class Material : public IRefCount
	{
	public:
		Material();
		~Material();

	public:
		SColor		ambient, diffuse, specular;
		float		shiness;

		void		Activate();
		bool		InitShader(const STRING& vsFileName, const STRING& psFileName, bool bHasClipPlaneShader);
		void		SetTexture(int stage, D3D11Texture* pTexture);
		void					SetSamplerStateDesc(int stage, const D3D11_SAMPLER_DESC& desc);
		D3D11_SAMPLER_DESC&		GetSamplerStateDesc(int stage)		{ return m_samplerStateDesc[stage]; }


	private:
		bool		_CompileShaderFromFile( const char* szFileName, const char* szEntryPoint, const char* szShaderModel, ID3DBlob** ppBlobOut );		
		void		_CreateVertexLayout();

		D3D11RenderSystem*			m_pRenderSystem;
		ID3D11VertexShader*			m_pVertexShader;
		ID3D11PixelShader*			m_pPixelShader;
		ID3D11VertexShader*			m_pVS_WithClipPlane;
		ID3D11InputLayout*			m_pInputLayout;			// Why keep it here? Because it's depend on m_vsCode
		std::vector<char>			m_vsCode;				// Cached for creating vertex layout
		bool						m_bHasClipPlaneShader;	// This material has clip plane shader?

		D3D11Texture*		m_pTexture[MAX_TEXTURE_STAGE];
		D3D11_SAMPLER_DESC	m_samplerStateDesc[MAX_TEXTURE_STAGE];
		ID3D11SamplerState*	m_pSamplerState[MAX_TEXTURE_STAGE];
	};
}

#endif // Material_h__