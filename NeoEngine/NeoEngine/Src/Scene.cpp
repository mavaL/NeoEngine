#include "stdafx.h"
#include "Scene.h"
#include "Water.h"
#include "Sky.h"
#include "D3D11RenderSystem.h"
#include "SceneManager.h"


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
}
//----------------------------------------------------------------------------------------
void Scene::Render()
{
	g_env.pSceneMgr->RenderPipline();
}





