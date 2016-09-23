/********************************************************************
	created:	2016/09/12 15:15
	filename	GLRenderTarget.h
	author:		maval

	purpose:	GL FBO.
*********************************************************************/
#ifndef GLRenderTarget_h__
#define GLRenderTarget_h__


#include "Prerequiestity.h"
#include "RenderTarget.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	class GLFBO
	{
	public:
		GLFBO();
		~GLFBO();

		GLuint		m_id;
	};
	//--------------------------------------------------------------------------
	class GLRenderTarget : public RenderTarget
	{
	public:
		GLRenderTarget(uint32 nWidth, uint32 nHeight, ePixelFormat foramt, uint32 nUsage);
		~GLRenderTarget();

		void		InitFBO(GLRenderTarget** pRTs, uint32 nRT, Texture* pDepthTex);
		GLFBO*		GetFBO(bool bWithDepthTex);

	private:
		GLFBO*		m_pFBO;
		GLFBO*		m_pFBONoDepth;
	};
}

#endif // GLRenderTarget_h__


