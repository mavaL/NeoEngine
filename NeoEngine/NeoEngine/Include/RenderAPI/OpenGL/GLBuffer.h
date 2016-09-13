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

	};
	//------------------------------------------------------------------------------------
	class GLConstantBuffer : public ConstantBuffer, public GLBuffer
	{
	public:
		GLConstantBuffer();
		~GLConstantBuffer();

	private:

	};
}

#endif // GLBuffer_h__


