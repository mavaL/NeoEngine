#include "stdafx.h"
#include "D3D11/D3D11Texture.h"
#include "D3D11/D3D11RenderSystem.h"
#include "DDSTextureLoader.h"

namespace Neo
{
	//--------------------------------------------------------------------------
	D3D11Texture::D3D11Texture(const STRING& filename, eTextureType type, uint32 usage, bool bSRGB)
	: Texture(type, 0, 0, 0, ePF_Unknown, usage, true)
	, m_pTexture2D(nullptr)
	, m_pTexture3D(nullptr)
	, m_pRTV(nullptr)
	, m_pSRV(nullptr)
	, m_pDSV(nullptr)
	{
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

		default: assert(0);
		}

		if (filename.find(".dds") != STRING::npos)
		{
			V(DirectX::CreateDDSTextureFromFileEx(g_pRenderSys->GetDevice(), EngineToUnicode(filename).c_str(),
				4096, D3D11_USAGE_DEFAULT, D3D11_BIND_SHADER_RESOURCE, 0, 0, bSRGB, pTex, &m_pSRV));
		} 
		else
		{
			V(D3DX11CreateTextureFromFileA(g_pRenderSys->GetDevice(), filename.c_str(), &loadInfo, nullptr, pTex, nullptr));

			// Create SRV
			CreateSRV();
		}

