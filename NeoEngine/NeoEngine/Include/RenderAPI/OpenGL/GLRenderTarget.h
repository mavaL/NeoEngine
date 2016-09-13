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
	//--------------------------------------------------------------------------
	class GLRenderTarget : public RenderTarget
	{
	public:
		GLRenderTarget();
		~GLRenderTarget();
	};
}

#endif // GLRenderTarget_h__


