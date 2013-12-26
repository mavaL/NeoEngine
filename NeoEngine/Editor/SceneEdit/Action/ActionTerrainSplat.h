/********************************************************************
	created:	25:12:2012   1:32
	filename: 	ActionTerrainSplat.h
	author:		maval
	
	purpose:	地形纹理混合状态
*********************************************************************/

#ifndef ActionTerrainSplat_h__
#define ActionTerrainSplat_h__


#include "ActionBase.h"


class ActionTerrainSplat : public ActionBase
{
public:
	ActionTerrainSplat() {}
	~ActionTerrainSplat() {}

public:
	virtual	void	Enter();
	virtual void	Leave();
	virtual	void	OnMouseLButtonDown(const SActionParam& param);
	virtual void	OnMouseLButtonUp(const SActionParam& param);
	virtual void	OnMouseMove(const SActionParam& param);
	virtual void	OnFrameMove(float dt);

private:
	bool			m_bInSplat;
};



#endif // ActionTerrainSplat_h__