/********************************************************************
	created:	16:12:2013   9:38
	filename: 	Font.h
	author:		maval
	
	purpose:	Draw text. ÔÝ²»Ö§³Öºº×Ö.
*********************************************************************/
#ifndef Font_h__
#define Font_h__

#include "Prerequiestity.h"

namespace Neo
{
	class Font
	{
	public:
		Font();
		~Font();

	public:
		void			DrawText(const STRING& text, const IPOINT& pos, const SColor& color);

	private:
		void			_InitMesh(const STRING& text, const IPOINT& pos, const SColor& color);
		void			_InitMaterial();

		RenderSystem*	m_pRenderSystem;
		Mesh*			m_pMesh;
		Entity*			m_pEntity;
		Material*		m_pMaterial;
	};
}

#endif // Font_h__
