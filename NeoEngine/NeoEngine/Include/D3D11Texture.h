/********************************************************************
	created:	2013/09/19
	created:	19:9:2013   15:49
	filename: 	D3D11Texture.h
	author:		maval
	
	purpose:	D3D11 texture warpper
				Using D3DX.
*********************************************************************/
#ifndef D3D11Texture_h__
#define D3D11Texture_h__

#include "Prerequiestity.h"
#include "IRefCount.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	class D3D11Texture : public IRefCount
	{
	public:
		// Load from file
		D3D11Texture(const STRING& filename, eTextureType type = eTextureType_2D);
		// Create manual
		D3D11Texture(int width, int height, ePixelFormat format, uint32 usage, bool bMipMap);

		~D3D11Texture();

	public:
		eTextureType						GetTextureType() const { return m_texType; }
		bool								SaveToFile(const char* filename);
		ID3D11ShaderResourceView* const*	GetSRV() const { return &m_pSRV; }
		ID3D11RenderTargetView*				GetRTView() { return m_rtView; }
		ID3D11Texture2D*					GetInternalTex() { return m_pTexture2D; }
		void								CreateSRV();
		uint32								GetWidth() const { return m_width; }
		uint32								GetHeight() const { return m_height; }

	private:
		ID3D11Device*		m_pd3dDevice;
		ID3D11Texture2D*	m_pTexture2D;
		ID3D11Texture3D*	m_pTexture3D;
		D3D11RenderSystem*	m_pRenderSystem;
		ID3D11ShaderResourceView*	m_pSRV;
		ID3D11RenderTargetView*		m_rtView;

		eTextureType		m_texType;
		int					m_usage;
		uint32				m_width, m_height;
	};
}


#endif // D3D11Texture_h__


