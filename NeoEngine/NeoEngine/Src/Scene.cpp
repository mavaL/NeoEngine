#include "stdafx.h"
#include "Scene.h"
#include "Water.h"
#include "Sky.h"
#include "RenderSystem.h"
#include "SceneManager.h"
#include "Terrain/TerrainGroup.h"
#include "Terrain/Terrain.h"
#include "Entity.h"
#include "Material.h"

namespace Neo
{
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
		m_lstEntity.clear();
	}
	//------------------------------------------------------------------------------------
	void Scene::AddEntity( Entity* pEntity )
	{
		m_lstEntity.push_back(pEntity);
	}
	//------------------------------------------------------------------------------------
	void Scene::AddInstancedEntity(const STRING& category, Entity* pEntity)
	{
		m_mapInstanced[category].lstEntity.push_back(pEntity);
	}
	//------------------------------------------------------------------------------------
	void Scene::RenderInstanced()
	{
		for (auto iter = m_mapInstanced.begin(); iter != m_mapInstanced.end(); ++iter)
		{
			SInstanedBatch& ib = iter->second;

			if (ib.lstEntity.size() < MIN_INSTANCE_COUNT)
			{
				RenderEntityList(ib.lstEntity);
				continue;
			}

			ib.lstEntity[0]->RenderInstanced(ib);
		}
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

		// Compute and store the scene aabb
		m_sceneAABB.SetNull();
		m_sceneShadowCasterAABB.SetNull();
		m_sceneShadowReceiverAABB.SetNull();

		for (size_t i=0; i<m_lstEntity.size(); ++i)
		{
			Entity* pEntity = m_lstEntity[i];
			pEntity->UpdateAABB();
			m_sceneAABB.Merge(pEntity->GetWorldAABB());

			if (pEntity->GetCastShadow())
			{
				m_sceneShadowCasterAABB.Merge(pEntity->GetWorldAABB());
			}

			m_sceneShadowReceiverAABB.Merge(pEntity->GetWorldAABB());
		}

		m_enterFunc(this);
	}
	//------------------------------------------------------------------------------------
	void Scene::Update(float fDeltaTime)
	{
		for (size_t i=0; i<m_lstEntity.size(); ++i)
		{
			m_lstEntity[i]->Update(fDeltaTime);
		}
	}
	//----------------------------------------------------------------------------------------
	void Scene::RenderOpaque()
	{
		for (size_t i = 0; i < m_lstEntity.size(); ++i)
		{
			const eShader type = m_lstEntity[i]->GetMaterial()->GetShaderType();

			if (type == eShader_Opaque || type == eShader_Fur)
			{
				m_lstEntity[i]->Render();
			}
		}
	}
	//------------------------------------------------------------------------------------
	void Scene::RenderEntityList(const EntityList& ents)
	{
		for (size_t i = 0; i < ents.size(); ++i)
		{
			ents[i]->Render();
		}
	}

}






