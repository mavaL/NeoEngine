#include "stdafx.h"
#include "opengl/GLRenderTarget.h"
#include "opengl/GLRenderSystem.h"
#include "opengl/GLTexture.h"
#include "opengl/GLAPI.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	GLFBO::GLFBO()
	{
		OpenGLAPI::GenFramebuffer(1, &m_id);
	}
	//------------------------------------------------------------------------------------
	GLFBO::~GLFBO()
	{
		OpenGLAPI::DeleteFramebuffer(1, &m_id);
	}
	//------------------------------------------------------------------------------------
	GLRenderTarget::GLRenderTarget(uint32 nWidth, uint32 nHeight, ePixelFormat format, uint32 nUsage)
		: m_pFBO(nullptr)
		, m_pFBONoDepth(nullptr)
	{
		m_nUsage = nUsage;

		// Setup the viewport
		m_viewport.Width = (float)nWidth;
		m_viewport.Height = (float)nHeight;
		m_viewport.MinDepth = 0.0f;
		m_viewport.MaxDepth = 1.0f;
		m_viewport.TopLeftX = 0;
		m_viewport.TopLeftY = 0;

		if (!(nUsage & eRenderTargetUsage_NoColorTex))
		{
			m_pRenderTexture = new GLTexture(nWidth, nHeight, nullptr, format, eTextureUsage_RenderTarget, nUsage & eTextureUsage_AutoGenMips);
		}

		if (nUsage & eRenderTargetUsage_OwnDepthTex)
		{
			m_pDepthStencil = new GLTexture(nWidth, nHeight, nullptr, ePF_Depth32, eTextureUsage_RenderTarget, false);
		}
	}
	//------------------------------------------------------------------------------------
	GLRenderTarget::~GLRenderTarget()
	{
		SAFE_RELEASE(m_pRenderTexture);
		SAFE_RELEASE(m_pDepthStencil);
		SAFE_DELETE(m_pFBO);
		SAFE_DELETE(m_pFBONoDepth);
	}
	//------------------------------------------------------------------------------------
	void GLRenderTarget::InitFBO(GLRenderTarget** pRTs, uint32 nRT, Texture* pDepthTex)
	{
		_AST(pRTs && nRT >= 1);

		GLFBO* pFBO = nullptr;

		if (pDepthTex)
		{
			_AST(!m_pFBO);
			m_pFBO = new GLFBO;
			pFBO = m_pFBO;
		} 
		else
		{
			_AST(!m_pFBONoDepth);
			m_pFBONoDepth = new GLFBO;
			pFBO = m_pFBONoDepth;
		}


		OpenGLAPI::BindFramebuffer(GL_DRAW_FRAMEBUFFER, pFBO->m_id);

		for (uint32 i = 0; i < nRT; ++i)
		{
			if (pRTs[i]->GetRenderTexture())
			{
				OpenGLAPI::FramebufferTexture(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0 + i, (GLuint)pRTs[i]->GetRenderTexture()->GetRTV(), 0);
			} 
			else
			{
				OpenGLAPI::FramebufferTexture(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0 + i, 0, 0);
			}
		}

		OpenGLAPI::FramebufferTexture(GL_DRAW_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, pDepthTex? (GLuint)pDepthTex->GetRTV() : 0, 0);
		_AST(OpenGLAPI::CheckFrameBuffer(GL_FRAMEBUFFER) == GL_FRAMEBUFFER_COMPLETE);

		const GLenum buffers[] = { GL_COLOR_ATTACHMENT0, GL_COLOR_ATTACHMENT1, GL_COLOR_ATTACHMENT2, GL_COLOR_ATTACHMENT3 };
		OpenGLAPI::DrawBuffers(nRT, buffers);
	}
	//------------------------------------------------------------------------------------
	GLFBO* GLRenderTarget::GetFBO(bool bWithDepthTex)
	{
		return bWithDepthTex ? m_pFBO : m_pFBONoDepth;
	}

}