/********************************************************************
	created:	2016/09/07 15:06
	filename	Buffer.h
	author:		maval

	purpose:	Buffer abstract class.
*********************************************************************/
#ifndef Buffer_h__
#define Buffer_h__


#include "Prerequiestity.h"
#include "IRefCount.h"
#include "RenderDefine.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	class Buffer : public IRefCount
	{
	public:
		virtual ~Buffer() {}

	public:
		virtual	void	UpdateBuf(void* pSrc) = 0;
		virtual void*	GetInternel() = 0;
		virtual uint32	GetStride() const = 0;
	};
	//------------------------------------------------------------------------------------
	class ConstantBuffer
	{
	public:
		ConstantBuffer(Buffer* pBuf):m_pBuf(pBuf) {}
		virtual ~ConstantBuffer() { m_pBuf->Release(); }

	public:
		void			UpdateBuf(void* pSrc)
		{
			m_pBuf->UpdateBuf(pSrc);
		}

		virtual	void	Apply(uint32 nSlot, bool bVS = false, bool bPS = false, bool bGS = false, bool bCS = false, bool bTessellate = false) = 0;

	protected:
		Buffer*		m_pBuf;
	};
	//------------------------------------------------------------------------------------
	class IndexBuffer
	{
	public:
		IndexBuffer(Buffer* pBuf) :m_pBuf(pBuf) {}
		virtual ~IndexBuffer() { m_pBuf->Release(); }

	public:
		void			UpdateBuf(void* pSrc)
		{
			m_pBuf->UpdateBuf(pSrc);
		}

		void*			GetInternel()
		{
			return m_pBuf->GetInternel();
		}

	protected:
		Buffer*		m_pBuf;
	};
	//------------------------------------------------------------------------------------
	class VertexBuffer
	{
	public:
		VertexBuffer(Buffer* pBuf) :m_pBuf(pBuf), m_vertType(eVertexType_General) {}
		virtual ~VertexBuffer() { m_pBuf->Release(); }

	public:
		void			UpdateBuf(void* pSrc)
		{
			m_pBuf->UpdateBuf(pSrc);
		}

		void*			GetInternel()
		{
			return m_pBuf->GetInternel();
		}

		uint32			GetStride() const
		{
			return m_pBuf->GetStride();
		}

		Buffer*			m_pBuf;
		eVertexType		m_vertType;

	};
}

#endif // Buffer_h__

