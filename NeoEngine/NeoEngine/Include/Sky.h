/********************************************************************
	created:	4:12:2013   13:23
	filename: 	Sky.h
	author:		maval
	
	purpose:	ÃÏø’‰÷»æ
*********************************************************************/
#ifndef Sky_h__
#define Sky_h__

#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	class Sky
	{
	public:
		Sky();
		~Sky();

	public:
		void		Update();
		void		Render();

	private:
		void		_InitMesh();

	private:
		D3D11RenderSystem*	m_pRenderSystem;
		Mesh*				m_pMesh;
		Entity*				m_pEntity;
	};
}

#endif // Sky_h__
