/********************************************************************
	created:	2016/09/07 12:00
	filename	ITexture.h
	author:		maval

	purpose:	Texture abstract class.
*********************************************************************/
#ifndef Texture_h__
#define Texture_h__


#include "Prerequiestity.h"
#include "IRefCount.h"
#include "RenderDefine.h"

namespace Neo
{
	class Texture : public IRefCount
	{
	public:
		Texture() {}
		Texture(eTextureType type, uint32 nWidth, uint32 nHeight, uint32 nDepth, ePixelFormat format, uint32 nUsage, bool bMips);
		virtual ~Texture() {}

	public:
		virtual void*		GetDSV() const = 0;
		virtual void*		GetSRV() const = 0;
		virtual void*		GetRTV() const = 0;
		virtual void*		GetRTV(uint32 iSlice) const = 0;
		virtual void		GenMipMaps() = 0;
		virtual void		Resize(uint32 nWidth, uint32 nHeight) = 0;
		virtual void		UpdateRegion(const Rect* rcSrc, const Rect* rcDest, const PixelBox* pData) = 0;
		virtual void*		Lock(eLockMode mode, uint32* oPitch = nullptr) = 0;
		virtual void		Unlock() = 0;

	public:
		static uint32		GetBytesPerPixelFromFormat(ePixelFormat format);
		static uint32		CalcTexDataSize(uint32 nWidth, uint32 nHeight, uint32 nMips, ePixelFormat format);

		eTextureType		GetTextureType() const { return m_texType; }
		uint32				GetWidth() const { return m_width; }
		uint32				GetHeight() const { return m_height; }
		uint32				GetUsage() const { return m_usage; }
		ePixelFormat		GetFormat() const { return m_texFormat; }

	protected:
		eTextureType		m_texType;
		uint32				m_usage;
		uint32				m_width, m_height, m_depth;
		ePixelFormat		m_texFormat;
		bool				m_bMipMap;
	};
}

#endif // Texture_h__

