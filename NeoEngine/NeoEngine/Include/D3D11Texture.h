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
		D3D11Texture(const STRING& filename, eTextureType type = eTextureType_2D, uint32 usage = 0, bool bSRGB = false);
		// Create as manual
		D3D11Texture(uint32 width, uint32 height, const char* pTexData, ePixelFormat format, uint32 usage, bool bMipMap);
		// Create from exist resource views
		D3D11Texture(ID3D11ShaderResourceView* pSRV, ID3D11RenderTargetView* pRTV, ID3D11DepthStencilView* pDSV);
		// Create as texture array
		D3D11Texture(const StringVector& vecTexNames, bool bSRGB);
		// 3D texture
		D3D11Texture(uint32 width, uint32 height, uint32 depth, ePixelFormat format, uint32 usage, bool bMipMap);

		~D3D11Texture();

	public:
		void								Destroy();
		eTextureType						GetTextureType() const { return m_texType; }
		bool								SaveToFile(const char* filename);
		ID3D11ShaderResourceView*			GetSRV() const { return m_pSRV; }
		ID3D11DepthStencilView*				GetDSV() const { return m_pDSV; }
		ID3D11RenderTargetView*				GetRTV() const { return m_pRTV; }
		ID3D11RenderTargetView*				GetRTV(uint32 iSlice) const { return m_pRTV_slices[iSlice]; }
		ID3D11Texture2D*					GetInternalTex() { return m_pTexture2D; }
		void								CreateSRV();
		void								CreateDSV();
		void								CreateRTV();
		uint32								GetWidth() const { return m_width; }
		uint32								GetHeight() const { return m_height; }
		uint32								GetUsage() const { return m_usage; }
		ePixelFormat						GetFormat() const { return m_texFormat; }

		// NB: Only for render texture!
		void								Resize(uint32 width, uint32 height);

		static ePixelFormat					ConvertFromDXFormat(DXGI_FORMAT dxformat);
		static DXGI_FORMAT					ConvertToDXFormat(ePixelFormat format);
		static DXGI_FORMAT					GetTypedFormat(DXGI_FORMAT format);
		static uint32						GetBytesPerPixelFromFormat(ePixelFormat format);

	private:
		void				_CreateManual(const char* pTexData);

	private:
		ID3D11Device*		m_pd3dDevice;
		ID3D11Texture2D*	m_pTexture2D;
		ID3D11Texture3D*	m_pTexture3D;
		D3D11RenderSystem*	m_pRenderSystem;
		ID3D11ShaderResourceView*	m_pSRV;
		ID3D11DepthStencilView*		m_pDSV;
		ID3D11RenderTargetView*		m_pRTV;
		ID3D11RenderTargetView*		m_pRTV_slices[32];	// Render to volume

		eTextureType		m_texType;
		int					m_usage;
		uint32				m_width, m_height, m_depth;
		ePixelFormat		m_texFormat;
		bool				m_bMipMap;
	};
}


#endif // D3D11Texture_h__


