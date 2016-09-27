#include "stdafx.h"
#include "opengl/GLBuffer.h"
#include "opengl/GLAPI.h"
#include "RenderDefine.h"
#include "VertexData.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	GLBuffer::GLBuffer(GLenum target, uint32 nStride, uint32 nSize, uint32 nUsage, const void* pData)
		: m_nStride(nStride)
		, m_target(target)
		, m_nSize(nSize)
		, m_nUsage(nUsage)
	{
		OpenGLAPI::GenBuffers(1, &m_id);

		OpenGLAPI::BindBuffer(m_target, m_id);

		GLenum glUsage = GL_STATIC_DRAW;
		if (nUsage & eBufferUsage_Dynamic)
		{
			glUsage = GL_DYNAMIC_DRAW;
		}

		OpenGLAPI::BufferData(m_target, nSize, pData, glUsage);
	}
	//------------------------------------------------------------------------------------
	GLBuffer::~GLBuffer()
	{
		OpenGLAPI::DeleteBuffers(1, &m_id);
	}
	//------------------------------------------------------------------------------------
	void GLBuffer::UpdateBuf(void* pSrc)
	{
		OpenGLAPI::BindBuffer(m_target, m_id);
		void* pDest = OpenGLAPI::MapBufferRange(m_target, 0, m_nSize, GL_MAP_WRITE_BIT /*| GL_MAP_UNSYNCHRONIZED_BIT*/);
		_AST(pDest);

		memcpy(pDest, pSrc, m_nSize);

		OpenGLAPI::UnmapBuffer(m_target);
	}

	//------------------------------------------------------------------------------------
	GLVertexBuffer::GLVertexBuffer(GLBuffer* pBuf, uint32 nSize, uint32 nUsage, const void* pData)
		: VertexBuffer(pBuf)
		, m_vertType(eVertexType_General)
		, m_vao(0)
	{

	}
	//------------------------------------------------------------------------------------
	void GLVertexBuffer::GenVAO(const std::vector<GLVertexBuffer*>& vecVBOs, GLIndexBuffer* pIndexBuf)
	{
		if (m_vao != 0)
		{
			// Already generated.
			return;
		}

		// VAO recording
		OpenGLAPI::GenVertexArrays(1, &m_vao);
		OpenGLAPI::BindVertexArray(m_vao);

		switch (m_vertType)
		{
		case eVertexType_General:
			{
				_AST(vecVBOs.size() == 1);
				OpenGLAPI::BindBuffer(GL_ARRAY_BUFFER, (GLuint)vecVBOs[0]->GetInternel());

				// position
				OpenGLAPI::EnableVertexAttribArray(0);
				OpenGLAPI::VertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(SVertex), (GLvoid*)0);
				// uv
				OpenGLAPI::EnableVertexAttribArray(1);
				OpenGLAPI::VertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(SVertex), (GLvoid*)12);
				// normal
				OpenGLAPI::EnableVertexAttribArray(2);
				OpenGLAPI::VertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(SVertex), (GLvoid*)20);
				// color
				OpenGLAPI::EnableVertexAttribArray(3);
				OpenGLAPI::VertexAttribPointer(3, 4, GL_FLOAT, GL_FALSE, sizeof(SVertex), (GLvoid*)32);
			}
			break;

		case eVertexType_NormalMap:
			{
				_AST(vecVBOs.size() == 2);
				OpenGLAPI::BindBuffer(GL_ARRAY_BUFFER, (GLuint)vecVBOs[0]->GetInternel());

				// position
				OpenGLAPI::EnableVertexAttribArray(0);
				OpenGLAPI::VertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(SVertex), (GLvoid*)0);
				// uv
				OpenGLAPI::EnableVertexAttribArray(1);
				OpenGLAPI::VertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(SVertex), (GLvoid*)12);
				// normal
				OpenGLAPI::EnableVertexAttribArray(2);
				OpenGLAPI::VertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(SVertex), (GLvoid*)20);
				
				// tangent
				OpenGLAPI::BindBuffer(GL_ARRAY_BUFFER, (GLuint)vecVBOs[1]->GetInternel());
				OpenGLAPI::EnableVertexAttribArray(3);
				OpenGLAPI::VertexAttribPointer(3, 4, GL_FLOAT, GL_FALSE, sizeof(STangentData), (GLvoid*)0);
				// binormal
				OpenGLAPI::EnableVertexAttribArray(4);
				OpenGLAPI::VertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, sizeof(STangentData), (GLvoid*)16);
			}
			break;

		default:
			_AST(0);
			break;
		}

		if (pIndexBuf)
		{
			OpenGLAPI::BindBuffer(GL_ELEMENT_ARRAY_BUFFER, (GLuint)pIndexBuf->GetInternel());
		}

		OpenGLAPI::BindVertexArray(0);
	}
	//------------------------------------------------------------------------------------
	void GLVertexBuffer::ActivateVAO()
	{
		OpenGLAPI::BindVertexArray(m_vao);
	}
	//------------------------------------------------------------------------------------
	GLIndexBuffer::GLIndexBuffer(GLBuffer* pBuf, uint32 nSize, uint32 nUsage, const void* pData)
		: IndexBuffer(pBuf)
	{

	}
	//------------------------------------------------------------------------------------
	GLConstantBuffer::GLConstantBuffer(GLBuffer* pBuf, uint32 nSlot)
		: ConstantBuffer(pBuf)
	{
		OpenGLAPI::BindBufferBase(GL_UNIFORM_BUFFER, nSlot, pBuf->m_id);
	}
	//------------------------------------------------------------------------------------
	GLConstantBuffer::~GLConstantBuffer()
	{

	}
}