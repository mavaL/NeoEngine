/********************************************************************
	created:	5:12:2013   9:22
	filename: 	SceneManager.h
	author:		maval
	
	purpose:	≥°æ∞π‹¿Ì∆˜
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
		bool		Init();
		void		ToggleScene();
		Camera*		GetCamera()	{ return m_camera; }
		Scene*		GetCurScene() { return m_pCurScene; }

		void		CreateSky();
		void		CreateTerrain();
		void		CreateWater(float waterHeight = 0.0f);
		void		SetSolidRenderList(const RenderList& lst) { m_renderList_Solid = lst; }
		void		Update();
		void		ClearScene();
		void		RenderPipline(uint32 phaseFlag = eRenderPhase_All, Material* pMaterial = nullptr);
		RenderObject* LoadMesh(const STRING& filename);

		SSAO*		GetSSAO()	{ return m_pSSAO; }
		void		EnableDebugRT(eDebugRT type);

	private:
		void		_InitAllScene();

		std::vector<Scene*>		m_scenes;	
		Scene*					m_pCurScene;

		Camera*			m_camera;
		Terrain*		m_pTerrain;
		Water*			m_pWater;
		Sky*			m_pSky;
		RenderList		m_renderList_Solid;
		MeshLoader*		m_pMeshLoader;

		D3D11RenderSystem* m_pRenderSystem;
		SSAO*			m_pSSAO;
		eDebugRT		m_debugRT;
		RenderObject*	m_pDebugRTMesh;
		Material*		m_pDebugRTMaterial;
	};
}

#endif // SceneManager_h__