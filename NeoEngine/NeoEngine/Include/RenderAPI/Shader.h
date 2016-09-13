/********************************************************************
	created:	2016/09/09 18:25
	filename	Shader.h
	author:		maval

	purpose:	Shader encapsulation class.
*********************************************************************/
#ifndef Shader_h__
#define Shader_h__


#include "Prerequiestity.h"
#include "IRefCount.h"

namespace Neo
{
	class Shader : public IRefCount
	{
	public:
		virtual ~Shader() {}

	public:
		virtual	void	Activate() = 0;
		virtual	void	DeActivate() = 0;
	};
}

#endif // Shader_h__

