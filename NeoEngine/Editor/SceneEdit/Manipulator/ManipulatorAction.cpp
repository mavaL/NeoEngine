#include "stdafx.h"
#include "ManipulatorAction.h"
#include "Action/ActionBase.h"
#include "Action/ActionNone.h"
#include "Action/ActionTerrainDeform.h"
#include "Action/ActionTerrainSplat.h"
#include "Action/ActionObjectEdit.h"
#include "Action/ActionObjectSelect.h"
#include "Action/ActionPlantGrass.h"


ManipulatorAction::ManipulatorAction()
{
	//注册所有Action
	m_mapAction.insert(std::make_pair(eActionType_None, new ActionNone));
	m_mapAction.insert(std::make_pair(eActionType_TerrainDeform, new ActionTerrainDeform));
	m_mapAction.insert(std::make_pair(eActionType_TerrainSplat, new ActionTerrainSplat));
	m_mapAction.insert(std::make_pair(eActionType_ObjectEdit, new ActionObjectEdit));
	m_mapAction.insert(std::make_pair(eActionType_ObjectSelect, new ActionObjectSelect));
	m_mapAction.insert(std::make_pair(eActionType_PlantGrass, new ActionVegetationGrass));

	//初始化编辑器状态
	m_pActiveAction = m_mapAction[eActionType_None];
}

ManipulatorAction::~ManipulatorAction()
{
	for(auto iter=m_mapAction.begin(); iter!=m_mapAction.end(); ++iter)
		delete iter->second;
	m_mapAction.clear();
}

void ManipulatorAction::SetActiveAction( eActionType type )
{
	//反激活当前状态
	if (m_pActiveAction)
	{
		m_pActiveAction->Leave();
		m_pActiveAction = nullptr;
	}

	auto iter = m_mapAction.find(type);
	assert(iter != m_mapAction.end() && "Invalid ActionType!");

	(iter->second)->Enter();
	m_pActiveAction = iter->second;
}
