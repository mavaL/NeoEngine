/********************************************************************
	created:	1:1:2013   21:46
	filename: 	ActionObjectEdit.h
	author:		maval
	
	purpose:	物体编辑状态:移动,旋转,缩放
*********************************************************************/
#ifndef ActionObjectEdit_h__
#define ActionObjectEdit_h__

#include "ActionBase.h"
#include "Gizmo.h"

class ActionObjectEdit : public ActionBase
{
public:
	ActionObjectEdit();
	~ActionObjectEdit() {}

public:
	virtual	void	Enter();
	virtual void	Leave();
	virtual	void	OnMouseLButtonDown(const SActionParam& param);
	virtual void	OnMouseLButtonUp(const SActionParam& param);
	virtual void	OnMouseMove(const SActionParam& param);

private:
	bool			m_bLBDown;
	VEC3			m_vecAdjust;
	bool			m_bChanged;
	//Ogre::Any		m_oldValue;

	//抽取自Ogitor
	//const Ogre::Vector3	_ComputeTranslateVector(const Ogre::Ray& ray, GizmoAxis::eAxis axis, bool bAxisLocal);
};



#endif // ActionObjectEdit_h__