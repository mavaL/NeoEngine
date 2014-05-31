/********************************************************************
	created:	6:8:2013   22:00
	filename	Scene.h
	author:		maval

	purpose:	渲染场景简单封装
*********************************************************************/
#ifndef Scene_h__
#define Scene_h__

#include "Prerequiestity.h"
#include "RenderObject.h"

class Scene
{
public:
	typedef std::function<void(Scene*)>	StrategyFunc;

public:
	Scene(StrategyFunc& setupFunc, StrategyFunc& enterFunc);
	~Scene();

public:
	void	Enter();
	void	Render();

	void				AddRenderObject(Neo::RenderObject* obj);
	Neo::RenderList&	GetRenderList() { return m_renderList; }
	const AABB&			GetSceneAABB() const { return m_sceneAABB; }

private:
	StrategyFunc	m_setupFunc;
	StrategyFunc	m_enterFunc;
	bool			m_bSetup;
	Neo::RenderList		m_renderList;	//场景中所有渲染物体
	AABB			m_sceneAABB;		// AABB of the whole scene
};

#endif // Scene_h__