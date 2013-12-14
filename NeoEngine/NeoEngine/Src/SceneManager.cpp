#include "stdafx.h"
#include "SceneManager.h"
#include "Water.h"
#include "Sky.h"
#include "Terrain.h"
#include "RenderObject.h"
#include "Scene.h"


namespace Neo
{

	SceneManager::SceneManager()
	:m_pTerrain(nullptr)
	,m_pWater(nullptr)
	,m_pSky(nullptr)
	{

	}
	//-------------------------------------------------------------------------------
	SceneManager::~SceneManager()
	{
		ClearScene();
	}
	//-------------------------------------------------------------------------------
	void SceneManager::CreateSky()
	{
		m_pSky = new Sky;
	}
	//-------------------------------------------------------------------------------
	void SceneManager::CreateTerrain()
	{
		m_pTerrain = new Terrain(GetResPath("terrain.raw"));
	}
	//-------------------------------------------------------------------------------
	void SceneManager::CreateWater()
	{
		m_pWater = new Water;
	}
	//-------------------------------------------------------------------------------
	void SceneManager::RenderPipline(uint32 phaseFlag, Material* pMaterial)
	{
		/// Render sky
		if (m_pSky && phaseFlag&eRenderPhase_Sky)
		{
			m_pSky->Render();
		}

		/// Render terrain
		if (m_pTerrain && phaseFlag&eRenderPhase_Terrain)
		{
			m_pTerrain->Render();
		}

		/// Render solid
		if (phaseFlag & eRenderPhase_Solid)
		{
			for (size_t i=0; i<m_renderList_Solid.size(); ++i)
			{
				m_renderList_Solid[i]->Render(pMaterial);
			}
		}

		/// Render water
		if (m_pWater && phaseFlag&eRenderPhase_Water)
		{
			m_pWater->Render();
		}
	}
	//-------------------------------------------------------------------------------
	void SceneManager::Update()
	{
		if (m_pWater)
			m_pWater->Update();

		if (m_pSky)
			m_pSky->Update();

		for (size_t i=0; i<m_renderList_Solid.size(); ++i)
		{
			m_renderList_Solid[i]->OnFrameMove();
		}
	}
	//------------------------------------------------------------------------------------
	void SceneManager::ClearScene()
	{
		SAFE_DELETE(m_pTerrain);
		SAFE_DELETE(m_pWater);
		SAFE_DELETE(m_pSky);

		m_renderList_Solid.clear();
	}
}