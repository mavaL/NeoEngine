/********************************************************************
	created:	6:8:2013   22:00
	filename	Scene.h
	author:		maval

	purpose:	äÖÈ¾³¡¾°¼òµ¥·â×°
*********************************************************************/
#ifndef Scene_h__
#define Scene_h__

#include "Prerequiestity.h"
#include "AABB.h"

namespace Neo
{
	class Scene
	{
	public:
		typedef std::function<void(Scene*)>	StrategyFunc;

	public:
		Scene(StrategyFunc& setupFunc, StrategyFunc& enterFunc);
		~Scene();

	public:
		void	Enter();
		void	Update(float fDeltaTime);
		void	RenderOpaque();
		void	RenderEntityList(const EntityList& ents);

		void				AddEntity(Entity* pEntity);
		EntityList&			GetEntityList() { return m_lstEntity; }

		const AABB&			GetSceneAABB() const { return m_sceneAABB; }
		const AABB&			GetSceneShadowCasterAABB() const { return m_sceneShadowCasterAABB; }
		const AABB&			GetSceneShadowReceiverAABB() const { return m_sceneShadowReceiverAABB; }

	private:
		StrategyFunc	m_setupFunc;
		StrategyFunc	m_enterFunc;
		bool			m_bSetup;
		EntityList		m_lstEntity;
		AABB			m_sceneAABB;		// AABB of the whole scene
		AABB			m_sceneShadowCasterAABB;	// AABB of all shadow casters
		AABB			m_sceneShadowReceiverAABB;	// AABB of all shadow receivers
	};
}


#endif // Scene_h__