#include "stdafx.h"
#include "Scene.h"
#include "Water.h"
#include "Sky.h"
#include "D3D11RenderSystem.h"
#include "SceneManager.h"
#include "Terrain.h"


//------------------------------------------------------------------------------------
Scene::Scene( StrategyFunc& setupFunc, StrategyFunc& enterFunc )
:m_bSetup(false)
,m_setupFunc(setupFunc)
,m_enterFunc(enterFunc)
{

}
//------------------------------------------------------------------------------------
Scene::~Scene()
{
	std::for_each(m_renderList.begin(), m_renderList.end(), std::default_delete<Neo::RenderObject>());
	m_renderList.clear();
}
//------------------------------------------------------------------------------------
void Scene::AddRenderObject( Neo::RenderObject* obj )
{
	m_renderList.push_back(obj);
}
//------------------------------------------------------------------------------------
void Scene::Enter()
{
	g_env.pSceneMgr->ClearScene();

	if(!m_bSetup)
	{
		m_setupFunc(this);
		m_bSetup = true;
	}
	g_env.pSceneMgr->SetSolidRenderList(m_renderList);

	m_enterFunc(this);

	// Compute and store the scene aabb
	m_sceneAABB.SetNull();

	Neo::Terrain* pTerrain = g_env.pSceneMgr->GetTerrain();
	if (pTerrain)
	{
		m_sceneAABB.Merge(pTerrain->GetTerrainAABB());
	}

	for (size_t i=0; i<m_renderList.size(); ++i)
	{
		Neo::RenderObject* obj = m_renderList[i];
		obj->OnFrameMove();		// Manually update its world aabb
		m_sceneAABB.Merge(obj->GetWorldAABB());
	}
}
//----------------------------------------------------------------------------------------
void Scene::Render()
{
	g_env.pSceneMgr->Render();
}





