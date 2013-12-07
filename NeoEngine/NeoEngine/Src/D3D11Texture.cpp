#include "stdafx.h"
#include "D3D11Texture.h"
#include "D3D11RenderSystem.h"

namespace Neo
{
	//--------------------------------------------------------------------------
	D3D11Texture::D3D11Texture(const STRING& filename, eTextureType type)
	:m_pTexture2D(nullptr)
	,m_pTexture3D(nullptr)
	,m_rtView(nullptr)
	,m_pSRV(nullptr)
	,m_usage(0)
	,m_texType(type)
	,m_width(0)
	,m_height(0)
	{
		m_pd3dDevice = g_env.pRenderSystem->GetDevice();
		if (m_pd3dDevice)
			m_pd3dDevice->AddRef();

		////////////////////////////////////////////////////////////////
		////////////// Load texture
		HRESULT hr = S_OK;
		D3DX11_IMAGE_LOAD_INFO loadInfo;
		loadInfo.MipLevels = 0;
		ID3D11Resource** pTex = nullptr;

		switch (GetTextureType())
		{
		case eTextureType_2D:
			{
				pTex = (ID3D11Resource**)&m_pTexture2D;
			}
			break;

		case eTextureType_CubeMap:
			{
				loadInfo.MiscFlags = D3D11_RESOURCE_MISC_TEXTURECUBE;
				pTex = (ID3D11Resource**)&m_pTexture2D;
			}
			break;

		case eTextureType_3D:
			{
				pTex = (ID3D11Resource**)&m_pTexture3D;
			}
			break;
		}

		D3DX11CreateTextureFromFileA(m_pd3dDevice, filename.c_str(), &loadInfo, nullptr,pTex, &hr);
		assert(SUCCEEDED(hr) && "Failed to load texture!");

		// Create SRV
		CreateSRV();
	}
	//-------------------------------------------------------------------------------
	D3D11Texture::D3D11Texture( int width, int height, ePixelFormat format, uint32 usage, bool bMipMap )
	:m_pTexture2D(nullptr)
	,m_pTexture3D(nullptr)
	,m_rtView(nullptr)
	,m_pSRV(nullptr)
	,m_usage(usage)
	,m_texType(eTextureType_2D)
	{
		m_pd3dDevice = g_env.pRenderSystem->GetDevice();
		if (m_pd3dDevice)
			m_pd3dDevice->AddRef();

		DXGI_FORMAT dxformat = DXGI_FORMAT_UNKNOWN;
		DWORD bytesPerPixel = 0;

		switch(format)
		{
		case ePF_A8R8G8B8:
			dxformat = DXGI_FORMAT_B8G8R8A8_UNORM;
			bytesPerPixel = 4;
			break;
		case ePF_A8B8G8R8:
			dxformat = DXGI_FORMAT_R8G8B8A8_UNORM;
			bytesPerPixel = 4;
			break;
		case ePF_L16:
			dxformat = DXGI_FORMAT_R16_UNORM; 
			bytesPerPixel = 2;
			break;
		case ePF_R8G8B8:
			dxformat = DXGI_FORMAT_B8G8R8A8_UNORM;
			bytesPerPixel = 4;
			break;
		case ePF_A16B16G16R16F:
			dxformat = DXGI_FORMAT_R16G16B16A16_UNORM;
			bytesPerPixel = 8;
			break;
		case ePF_L8:
			dxformat = DXGI_FORMAT_R8_UNORM;
			bytesPerPixel = 1;
			break;
		case ePF_R16F:
			dxformat = DXGI_FORMAT_R16_FLOAT;
			bytesPerPixel = 2;
			break;
		case ePF_R32F:
			dxformat = DXGI_FORMAT_R32_FLOAT;
			bytesPerPixel = 4;
			break;

		case ePF_DXT1: dxformat = DXGI_FORMAT_BC1_UNORM; bytesPerPixel = 4; break;
		case ePF_DXT2: dxformat = DXGI_FORMAT_BC2_UNORM; bytesPerPixel = 4; break;
		case ePF_DXT3: dxformat = DXGI_FORMAT_BC3_UNORM; bytesPerPixel = 4; break;
		case ePF_DXT4: dxformat = DXGI_FORMAT_BC4_UNORM; bytesPerPixel = 4; break;
		case ePF_DXT5: dxformat = DXGI_FORMAT_BC5_UNORM; bytesPerPixel = 4; break;

		default:
			assert(true);	// Not support yet...
			break;
		}

		DWORD pitch = bytesPerPixel * width;
		char* tmpBuf = new char[pitch * height];

		D3D11_SUBRESOURCE_DATA subData;
		D3D11_SUBRESOURCE_DATA* subDataArray = nullptr;
		subData.pSysMem = tmpBuf;
		subData.SysMemPitch = pitch;

		CD3D11_TEXTURE2D_DESC desc(dxformat, width, height);

		if (bMipMap)
		{
			int wid = width, hei = height;
			// Get mipmap level
			desc.MipLevels = 1;
			while((wid > 1) || (hei > 1))
			{
				wid = max(wid / 2, 1);
				hei = max(hei / 2, 1);
				++desc.MipLevels;
			}

			// Not correct mipmap data, just make room for later D3DX11FilterTexture
			subDataArray = new D3D11_SUBRESOURCE_DATA[desc.MipLevels];
			for (size_t i=0; i<desc.MipLevels; ++i)
			{
				subDataArray[i].pSysMem = tmpBuf;
				subDataArray[i].SysMemPitch = pitch;
			}
		}
		else
		{
			desc.MipLevels = 1;
			subDataArray = &subData;
		}

		// Validate usage
		assert(!((usage&eTextureUsage_WriteOnly)&&(usage&eTextureUsage_ReadWrite)) && "Invalid usage!");

		// Assign usage
		if (usage & eTextureUsage_WriteOnly)
		{
			desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
			desc.Usage = D3D11_USAGE_DYNAMIC;
		}
		else if (usage & eTextureUsage_ReadWrite)
		{
			desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE | D3D11_CPU_ACCESS_READ;
			desc.Usage = D3D11_USAGE_STAGING;
			desc.BindFlags = 0;
		}

		if (usage & eTextureUsage_RenderTarget)
		{
			desc.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;
		}

		if (GetTextureType() == eTextureType_CubeMap)
		{
			desc.MiscFlags |= D3D11_RESOURCE_MISC_TEXTURECUBE;
			desc.ArraySize = 6;
		}

		HRESULT hr = m_pd3dDevice->CreateTexture2D(&desc, subDataArray, &m_pTexture2D);

		SAFE_DELETE_ARRAY(tmpBuf);

		assert(SUCCEEDED(hr) && "Create texture failed!");

		// Generate mipmap levels
		if (bMipMap)
		{
			hr = D3DX11FilterTexture(m_pRenderSystem->GetDeviceContext(), m_pTexture2D, 0, D3DX11_DEFAULT);
			assert(SUCCEEDED(hr) && "D3DX11FilterTexture failed!");
		}

		// Create SRV
		CreateSRV();

		// Bind RT view
		if (m_usage & eTextureUsage_RenderTarget)
		{
			hr = m_pd3dDevice->CreateRenderTargetView( m_pTexture2D, NULL, &m_rtView );
			assert(SUCCEEDED(hr) && "CreateRenderTargetView failed!");
		}

		D3D11_TEXTURE2D_DESC SMTextureDesc;
		m_pTexture2D->GetDesc(&SMTextureDesc);

		m_width = SMTextureDesc.Width;
		m_height = SMTextureDesc.Height;
	}
	//-------------------------------------------------------------------------------
	D3D11Texture::~D3D11Texture()
	{
		SAFE_RELEASE(m_pTexture2D);
		SAFE_RELEASE(m_pTexture3D);
		SAFE_RELEASE(m_pd3dDevice);
	}
	//-------------------------------------------------------------------------------
	bool D3D11Texture::SaveToFile( const char* filename )
	{
		STRING str(filename);
		assert(str.substr(-4, 4) == ".png");

		ID3D11DeviceContext* context = m_pRenderSystem->GetDeviceContext();
		HRESULT hr = D3DX11SaveTextureToFileA(context, m_pTexture2D, D3DX11_IFF_PNG, filename);

		return SUCCEEDED(hr);
	}
	//-------------------------------------------------------------------------------
	void D3D11Texture::CreateSRV()
	{
		// Local texture not create SRV
		if (m_usage & eTextureUsage_ReadWrite)
			return;

		SAFE_RELEASE(m_pSRV);

		ID3D11Resource** pTex = nullptr;
		D3D11_SHADER_RESOURCE_VIEW_DESC SMViewDesc;

		switch (GetTextureType())
		{
		case eTextureType_2D:
			{
				D3D11_TEXTURE2D_DESC SMTextureDesc;
				m_pTexture2D->GetDesc(&SMTextureDesc);

				SMViewDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
				SMViewDesc.Texture2D.MipLevels = SMTextureDesc.MipLevels;
				SMViewDesc.Texture2D.MostDetailedMip = 0;
				SMViewDesc.Format = SMTextureDesc.Format;

				pTex = (ID3D11Resource**)&m_pTexture2D;
			}
			break;

		case eTextureType_CubeMap:
			{
				D3D11_TEXTURE2D_DESC SMTextureDesc;
				m_pTexture2D->GetDesc(&SMTextureDesc);

				SMViewDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURECUBE;
				SMViewDesc.TextureCube.MipLevels = SMTextureDesc.MipLevels;
				SMViewDesc.TextureCube.MostDetailedMip = 0;
				SMViewDesc.Format = SMTextureDesc.Format;

				pTex = (ID3D11Resource**)&m_pTexture2D;
			}
			break;

		case eTextureType_3D:
			{
				D3D11_TEXTURE3D_DESC SMTextureDesc;
				m_pTexture3D->GetDesc(&SMTextureDesc);

				SMViewDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE3D;
				SMViewDesc.Texture3D.MipLevels = SMTextureDesc.MipLevels;
				SMViewDesc.Texture3D.MostDetailedMip = 0;
				SMViewDesc.Format = SMTextureDesc.Format;

				pTex = (ID3D11Resource**)&m_pTexture3D;
			}
			break;

		default: assert(0);
		}

		HRESULT hr = m_pd3dDevice->CreateShaderResourceView(*pTex, &SMViewDesc, &m_pSRV);
		assert(SUCCEEDED(hr) && "Failed to create SRV!");
	}
}
