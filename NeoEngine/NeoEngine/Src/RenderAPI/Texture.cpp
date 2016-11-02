#include "stdafx.h"
#include "Texture.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	Texture::Texture(eTextureType type, uint32 nWidth, uint32 nHeight, uint32 nDepth, ePixelFormat format, uint32 nUsage, bool bMips)
		: m_usage(nUsage)
		, m_texType(type)
		, m_width(nWidth)
		, m_height(nHeight)
		, m_bMipMap(bMips)
		, m_texFormat(format)
	{

	}
	//------------------------------------------------------------------------------------
	uint32 Texture::GetBytesPerPixelFromFormat(ePixelFormat format)
	{
		uint32 bytesPerPixel = 0;

		switch (format)
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