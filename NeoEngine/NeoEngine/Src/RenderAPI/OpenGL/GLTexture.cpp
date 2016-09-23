#include "stdafx.h"
#include "OpenGL/GLTexture.h"
#include "LoaderHelpers.h"
#include "dds.h"
#include "opengl/GLAPI.h"
#include "opengl/GLRenderSystem.h"

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
			NativePixelFormat[ePF_A8R8G8B8].Setup(GL_RGBA8, GL_RGBA, GL_UNSIGNED_BYTE, GL_SRGB8_ALPHA8, 0, 1);
			NativePixelFormat[ePF_A16R16G16B16F].Setup(GL_RGBA16F, GL_RGBA, GL_HALF_FLOAT, GL_NONE, 0, 2);
			NativePixelFormat[ePF_Depth32].Setup(GL_DEPTH24_STENCIL8, GL_DEPTH_STENCIL, GL_UNSIGNED_INT_24_8, GL_NONE, 0, 4);
			NativePixelFormat[ePF_R32F].Setup(GL_R32F, GL_RED, GL_FLOAT, GL_NONE, 0, 4);

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
	uint32	GetBytesPerPixel(ePixelFormat format)
	{
		switch (format)
		{
		case ePF_A8R8G8B8:	return 4;
		case ePF_A16R16G16B16F:	return 8;
		case ePF_Depth32:	return 4;
		default: _AST(0);
		}
		return 0;
	}
	//------------------------------------------------------------------------------------
	uint32	CalcTexDataSize(uint32 nWidth, uint32 nHeight, uint32 nMips, ePixelFormat format)
	{
		_AST(nMips >= 1);
		
		uint32 nSize = 0;
		uint32 nBytesPerPixel = GetBytesPerPixel(format);

		for (uint32 i = 0; i < nMips; ++i)
		{
			nSize += nWidth * nHeight * nBytesPerPixel;
			nWidth >>= 1;
			nHeight >>= 1;
		}

		return nSize;
	}
	//------------------------------------------------------------------------------------
	GLTexture::GLTexture(const STRING& filename, eTextureType type, uint32 usage, bool bSRGB)
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

		bool forceSRGB = bSRGB || (header->reserved1[0] != 0);

		DXGI_FORMAT dxformat = GetDXGIFormat(header->ddspf);
		_AST(dxformat != DXGI_FORMAT_UNKNOWN);

		switch (dxformat)
		{
		case DXGI_FORMAT_B8G8R8X8_UNORM:
		case DXGI_FORMAT_B8G8R8A8_UNORM: m_texFormat = ePF_A8R8G8B8; break;
		default: _AST(0);
		}

		_Init(m_width, m_height, bitData, m_texFormat, usage, m_bMipMap);
	}
	//------------------------------------------------------------------------------------
	GLTexture::GLTexture(uint32 width, uint32 height, const void* pTexData, ePixelFormat format, uint32 usage, bool bMipMap)
		: Texture(eTextureType_2D, width, height, 1, format, usage, bMipMap)
	{
		_Init(width, height, pTexData, format, usage, bMipMap);
	}
	//------------------------------------------------------------------------------------
	GLTexture::~GLTexture()
	{
		OpenGLAPI::DeleteTextures(1, &m_id);
	}
	//------------------------------------------------------------------------------------
	void GLTexture::_Init(uint32 width, uint32 height, const void* pTexData, ePixelFormat format, uint32 usage, bool bMipMap)
	{
		const char* pData = (const char*)pTexData;
		const uint32 nMips = bMipMap ? CalcTexMipNum(width, height) : 1;
		const GLPixelFormat& nativeFormat = GetNativePixelFormat(format);

		OpenGLAPI::GenTextures(1, &m_id);
		OpenGLAPI::BindTexture(GL_TEXTURE_2D, m_id);

		OpenGLAPI::TexParameter(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, bMipMap ? GL_LINEAR_MIPMAP_LINEAR : GL_LINEAR);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, nMips - 1);
		OpenGLAPI::TexParameter(GL_TEXTURE_2D, GL_TEXTURE_BASE_LEVEL, 0);

		uint32 w = width;
		uint32 h = height;

		for (uint32 iMips = 0; iMips < nMips; ++iMips)
		{
			w = w < 1 ? 1 : w;
			h = h < 1 ? 1 : h;

			OpenGLAPI::PixelStorage(GL_UNPACK_ALIGNMENT, std::min<int>(w, 8));
			OpenGLAPI::TexImage2D(
				GL_TEXTURE_2D,
				iMips,
				nativeFormat.InternalFormat,
				w, h,
				0,
				nativeFormat.Format,
				nativeFormat.Type,
				pData
				);

			if (pData)
			{
				pData += CalcTexDataSize(w, h, 1, format);
			}

			w >>= 1;
			h >>= 1;
		}
	}
	//------------------------------------------------------------------------------------
	void GLTexture::GenMipMaps()
	{
		_AST(GetTextureType() == eTextureType_2D);
		OpenGLAPI::BindTexture(GL_TEXTURE_2D, m_id);
		OpenGLAPI::GenerateMipmap(GL_TEXTURE_2D);
	}

	//------------------------------------------------------------------------------------
	GLSamplerState::GLSamplerState(const SSamplerDesc& desc)
	{
		OpenGLAPI::GenSamplers(1, &m_id);

		OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_MIN_FILTER, GetGLFilterType(desc.Filter));
		OpenGLAPI::SetSamplerParameter(m_id, GL_TEXTURE_MAG_FILTER, GetGLFilterType(desc.Filter));
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