/********************************************************************
	created:	24:12:2012   0:15
	filename: 	ActionTerrainDeform.h
	author:		maval
	
	purpose:	地形高度变形编辑状态
*********************************************************************/

#ifndef ActionTerrainDeform_h__
#define ActionTerrainDeform_h__

#include "ActionBase.h"


class ActionTerrainDeform : public ActionBase
{
public:
	ActionTerrainDeform() {}
	~ActionTerrainDeform() {}

public:
	virtual	void	Enter();
	virtual void	Leave();
	virtual	void	OnMouseLButtonDown(const SActionParam& param);
	virtual void	OnMouseLButtonUp(const SActionParam& param);
	virtual void	OnMouseMove(const SActionParam& param);
	virtual void	OnFrameMove(float dt);

private:
	bool			m_bInDeform;
};



#endif // ActionTerrainDeform_h__