		// Store texture dimension and format
		switch (GetTextureType())
		{
		case eTextureType_2D:
		case eTextureType_CubeMap:
			{
				D3D11_TEXTURE2D_DESC desc;
				m_pTexture2D->GetDesc(&desc);

				m_width = desc.Width;
				m_height = desc.Height;

				m_texFormat = ConvertFromDXFormat(desc.Format);
			}
			break;

		case eTextureType_3D:
			{
				D3D11_TEXTURE3D_DESC desc;
				m_pTexture3D->GetDesc(&desc);

				m_width = desc.Width;
				m_height = desc.Height;

				m_texFormat = ConvertFromDXFormat(desc.Format);
			}
			break;

		default: assert(0);
		}
	}
	//-------------------------------------------------------------------------------
	D3D11Texture::D3D11Texture( uint32 width, uint32 height, const char* pTexData, ePixelFormat format, uint32 usage, bool bMipMap )
		: Texture(eTextureType_2D, width, height, 1, format, usage, bMipMap)
		, m_pTexture2D(nullptr)
		, m_pTexture3D(nullptr)
		, m_pRTV(nullptr)
		, m_pSRV(nullptr)
		, m_pDSV(nullptr)
	{
		_CreateManual(pTexData);

		if (m_usage & eTextureUsage_RecreateOnWndResized)
		{
			g_pRenderSys->AddResizableTexture(this);
		}
	}
	//------------------------------------------------------------------------------------
	D3D11Texture::D3D11Texture(const StringVector& vecTexNames, bool bSRGB)
		: Texture(eTextureType_TextureArray, 0, 0, 0, ePF_Unknown, 0, true)
		, m_pTexture2D(nullptr)
		, m_pTexture3D(nullptr)
		, m_pRTV(nullptr)
		, m_pSRV(nullptr)
		, m_pDSV(nullptr)
	{
		_AST(!vecTexNames.empty());

		HRESULT hr = S_OK;
		// First load all texture elements
		std::vector<ID3D11Texture2D*> vecTexs(vecTexNames.size());
		for (size_t i=0; i<vecTexNames.size(); ++i)
		{
			D3DX11_IMAGE_LOAD_INFO loadInfo;
			loadInfo.Width  = D3DX11_FROM_FILE;
			loadInfo.Height = D3DX11_FROM_FILE;
			loadInfo.Depth  = D3DX11_FROM_FILE;
			loadInfo.FirstMipLevel = 0;
			loadInfo.BindFlags = 0;
			loadInfo.Usage = D3D11_USAGE_STAGING;	// Local res
			loadInfo.MipLevels = 0;
			loadInfo.CpuAccessFlags = D3D11_CPU_ACCESS_WRITE | D3D11_CPU_ACCESS_READ;
			loadInfo.MiscFlags = 0;
			loadInfo.Format = DXGI_FORMAT_FROM_FILE;
			loadInfo.Filter = D3DX11_FILTER_NONE;
			loadInfo.MipFilter = D3DX11_FILTER_LINEAR;
			loadInfo.pSrcInfo  = 0;

			if (vecTexNames[i].find(".dds") != STRING::npos)
			{
				V(DirectX::CreateDDSTextureFromFileEx(g_pRenderSys->GetDevice(), EngineToUnicode(vecTexNames[i]).c_str(),
					4096, D3D11_USAGE_STAGING, 0, D3D11_CPU_ACCESS_READ, 0, bSRGB, (ID3D11Resource**)&vecTexs[i], nullptr));
			}
			else
			{
				V(D3DX11CreateTextureFromFileA(g_pRenderSys->GetDevice(), vecTexNames[i].c_str(),
					&loadInfo, nullptr, (ID3D11Resource**)&vecTexs[i], nullptr));
			}
			
		}

		// Then create the texture array object
		D3D11_TEXTURE2D_DESC texElementDesc;
		vecTexs[0]->GetDesc(&texElementDesc);

		// Store dimension and format
		m_width = texElementDesc.Width;
		m_height = texElementDesc.Height;

		m_texFormat = ConvertFromDXFormat(texElementDesc.Format);

		D3D11_TEXTURE2D_DESC texArrayDesc;
		texArrayDesc.Width              = texElementDesc.Width;
		texArrayDesc.Height             = texElementDesc.Height;
		texArrayDesc.MipLevels          = texElementDesc.MipLevels;
		texArrayDesc.ArraySize          = vecTexs.size();
		texArrayDesc.Format             = texElementDesc.Format;
		texArrayDesc.SampleDesc.Count   = 1;
		texArrayDesc.SampleDesc.Quality = 0;
		texArrayDesc.Usage              = D3D11_USAGE_DEFAULT;
		texArrayDesc.BindFlags          = D3D11_BIND_SHADER_RESOURCE;
		texArrayDesc.CPUAccessFlags     = 0;
		texArrayDesc.MiscFlags          = 0;

		V(g_pRenderSys->GetDevice()->CreateTexture2D(&texArrayDesc, 0, &m_pTexture2D));

		// Fill texture array data
		ID3D11DeviceContext* dc = g_pRenderSys->GetDeviceContext();

		for(size_t texElement=0; texElement<vecTexs.size(); ++texElement)
		{
			vecTexs[texElement]->GetDesc(&texElementDesc);

			for(UINT mipLevel = 0; mipLevel < texElementDesc.MipLevels; ++mipLevel)
			{
				D3D11_MAPPED_SUBRESOURCE mappedTex2D;
				V(dc->Map(vecTexs[texElement], mipLevel, D3D11_MAP_READ, 0, &mappedTex2D));

				dc->UpdateSubresource(m_pTexture2D, 
					D3D11CalcSubresource(mipLevel, texElement, texElementDesc.MipLevels),
					0, mappedTex2D.pData, mappedTex2D.RowPitch, mappedTex2D.DepthPitch);

				dc->Unmap(vecTexs[texElement], mipLevel);
			}
		}

		CreateSRV();

		for(size_t i=0; i<vecTexs.size(); ++i)
			vecTexs[i]->Release();
	}
	//------------------------------------------------------------------------------------
	D3D11Texture::D3D11Texture(ID3D11ShaderResourceView* pSRV, ID3D11RenderTargetView* pRTV, ID3D11DepthStencilView* pDSV)
		: Texture(eTextureType_2D, 0, 0, 0, ePF_Unknown, 0, false)
		, m_pTexture2D(nullptr)
		, m_pTexture3D(nullptr)
		, m_pRTV(pRTV)
		, m_pSRV(pSRV)
		, m_pDSV(pDSV)
	{

	}
	//------------------------------------------------------------------------------------
	D3D11Texture::D3D11Texture(uint32 width, uint32 height, uint32 depth, ePixelFormat format, uint32 usage, bool bMipMap)
		: Texture(eTextureType_3D, width, height, depth, format, usage, bMipMap)
		, m_pTexture2D(nullptr)
		, m_pTexture3D(nullptr)
		, m_pRTV(nullptr)
		, m_pSRV(nullptr)
		, m_pDSV(nullptr)
	{
		ZeroMemory(m_pRTV_slices, sizeof(m_pRTV_slices));

		HRESULT hr = S_OK;
		const DXGI_FORMAT dxformat = ConvertToDXFormat(m_texFormat);

		CD3D11_TEXTURE3D_DESC desc(dxformat, width, height, depth, 1);

		// Validate usage
		assert(!((m_usage&eTextureUsage_WriteOnly) && (m_usage&eTextureUsage_ReadWrite)) && "Invalid usage!");

		// Assign usage
		if (m_usage & eTextureUsage_WriteOnly)
		{
			desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
			desc.Usage = D3D11_USAGE_DYNAMIC;
		}
		else if (m_usage & eTextureUsage_ReadWrite)
		{
			desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE | D3D11_CPU_ACCESS_READ;
			desc.Usage = D3D11_USAGE_STAGING;
			desc.BindFlags = 0;
		}

		if (m_usage & eTextureUsage_RenderTarget)
		{
			desc.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;
		}

		V(g_pRenderSys->GetDevice()->CreateTexture3D(&desc, nullptr, &m_pTexture3D));

		CreateSRV();

		// Create RTV
		if (m_usage & eTextureUsage_RenderTarget)
		{
			_AST(depth <= 32);

			for (uint32 i = 0; i < depth; ++i)
			{
				CD3D11_RENDER_TARGET_VIEW_DESC rtvDesc(D3D11_RTV_DIMENSION_TEXTURE3D, dxformat, 0, i, 1);
				V(g_pRenderSys->GetDevice()->CreateRenderTargetView(m_pTexture3D, &rtvDesc, &m_pRTV_slices[i]));
			}
		}
	}
	//-------------------------------------------------------------------------------
	D3D11Texture::~D3D11Texture()
	{
		Destroy();
	}
	//-----------------------------------------------------------------------------------
	void D3D11Texture::Destroy()
	{
		SAFE_RELEASE(m_pTexture2D);
		SAFE_RELEASE(m_pTexture3D);
		SAFE_RELEASE(m_pSRV);
		SAFE_RELEASE(m_pDSV);
		SAFE_RELEASE(m_pRTV);
	}
	//------------------------------------------------------------------------------------
	void D3D11Texture::_CreateManual(const char* pTexData)
	{
		HRESULT hr = S_OK;
		const DXGI_FORMAT dxformat = ConvertToDXFormat(m_texFormat);
		const DWORD bytesPerPixel = GetBytesPerPixelFromFormat(m_texFormat);

		DWORD pitch = bytesPerPixel * m_width;
		char* tmpBuf = (char*)pTexData;

		if(!pTexData)
			tmpBuf = new char[pitch * m_height];

		D3D11_SUBRESOURCE_DATA subData;
		D3D11_SUBRESOURCE_DATA* subDataArray = nullptr;
		subData.pSysMem = tmpBuf;
		subData.SysMemPitch = pitch;

		CD3D11_TEXTURE2D_DESC desc(dxformat, m_width, m_height);

		if (m_bMipMap)
		{
			int wid = m_width, hei = m_height;
			// Get mipmap level
			desc.MipLevels = 1;
			while((wid > 1) || (hei > 1))
			{
				wid = Max(wid / 2, 1);
				hei = Max(hei / 2, 1);
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
		assert(!((m_usage&eTextureUsage_WriteOnly)&&(m_usage&eTextureUsage_ReadWrite)) && "Invalid usage!");

		// Assign usage
		if (m_usage & eTextureUsage_WriteOnly)
		{
			desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
			desc.Usage = D3D11_USAGE_DYNAMIC;
		}
		else if (m_usage & eTextureUsage_ReadWrite)
		{
			desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE | D3D11_CPU_ACCESS_READ;
			desc.Usage = D3D11_USAGE_STAGING;
			desc.BindFlags = 0;
		}

		if (m_usage & eTextureUsage_RenderTarget)
		{
			desc.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;

			if (m_usage & eTextureUsage_AutoGenMips)
			{
				desc.MiscFlags |= D3D11_RESOURCE_MISC_GENERATE_MIPS;
			}
		}

		if (GetTextureType() == eTextureType_CubeMap)
		{
			desc.MiscFlags |= D3D11_RESOURCE_MISC_TEXTURECUBE;
			desc.ArraySize = 6;
		}

		if (m_usage & eTextureUsage_Depth)
		{
			desc.Usage			= D3D11_USAGE_DEFAULT;
			desc.BindFlags		= D3D11_BIND_DEPTH_STENCIL | D3D11_BIND_SHADER_RESOURCE;

			g_pRenderSys->GetDevice()->CreateTexture2D(&desc, nullptr, &m_pTexture2D);
		}
		else
		{
			g_pRenderSys->GetDevice()->CreateTexture2D(&desc, subDataArray, &m_pTexture2D);
		}

		if(!pTexData)
		{
			SAFE_DELETE_ARRAY(tmpBuf);
		}

		assert(SUCCEEDED(hr) && "Create texture failed!");

		// Generate mipmap levels
		if (m_bMipMap && !(m_usage & eTextureUsage_RenderTarget))
		{
			V(D3DX11FilterTexture(g_pRenderSys->GetDeviceContext(), m_pTexture2D, 0, D3DX11_DEFAULT));
		}

		// Create SRV
		CreateSRV();

		// Create DSV
		if (m_usage & eTextureUsage_Depth)
		{
			CreateDSV();
		}

		// Create RTV
		if (m_usage & eTextureUsage_RenderTarget)
		{
			CreateRTV();
		}
	}
	//-------------------------------------------------------------------------------
	bool D3D11Texture::SaveToFile( const char* filename )
	{
		STRING str(filename);
		assert(str.substr(str.length()-4, 4) == ".dds");

		HRESULT hr = D3DX11SaveTextureToFileA(g_pRenderSys->GetDeviceContext(), m_pTexture2D, D3DX11_IFF_DDS, filename);

		return SUCCEEDED(hr);
	}
	//------------------------------------------------------------------------------------
	void D3D11Texture::CreateDSV()
	{
		assert(GetTextureType() == eTextureType_2D);

		D3D11_DEPTH_STENCIL_VIEW_DESC descDSV;
		ZeroMemory( &descDSV, sizeof(descDSV) );
		descDSV.Format = DXGI_FORMAT_D32_FLOAT;
		descDSV.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
		descDSV.Flags = 0;
		descDSV.Texture2D.MipSlice=0;

		HRESULT hr = S_OK;
		V(g_pRenderSys->GetDevice()->CreateDepthStencilView(m_pTexture2D, &descDSV, &m_pDSV));
	}
	//-------------------------------------------------------------------------------
	void D3D11Texture::CreateSRV()
	{
		// Local texture not create SRV
		if (m_usage & eTextureUsage_ReadWrite)
			return;

		SAFE_RELEASE(m_pSRV);

		HRESULT hr = S_OK;
		ID3D11Resource** pTex = nullptr;
		D3D11_SHADER_RESOURCE_VIEW_DESC SMViewDesc;
		ZeroMemory(&SMViewDesc, sizeof(D3D11_SHADER_RESOURCE_VIEW_DESC));

		// Specifical for depth texture
		if (m_usage & eTextureUsage_Depth)
		{
			_AST(GetTextureType() == eTextureType_2D);

			SMViewDesc.Format					= DXGI_FORMAT_R32_FLOAT;
			SMViewDesc.ViewDimension             = D3D11_SRV_DIMENSION_TEXTURE2D;
			SMViewDesc.Texture2D.MipLevels       = 1;
			SMViewDesc.Texture2D.MostDetailedMip = 0;

			V(g_pRenderSys->GetDevice()->CreateShaderResourceView(m_pTexture2D, &SMViewDesc, &m_pSRV));

			return;
		}	

		switch (GetTextureType())
		{
		case eTextureType_2D:
			{
				D3D11_TEXTURE2D_DESC SMTextureDesc;
				m_pTexture2D->GetDesc(&SMTextureDesc);

				SMViewDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
				SMViewDesc.Texture2D.MipLevels = SMTextureDesc.MipLevels;
				SMViewDesc.Texture2D.MostDetailedMip = 0;
				SMViewDesc.Format = GetTypedFormat(SMTextureDesc.Format);

				pTex = (ID3D11Resource**)&m_pTexture2D;
			}
			break;

		case eTextureType_TextureArray:
			{
				D3D11_TEXTURE2D_DESC SMTextureDesc;
				m_pTexture2D->GetDesc(&SMTextureDesc);

				SMViewDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2DARRAY;
				SMViewDesc.Texture2DArray.MipLevels = SMTextureDesc.MipLevels;
				SMViewDesc.Texture2DArray.MostDetailedMip = 0;
				SMViewDesc.Texture2DArray.FirstArraySlice = 0;
				SMViewDesc.Texture2DArray.ArraySize = SMTextureDesc.ArraySize;
				SMViewDesc.Format = GetTypedFormat(SMTextureDesc.Format);

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
				SMViewDesc.Format = GetTypedFormat(SMTextureDesc.Format);

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
				SMViewDesc.Format = GetTypedFormat(SMTextureDesc.Format);

				pTex = (ID3D11Resource**)&m_pTexture3D;
			}
			break;

		default: _AST(0);
		}

		V(g_pRenderSys->GetDevice()->CreateShaderResourceView(*pTex, &SMViewDesc, &m_pSRV));
	}
	//------------------------------------------------------------------------------------
	void D3D11Texture::CreateRTV()
	{
		HRESULT hr = S_OK;
		D3D11_RENDER_TARGET_VIEW_DESC desc;
		D3D11_TEXTURE2D_DESC SMTextureDesc;

		m_pTexture2D->GetDesc(&SMTextureDesc);

		desc.Format = GetTypedFormat(SMTextureDesc.Format);
		desc.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
		desc.Texture2D.MipSlice = 0;

		V(g_pRenderSys->GetDevice()->CreateRenderTargetView(m_pTexture2D, &desc, &m_pRTV));
	}
	//------------------------------------------------------------------------------------
	void D3D11Texture::Resize( uint32 width, uint32 height )
	{
		_AST(m_usage & eTextureUsage_RenderTarget || m_usage & eTextureUsage_RecreateOnWndResized);

		Destroy();

		m_width = width;
		m_height = height;

		_CreateManual(nullptr);
	}
	//------------------------------------------------------------------------------------
	void D3D11Texture::GenMipMaps()
	{
		_AST(GetUsage() & eTextureUsage_AutoGenMips);

		g_pRenderSys->GetDeviceContext()->GenerateMips(m_pSRV);
	}
	//------------------------------------------------------------------------------------
	ePixelFormat D3D11Texture::ConvertFromDXFormat( DXGI_FORMAT dxformat )
	{
		ePixelFormat format = ePF_Unknown;

		switch(dxformat)
		{
		case DXGI_FORMAT_B8G8R8A8_UNORM:
		case DXGI_FORMAT_B8G8R8X8_UNORM:
		case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
		case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
		case DXGI_FORMAT_R8G8B8A8_UNORM:
			format = ePF_A8R8G8B8; 
			break;
		case DXGI_FORMAT_R16_UNORM:			format = ePF_L16; break;
		case DXGI_FORMAT_R16G16B16A16_FLOAT: format = ePF_A16R16G16B16F; break;
		case DXGI_FORMAT_R8_UNORM:			format = ePF_L8; break;
		case DXGI_FORMAT_R16_FLOAT:			format = ePF_R16F; break;
		case DXGI_FORMAT_R32_FLOAT:			format = ePF_R32F; break;
		case DXGI_FORMAT_R32G32_FLOAT:		format = ePF_G32R32F; break;

		case DXGI_FORMAT_BC1_UNORM:
		case DXGI_FORMAT_BC1_UNORM_SRGB:
			format = ePF_DXT1; 
			break;
		case DXGI_FORMAT_BC2_UNORM: format = ePF_DXT2; break;
		case DXGI_FORMAT_BC3_UNORM:
		case DXGI_FORMAT_BC3_UNORM_SRGB:
			format = ePF_DXT3; 
			break;
		case DXGI_FORMAT_BC4_UNORM: format = ePF_DXT4; break;
		case DXGI_FORMAT_BC5_UNORM: format = ePF_DXT5; break;

		default:
			_AST(0);	// Not support yet...
			break;
		}

		return format;
	}
	//------------------------------------------------------------------------------------
	DXGI_FORMAT D3D11Texture::GetTypedFormat(DXGI_FORMAT format)
	{
		switch (format)
		{
		case DXGI_FORMAT_R32G32_TYPELESS:	return DXGI_FORMAT_R32G32_FLOAT;
		case DXGI_FORMAT_R32_TYPELESS:		return DXGI_FORMAT_R32_FLOAT;
		default:							return format;
		}
	}
	//------------------------------------------------------------------------------------
	DXGI_FORMAT D3D11Texture::ConvertToDXFormat( ePixelFormat format )
	{
		DXGI_FORMAT dxformat = DXGI_FORMAT_UNKNOWN;

		switch(format)
		{
		case ePF_A8R8G8B8:	dxformat = DXGI_FORMAT_R8G8B8A8_UNORM ;break;
		case ePF_L16:		dxformat = DXGI_FORMAT_R16_UNORM; break;
		case ePF_R8G8B8:	dxformat = DXGI_FORMAT_R8G8B8A8_UNORM; break;
		case ePF_A16R16G16B16F: dxformat = DXGI_FORMAT_R16G16B16A16_FLOAT; break;
		case ePF_L8:		dxformat = DXGI_FORMAT_R8_UNORM; break;
		case ePF_R16F:		dxformat = DXGI_FORMAT_R16_FLOAT; break;
		case ePF_R32F:		dxformat = DXGI_FORMAT_R32_FLOAT; break;
		case ePF_G32R32F:	dxformat = DXGI_FORMAT_R32G32_TYPELESS; break;
		case ePF_Depth32:	dxformat = DXGI_FORMAT_R32_TYPELESS; break;

		case ePF_DXT1: dxformat = DXGI_FORMAT_BC1_UNORM; break;
		case ePF_DXT2: dxformat = DXGI_FORMAT_BC2_UNORM; break;
		case ePF_DXT3: dxformat = DXGI_FORMAT_BC3_UNORM; break;
		case ePF_DXT4: dxformat = DXGI_FORMAT_BC4_UNORM; break;
		case ePF_DXT5: dxformat = DXGI_FORMAT_BC5_UNORM; break;

		default:
			_AST(0);
			break;
		}

		return dxformat;
	}
	//------------------------------------------------------------------------------------
	uint32 D3D11Texture::GetBytesPerPixelFromFormat( ePixelFormat format )
	{
		uint32 bytesPerPixel = 0;

		switch(format)
		{
		case ePF_A8R8G8B8:
		case ePF_R32F:		
		case ePF_R8G8B8:	bytesPerPixel = 4; break;
		case ePF_L16:		bytesPerPixel = 2; break;
		case ePF_A16R16G16B16F: bytesPerPixel = 8; break;
		case ePF_L8:		bytesPerPixel = 1; break;
		case ePF_R16F:		bytesPerPixel = 2; break;
		case ePF_G32R32F:	bytesPerPixel = 8; break;
		case ePF_Depth32:	bytesPerPixel = 4; break;

		case ePF_DXT1:
		case ePF_DXT2:
		case ePF_DXT3:
		case ePF_DXT4:
		case ePF_DXT5: bytesPerPixel = 4; break;

		default:
			_AST(0);
			break;
		}

		return bytesPerPixel;
	}
}
