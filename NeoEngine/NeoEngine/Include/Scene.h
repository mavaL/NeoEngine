/********************************************************************
	created:	6:8:2013   22:00
	filename	Scene.h
	author:		maval

	purpose:	��Ⱦ�����򵥷�װ
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
	void	AddRenderObject(Neo::RenderObject* obj);
	Neo::RenderList&	GetRenderList() { return m_renderList; }
	void	Render();

private:
	StrategyFunc	m_setupFunc;
	StrategyFunc	m_enterFunc;
	bool			m_bSetup;
	Neo::RenderList		m_renderList;	//������������Ⱦ����
};

#endif // Scene_h__