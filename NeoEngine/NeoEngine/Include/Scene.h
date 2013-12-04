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
	Scene(StrategyFunc& setupFunc, StrategyFunc& enterFunc, StrategyFunc renderFunc);
	~Scene();

	Neo::Terrain*	m_pTerrain;
	Neo::Water*		m_pWater;
	Neo::Sky*		m_pSky;

public:
	void	Enter();
	void	AddRenderObject(Neo::RenderObject* obj);
	const Neo::RenderList& GetRenderList() const { return m_renderList; }
	// Render pipeline! 
	void	RenderPipeline();

private:
	StrategyFunc	m_setupFunc;
	StrategyFunc	m_enterFunc;
	StrategyFunc	m_renderFunc;
	bool			m_bSetup;
	Neo::RenderList		m_renderList;	//场景中所有渲染物体
};

#endif // Scene_h__