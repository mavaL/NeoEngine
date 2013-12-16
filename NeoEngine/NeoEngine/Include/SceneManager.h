/********************************************************************
	created:	5:12:2013   9:22
	filename: 	SceneManager.h
	author:		maval
	
	purpose:	³¡¾°¹ÜÀíÆ÷
*********************************************************************/
#ifndef SceneManager_h__
#define SceneManager_h__

#include "Prerequiestity.h"
#include "RenderObject.h"

namespace Neo
{
	class SceneManager
	{
	public:
		SceneManager();
		~SceneManager();

	public:
		void		CreateSky();
		void		CreateTerrain();
		void		CreateWater(float waterHeight = 0.0f);
		void		SetSolidRenderList(const RenderList& lst) { m_renderList_Solid = lst; }
		void		Update();
		void		ClearScene();
		void		RenderPipline(uint32 phaseFlag = eRenderPhase_All, Material* pMaterial = nullptr);

	private:
		Terrain*	m_pTerrain;
		Water*		m_pWater;
		Sky*		m_pSky;
		RenderList	m_renderList_Solid;
	};
}

#endif // SceneManager_h__