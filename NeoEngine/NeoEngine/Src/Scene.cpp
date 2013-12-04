#include "stdafx.h"
#include "Scene.h"
#include "Water.h"
#include "Sky.h"
#include "D3D11RenderSystem.h"


//------------------------------------------------------------------------------------
Scene::Scene( StrategyFunc& setupFunc, StrategyFunc& enterFunc, StrategyFunc renderFunc )
:m_bSetup(false)
,m_setupFunc(setupFunc)
,m_enterFunc(enterFunc)
,m_renderFunc(renderFunc)
,m_pTerrain(nullptr)
,m_pWater(nullptr)
,m_pSky(nullptr)
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
	if(!m_bSetup)
	{
		m_setupFunc(this);
		m_bSetup = true;
	}
	m_enterFunc(this);
}
//----------------------------------------------------------------------------------------
void Scene::RenderPipeline()
{
	if (m_pWater)
	{
		m_pWater->Update();
	}

	if (m_pSky)
	{
		m_pSky->Update();
	}

	for (size_t i=0; i<m_renderList.size(); ++i)
	{
		Neo::RenderObject* obj = m_renderList[i];
		obj->OnFrameMove();
	}
	

	if (m_renderFunc)
	{
		m_renderFunc(this);
	} 
	else
	{
		/// Render sky
		m_pSky->Render();

		/// Render terrain

		/// Render solid
		for (size_t i=0; i<m_renderList.size(); ++i)
		{
			Neo::RenderObject* obj = m_renderList[i];
			obj->Render();
		}
		
		/// Render water
		m_pWater->Render();
	}
}





