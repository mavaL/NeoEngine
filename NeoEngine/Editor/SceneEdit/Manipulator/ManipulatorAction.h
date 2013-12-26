/********************************************************************
	created:	24:12:2012   0:25
	filename: 	ManipulatorAction.h
	author:		maval
	
	purpose:	编辑器Action管理器
*********************************************************************/
#ifndef ManipulatorAction_h__
#define ManipulatorAction_h__

#include "Singleton.h"


enum eActionType
{
	eActionType_None,
	eActionType_TerrainDeform,
	eActionType_TerrainSplat,
	eActionType_ObjectEdit,
	eActionType_ObjectSelect,
	eActionType_PlantGrass
};

class ActionBase;

class ManipulatorAction : public Common::CSingleton<ManipulatorAction>
{
	ManipulatorAction();
	virtual ~ManipulatorAction();
	DECLEAR_SINGLETON(ManipulatorAction);

	typedef std::unordered_map<eActionType, ActionBase*>	ActionMap;

public:
	//切换激活状态
	void			SetActiveAction(eActionType type);
	ActionBase*		GetActiveActoin() { return m_pActiveAction; }

private:
	ActionBase*		m_pActiveAction;	//当前激活状态
	ActionMap		m_mapAction;		//所有Action
};


#endif // ManipulatorAction_h__





