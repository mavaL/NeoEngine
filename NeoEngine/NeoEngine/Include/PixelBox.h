/********************************************************************
	created:	2:7:2013   20:13
	filename	PixelBox.h
	author:		maval

	purpose:	PixelBox是包含一个数据块的数据结构
*********************************************************************/
#ifndef PixelBox_h__
#define PixelBox_h__

#include "Prerequiestity.h"
#include "Color.h"

namespace Neo
{
	class PixelBox
	{
	public:
		PixelBox(int width, int height, int bytesPerPixel, void* pData = nullptr, bool bOwnData = true);
		PixelBox(BITMAP* bm, bool bCopyData);
		~PixelBox();

	public:
		void*	GetDataPointer() const	{ return (void*)m_data; }
		int		GetWidth() const	{ return m_width; }
		int		GetHeight() const	{ return m_height; }
		int		GetPitch() const	{ return m_pitch; }
		int		GetBitsPerPixel() const	{ return m_bytesPerPixel * 8; }
		int		GetBytesPerPixel() const	{ return m_bytesPerPixel; }
		void	SetPixelAt(int x, int y, SColor p);
		SColor	GetPixelAt(int x, int y) const;

	private:
		char*		m_data;
		bool		m_ownData;			//数据是否是自己分配的.是则需要自己销毁,否则不用
		int			m_width;
		int			m_height;
		int			m_pitch;
		int			m_bytesPerPixel;
	};
}


#endif // PixelBox_h__