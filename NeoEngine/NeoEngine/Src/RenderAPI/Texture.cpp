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

}