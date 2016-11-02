/********************************************************************
	created:	2016/09/07 16:20
	filename	GLBuffer.h
	author:		maval

	purpose:	OpenGL buffer related.
*********************************************************************/
#ifndef GLBuffer_h__
#define GLBuffer_h__


#include "Prerequiestity.h"
#include "Buffer.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	class GLBuffer : public Buffer
	{
	public:
		GLBuffer(GLenum target, uint32 nStride, uint32 nSize, uint32 nUsage, const void* pData = nullptr);
		~GLBuffer();

	public:
		virtual void*	Lock();
		virtual void	Unlock();
		virtual	void	UpdateBuf(void* pSrc);
		virtual void*	GetInternel() { return (void*)m_id; }
		virtual uint32	GetStride() const { return m_nStride; }

		GLuint			m_id;
		GLenum			m_target;
		uint32			m_nStride;
		uint32			m_nSize;
		uint32			m_nUsage;
	};
	//------------------------------------------------------------------------------------
	class GLConstantBuffer : public ConstantBuffer
	{
	public:
		GLConstantBuffer(GLBuffer* pBuf, uint32 nSlot);
		~GLConstantBuffer();

	public:
		virtual	void	Apply(uint32 nSlot, bool bVS = false, bool bPS = false, bool bGS = false, bool bCS = false, bool bTessellate = false) {}
	};
	//------------------------------------------------------------------------------------
	class GLIndexBuffer : public IndexBuffer
	{
	public:
		GLIndexBuffer(GLBuffer* pBuf, uint32 nSize, uint32 nUsage, const void* pData = nullptr);
		~GLIndexBuffer() {}
	};
	//------------------------------------------------------------------------------------
	class GLVertexBuffer : public VertexBuffer
	{
	public:
		GLVertexBuffer(GLBuffer* pBuf, uint32 nSize, uint32 nUsage, const void* pData = nullptr);
		~GLVertexBuffer() {}

	public:
		void			GenVAO(const std::vector<GLVertexBuffer*>& vecVBOs, GLIndexBuffer* pIndexBuf);
		void			ActivateVAO();

		GLuint			m_vao;
	};
}

#endif // GLBuffer_h__


