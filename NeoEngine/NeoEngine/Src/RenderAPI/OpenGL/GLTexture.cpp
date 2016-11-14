#include "stdafx.h"
#include "OpenGL/GLTexture.h"
#include "LoaderHelpers.h"
#include "dds.h"
#include "opengl/GLAPI.h"
#include "opengl/GLRenderSystem.h"
#include "PixelBox.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	struct GLPixelFormat
	{
		GLenum InternalFormat;
		GLenum Format;
		GLenum Type;
		GLenum SrgbFormat;
		bool bIsCompressed;
		uint32 TypeSize;
		static bool sInitialized;

		GLPixelFormat()
			: InternalFormat(GL_NONE)
			, Format(GL_NONE)
			, Type(GL_NONE)
			, SrgbFormat(GL_NONE)
			, bIsCompressed(false)
			, TypeSize(0)
		{}

		void Setup(GLenum InInternalFormat, GLenum InFormat, GLenum InType, GLenum InSrgbFormat, bool bInIsCompressed, uint32 InTypeSize)
		{
			InternalFormat = InInternalFormat;
			Format = InFormat;
			Type = InType;
			bIsCompressed = bInIsCompressed;
			SrgbFormat = InSrgbFormat;
			TypeSize = InTypeSize;
		}
	};

	bool GLPixelFormat::sInitialized = false;
	//------------------------------------------------------------------------------------
	const GLPixelFormat& GetNativePixelFormat(ePixelFormat Format)
	{
		static GLPixelFormat NativePixelFormat[ePF_Num];
		if (!GLPixelFormat::sInitialized)
		{
			NativePixelFormat[ePF_A8R8G8B8].Setup(GL_RGBA8, GL_BGRA, GL_UNSIGNED_BYTE, GL_SRGB8_ALPHA8, 0, 1);
			NativePixelFormat[ePF_A16R16G16B16F].Setup(GL_RGBA16F, GL_RGBA, GL_HALF_FLOAT, GL_NONE, 0, 2);
			NativePixelFormat[ePF_Depth32].Setup(GL_DEPTH24_STENCIL8, GL_DEPTH_STENCIL, GL_UNSIGNED_INT_24_8, GL_NONE, 0, 4);
			NativePixelFormat[ePF_R32F].Setup(GL_R32F, GL_RED, GL_FLOAT, GL_NONE, 0, 4);
			NativePixelFormat[ePF_DXT1].Setup(GL_COMPRESSED_RGBA_S3TC_DXT1_EXT, GL_BGRA, GL_UNSIGNED_BYTE, GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT, 1, 8);
			NativePixelFormat[ePF_DXT5].Setup(GL_COMPRESSED_RGBA_S3TC_DXT5_EXT, GL_BGRA, GL_UNSIGNED_BYTE, GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT, 1, 16);
			NativePixelFormat[ePF_L8].Setup(GL_ALPHA, GL_ALPHA, GL_UNSIGNED_BYTE, GL_NONE, 0, 1);

			GLPixelFormat::sInitialized = true;
		}

		_AST(NativePixelFormat[Format].InternalFormat != GL_NONE);
		return NativePixelFormat[Format];
	}
	//------------------------------------------------------------------------------------
	uint32	CalcTexMipNum(uint32 nWidth, uint32 nHeight)
	{
		uint32 nMips = 0;
		while (nWidth >= 1 || nHeight >= 1)
		{
			++nMips;
			nWidth >>= 1;
			nHeight >>= 1;
		}
		return nMips;
	}
	//------------------------------------------------------------------------------------
	GLTexture::GLTexture(const STRING& filename, eTextureType type, uint32 usage, bool bSRGB)
		: m_pLockData(nullptr)
		, m_filename(filename)
	{
		HRESULT hr = S_OK;
		DirectX::DDS_HEADER* header = nullptr;
		uint8_t* bitData = nullptr;
		size_t bitSize = 0;
		std::unique_ptr<uint8_t[]> ddsData;

		V(DirectX::LoadTextureDataFromFile(EngineToUnicode(filename).c_str(), ddsData, &header, &bitData, &bitSize));

		m_width = header->width;
		m_height = header->height;
		m_depth = header->depth;
		m_texType = type;
		m_bMipMap = header->mipMapCount > 0;
		m_usage = usage;

		m_bsRGB = bSRGB || (header->reserved1[0] != 0);

		DXGI_FORMAT dxformat = GetDXGIFormat(header->ddspf);
		_AST(dxformat != DXGI_FORMAT_UNKNOWN);

		switch (dxformat)
		{
		case DXGI_FORMAT_B8G8R8X8_UNORM:
		case DXGI_FORMAT_B8G8R8A8_UNORM: m_texFormat = ePF_A8R8G8B8; break;
		case DXGI_FORMAT_BC3_UNORM: m_texFormat = ePF_DXT5; break;
		case DXGI_FORMAT_BC1_UNORM: m_texFormat = ePF_DXT1; break;
		case DXGI_FORMAT_R8_UNORM: m_texFormat = ePF_L8; break;
		default: _AST(0);
		}

		_Init(m_width, m_height, bitData, m_texFormat, usage, header->mipMapCount ? header->mipMapCount : 1);
	}
	//------------------------------------------------------------------------------------
	GLTexture::GLTexture(uint32 width, uint32 height, const void* pTexData, ePixelFormat format, uint32 usage, bool bMipMap)
		: Texture(eTextureType_2D, width, height, 1, format, usage, bMipMap)
		, m_bsRGB(false)
		, m_pLockData(nullptr)
	{
		const uint32 nMips = bMipMap ? CalcTexMipNum(width, height) : 1;
		_Init(width, height, pTexData, format, usage, nMips);
	}
	//------------------------------------------------------------------------------------
	GLTexture::GLTexture(const StringVector& vecTexNames, bool bSRGB)
		: Texture(eTextureType_TextureArray, 0, 0, 0, ePF_Unknown, 0, true)
		, m_bsRGB(bSRGB)
		, m_pLockData(nullptr)
	{
		_AST(!vecTexNames.empty());

		OpenGLAPI::GenTextures(1, &m_id);
		OpenGLAPI::BindTexture(GL_TEXTURE_2D_ARRAY, m_id);

		OpenGLAPI::TexParameter(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_BASE_LEVEL, 0);

		bool bAllocStorage = false;

		for (size_t i = 0; i < vecTexNames.size(); ++i)
		{
			HRESULT hr = S_OK;
			DirectX::DDS_HEADER* header = nullptr;
			uint8_t* bitData = nullptr;
			size_t bitSize = 0;
			std::unique_ptr<uint8_t[]> ddsData;

			V(DirectX::LoadTextureDataFromFile(EngineToUnicode(vecTexNames[i]).c_str(), ddsData, &header, &bitData, &bitSize));

			m_width = header->width;
			m_height = header->height;
			m_depth = vecTexNames.size();
			m_bMipMap = header->mipMapCount > 0;

			const uint32 nMips = header->mipMapCount ? header->mipMapCount : 1;
			OpenGLAPI::TexParameter(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAX_LEVEL, nMips - 1);

			DXGI_FORMAT dxformat = GetDXGIFormat(header->ddspf);
			_AST(dxformat != DXGI_FORMAT_UNKNOWN);

			switch (dxformat)
			{
			case DXGI_FORMAT_B8G8R8X8_UNORM:
			case DXGI_FORMAT_B8G8R8A8_UNORM: m_texFormat = ePF_A8R8G8B8; break;
			case DXGI_FORMAT_BC3_UNORM: m_texFormat = ePF_DXT5; break;
			case DXGI_FORMAT_BC1_UNORM: m_texFormat = ePF_DXT1; break;
			default: _AST(0);
			}

			uint32 w = header->width;
			uint32 h = header->height;
			const GLPixelFormat& nativeFormat = GetNativePixelFormat(m_texFormat);

			if (!bAllocStorage)
			{
				OpenGLAPI::TexStorage3D(GL_TEXTURE_2D_ARRAY, nMips, nativeFormat.InternalFormat, w, h, vecTexNames.size());
				bAllocStorage = true;
			}

			for (uint32 iMips = 0; iMips < nMips; ++iMips)
			{
				w = w < 1 ? 1 : w;
				h = h < 1 ? 1 : h;

				OpenGLAPI::PixelStorage(GL_UNPACK_ALIGNMENT, std::min<int>(w, 8));

				const int nSize = CalcTexDataSize(w, h, 1, m_texFormat);

				if (nativeFormat.bIsCompressed)
				{
					OpenGLAPI::CompressedTexSubImage3D(
						GL_TEXTURE_2D_ARRAY,
						iMips,
						0, 0, i,
						w, h,
						1,
						m_bsRGB ? nativeFormat.SrgbFormat : nativeFormat.InternalFormat,
						nSize,
						bitData
						);
				}
				else
				{
					OpenGLAPI::TexSubImage3D(
						GL_TEXTURE_2D_ARRAY,
						iMips,
						0, 0, i,
						w, h,
						1,
						nativeFormat.Format,
						nativeFormat.Type,
						bitData
						);
				}

				bitData += nSize;
				w >>= 1;
				h >>= 1;
			}
		}

		if (m_usage & eTextureUsage_AutoGenMips)
		{
			OpenGLAPI::GenerateMipmap(GL_TEXTURE_2D_ARRAY);
		}

		OpenGLAPI::BindTexture(GL_TEXTURE_2D_ARRAY, 0);
	}
	//------------------------------------------------------------------------------------
	GLTexture::~GLTexture()
	{
		SAFE_DELETE_ARRAY(m_pLockData);
		OpenGLAPI::DeleteTextures(1, &m_id);
	}
	//------------------------------------------------------------------------------------
	void GLTexture::_Init(uint32 width, uint32 height, const void* pTexData, ePixelFormat format, uint32 usage, uint32 nMips)
	{
		const char* pData = (const char*)pTexData;
		const GLPixelFormat& nativeFormat = GetNativePixelFormat(format);

		GLenum texType = GL_TEXTURE_2D;
		GLenum target = GL_TEXTURE_2D;
		uint32 nFace = 1;
		if (m_texType == eTextureType_CubeMap)
		{
			texType = GL_TEXTURE_CUBE_MAP;
			nFace = 6;
		}

		OpenGLAPI::GenTextures(1, &m_id);
		OpenGLAPI::BindTexture(texType, m_id);

		OpenGLAPI::TexParameter(texType, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
		OpenGLAPI::TexParameter(texType, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
		OpenGLAPI::TexParameter(texType, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);
		OpenGLAPI::TexParameter(texType, GL_TEXTURE_MIN_FILTER, m_bMipMap ? GL_LINEAR_MIPMAP_LINEAR : GL_LINEAR);
		OpenGLAPI::TexParameter(texType, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		OpenGLAPI::TexParameter(texType, GL_TEXTURE_MAX_LEVEL, nMips - 1);
		OpenGLAPI::TexParameter(texType, GL_TEXTURE_BASE_LEVEL, 0);

		for (uint32 iFace = 0; iFace < nFace; ++iFace)
		{
			uint32 w = width;
			uint32 h = height;

			if (m_texType == eTextureType_CubeMap)
			{
				target = GL_TEXTURE_CUBE_MAP_POSITIVE_X + iFace;
			}

			for (uint32 iMips = 0; iMips < nMips; ++iMips)
			{
				w = w < 1 ? 1 : w;
				h = h < 1 ? 1 : h;

				OpenGLAPI::PixelStorage(GL_UNPACK_ALIGNMENT, std::min<int>(w, 8));

				const int nSize = CalcTexDataSize(w, h, 1, format);

				if (nativeFormat.bIsCompressed)
				{
					OpenGLAPI::CompressedImage2D(
						target,
						iMips,
						m_bsRGB ? nativeFormat.SrgbFormat : nativeFormat.InternalFormat,
						w, h,
						0,
						nSize,
						pData
						);
				} 
				else
				{
					OpenGLAPI::TexImage2D(
						target,
						iMips,
						m_bsRGB ? nativeFormat.SrgbFormat : nativeFormat.InternalFormat,
						w, h,
						0,
						nativeFormat.Format,
						nativeFormat.Type,
						pData
						);
				}

				if (pData)
				{
					pData += nSize;
				}

				w >>= 1;
				h >>= 1;
			}
		}

		if (m_usage & eTextureUsage_AutoGenMips)
		{
			OpenGLAPI::GenerateMipmap(GL_TEXTURE_2D);
		}

		OpenGLAPI::BindTexture(texType, 0);
	}
	//------------------------------------------------------------------------------------
	void GLTexture::GenMipMaps()
	{
		_AST(GetTextureType() == eTextureType_2D);
		OpenGLAPI::BindTexture(GL_TEXTURE_2D, m_id);
		OpenGLAPI::GenerateMipmap(GL_TEXTURE_2D);
	}
	//------------------------------------------------------------------------------------
	void GLTexture::UpdateRegion(const Rect* rcSrc, const Rect* rcDest, const PixelBox* pData)
	{
		if (!rcDest && !rcSrc)
		{
			OpenGLAPI::BindTexture(GL_TEXTURE_2D, m_id);

			const GLPixelFormat& nativeFormat = GetNativePixelFormat(m_texFormat);

			OpenGLAPI::TexImage2D(
				GL_TEXTURE_2D,
				0,
				nativeFormat.InternalFormat,
				m_width, m_height,
				0,
				nativeFormat.Format,
				nativeFormat.Type,
				pData->GetDataPointer()
				);
		}
		else
		{
			_AST(0);
		}
	}
	//------------------------------------------------------------------------------------
	void* GLTexture::Lock(eLockMode mode, uint32* oPitch /*= nullptr*/)
	{
		m_lockMode = mode;

		if (oPitch)
		{
			*oPitch = m_width * Texture::GetBytesPerPixelFromFormat(m_texFormat);
		}

		if (mode == eLockMode_ReadOnly)
		{
			HRESULT hr = S_OK;
			DirectX::DDS_HEADER* header = nullptr;
			uint8_t* bitData = nullptr;
			size_t bitSize = 0;

			V(DirectX::LoadTextureDataFromFile(EngineToUnicode(m_filename).c_str(), m_texData, &header, &bitData, &bitSize));

			return bitData;
		} 
		else
		{
			if (!m_pLockData)
			{
				const uint32 nTexSize = Texture::CalcTexDataSize(m_width, m_height, 1, m_texFormat);
				m_pLockData = new char[nTexSize];
				ZeroMemory(m_pLockData, nTexSize);
			}		

			return m_pLockData;
		}
	}
	//------------------------------------------------------------------------------------
	void GLTexture::Unlock()
	{
		if (m_lockMode == eLockMode_ReadOnly)
		{
			m_texData = nullptr;	
		} 
		else
		{
			_AST(m_pLockData && !m_bMipMap);

			OpenGLAPI::BindTexture(GL_TEXTURE_2D, m_id);

			const GLPixelFormat& nativeFormat = GetNativePixelFormat(m_texFormat);

			OpenGLAPI::TexImage2D(
				GL_TEXTURE_2D,
				0,
				nativeFormat.InternalFormat,
				m_width, m_height,
				0,
				nativeFormat.Format,
				nativeFormat.Type,
				m_pLockData
				);
		}
	}
	//------------------------------------------------------------------------------------
	GLSamplerState::GLSamplerState(const SSamplerDesc& desc)
	{
		OpenGLAPI::GenSamplers(1, &m_id);

		GLenum magFilter = GetGLFilterType(desc.Filter);
		OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_MIN_FILTER, GetGLFilterType(desc.Filter));
		OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_MAG_FILTER, magFilter == GL_LINEAR_MIPMAP_LINEAR ? GL_LINEAR : magFilter);
		OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_WRAP_S, GetGLTexAddressMode(desc.AddressU));
		OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_WRAP_T, GetGLTexAddressMode(desc.AddressV));
		OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_WRAP_R, GetGLTexAddressMode(desc.AddressW));
		OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_MIN_LOD, (GLint)desc.MinLOD);

		if (desc.Filter == SF_COMPARISON_MIN_MAG_MIP_POINT)
		{
			// Shadow map hw-pcf
			OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_COMPARE_MODE, GL_COMPARE_REF_TO_TEXTURE);
		}
		else
		{
			OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_COMPARE_MODE, GL_NONE);
		}
	}
	//------------------------------------------------------------------------------------
	GLSamplerState::~GLSamplerState()
	{
		OpenGLAPI::DeleteSamplers(1, &m_id);
	}
	//------------------------------------------------------------------------------------
	void GLSamplerState::Apply(uint32 iStage, bool bVS, bool bGS, bool bTessellation)
	{
		OpenGLAPI::BindSampler(iStage, m_id);
	}

}