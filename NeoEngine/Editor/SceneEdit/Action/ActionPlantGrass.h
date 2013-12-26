/********************************************************************
	created:	5:10:2013   18:58
	filename	ActionPlantGrass.h
	author:		maval

	purpose:	�ֲݱ༭ģʽ
*********************************************************************/
#ifndef ActionPlantGrass_h__
#define ActionPlantGrass_h__

#include "ActionBase.h"


class ActionVegetationGrass : public ActionBase
{
public:
	ActionVegetationGrass() {}
	~ActionVegetationGrass() {}

public:
	virtual	void	Enter();
	virtual void	Leave();
	virtual	void	OnMouseLButtonDown(const SActionParam& param);
};



#endif // ActionPlantGrass_h__