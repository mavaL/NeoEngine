/********************************************************************
	created:	3:1:2013   12:40
	filename: 	ActionObjectSelect.h
	author:		maval
	
	purpose:	选择场景物体状态
*********************************************************************/

#ifndef ActionObjectSelect_h__
#define ActionObjectSelect_h__


#include "ActionBase.h"


class ActionObjectSelect : public ActionBase
{
public:
	ActionObjectSelect();

public:
	virtual	void	Enter();
	virtual void	Leave();
	virtual void	OnMouseLButtonUp(const SActionParam& param);
	virtual void	OnMouseMove(const SActionParam& param);

private:
	//Ogre::Entity*	m_driftSelection;	//当前鼠标移过的物体
};



#endif // ActionObjectSelect_h__