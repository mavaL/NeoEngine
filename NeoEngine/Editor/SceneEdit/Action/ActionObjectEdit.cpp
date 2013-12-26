#include "stdafx.h"
#include "ActionObjectEdit.h"
#include "EditorDefine.h"
#include "Manipulator/ManipulatorScene.h"
#include "Gizmo.h"


ActionObjectEdit::ActionObjectEdit()
:m_bLBDown(false)
,m_bChanged(false)
{

}
void ActionObjectEdit::Enter()
{
// 	ManipulatorObject& manObject = ManipulatorSystem.GetObject();
// 	ManipulatorObject::eEditMode mode = manObject.GetCurEditMode();
// 
// 	//显示gizmo
// 	manObject.ShowEntityGizmo(manObject.GetSelection(), true, mode);
// 	//显示包围盒
// 	manObject.ShowEntityGizmo(manObject.GetSelection(), true, ManipulatorObject::eEditMode_Select);
}

void ActionObjectEdit::Leave()
{
// 	ManipulatorObject& manObject = ManipulatorSystem.GetObject();
// 	//隐藏gizmo
// 	manObject.ShowEntityGizmo(manObject.GetSelection(), false, ManipulatorObject::eEditMode_Move);
// 	manObject.ShowEntityGizmo(manObject.GetSelection(), false, ManipulatorObject::eEditMode_Rotate);
// 	//隐藏包围盒
// 	manObject.ShowEntityGizmo(manObject.GetSelection(), false, ManipulatorObject::eEditMode_Select);
}

void ActionObjectEdit::OnMouseLButtonDown( const SActionParam& param )
{
// 	m_bLBDown = true;
// 	ManipulatorObject& manObject = ManipulatorSystem.GetObject();
// 	GizmoAxis* pGizmo = manObject.GetGizmoAxis();
// 	ManipulatorObject::eEditMode mode = manObject.GetCurEditMode();
// 	Ogre::Entity* ent = manObject.GetSelection();
// 
// 	if (pGizmo->IsActive())
// 	{
// 		assert(pGizmo->GetActiveAxis() != GizmoAxis::eAxis_None);
// 		const Ogre::Ray ray = RenderSys.m_pMainCamera->getCameraToViewportRay(param.m_ptRelative.x, param.m_ptRelative.y);
// 		if(mode == ManipulatorObject::eEditMode_Move)
// 			m_vecAdjust = _ComputeTranslateVector(ray, pGizmo->GetActiveAxis(), false);
// 		else if(mode == ManipulatorObject::eEditMode_Scale)
// 			m_vecAdjust = _ComputeTranslateVector(ray, pGizmo->GetActiveAxis(), true);
// 	}
// 
// 	//为撤销操作做准备
// 	m_bChanged = false;
// 	switch (mode)
// 	{
// 	case ManipulatorObject::eEditMode_Move: m_oldValue = Ogre::Any(ent->getParentSceneNode()->_getDerivedPosition()); break;
// 	case ManipulatorObject::eEditMode_Rotate: m_oldValue = Ogre::Any(ent->getParentSceneNode()->_getDerivedOrientation()); break;
// 	case ManipulatorObject::eEditMode_Scale: m_oldValue = Ogre::Any(ent->getParentSceneNode()->_getDerivedScale()); break;
// 	}
}

void ActionObjectEdit::OnMouseLButtonUp( const SActionParam& param )
{
// 	ManipulatorObject& manObject = ManipulatorSystem.GetObject();
// 	Ogre::Entity* curSel = manObject.GetSelection();
// 	const ManipulatorObject::eEditMode mode = manObject.GetCurEditMode();
// 	m_bLBDown = false;
// 
// 	if (m_bChanged)
// 	{
// 		Ogre::Any newValue;
// 		switch (mode)
// 		{
// 		case ManipulatorObject::eEditMode_Move: newValue = Ogre::Any(curSel->getParentSceneNode()->_getDerivedPosition()); break;
// 		case ManipulatorObject::eEditMode_Rotate: newValue = Ogre::Any(curSel->getParentSceneNode()->_getDerivedOrientation()); break;
// 		case ManipulatorObject::eEditMode_Scale: newValue = Ogre::Any(curSel->getParentSceneNode()->_getDerivedScale()); break;
// 		}
// 
// 		//可撤销操作
// 		manObject.CommitEditOperation(curSel, mode, m_oldValue, newValue);
// 	}
}

void ActionObjectEdit::OnMouseMove( const SActionParam& param )
{
// 	ManipulatorObject& manObject = ManipulatorSystem.GetObject();
// 	GizmoAxis* pGizmo = manObject.GetGizmoAxis();
// 	const Ogre::Ray ray = RenderSys.m_pMainCamera->getCameraToViewportRay(param.m_ptRelative.x, param.m_ptRelative.y);
// 	ManipulatorObject::eEditMode mode = manObject.GetCurEditMode();
// 	Ogre::Entity* curSel = manObject.GetSelection();
// 
// 	if (pGizmo->IsActive() && m_bLBDown)
// 	{
// 		Ogre::Vector3 oldPos = curSel->getParentSceneNode()->_getDerivedPosition();
// 
// 		if(mode == ManipulatorObject::eEditMode_Move)
// 		{
// 			//计算鼠标偏移量
// 			Ogre::Vector3 delta = _ComputeTranslateVector(ray, pGizmo->GetActiveAxis(), false);
// 			//移动
// 			Ogre::Vector3 newPos = delta - m_vecAdjust + oldPos;
// 			manObject.SetPosition(curSel, newPos, false);
// 		}
// 		else if (mode == ManipulatorObject::eEditMode_Rotate)
// 		{
// 			//旋转
// 			manObject.Rotate(curSel, param.m_ptDeltaRel.x * 15.0f, false);
// 		}
// 		else if (mode == ManipulatorObject::eEditMode_Scale)
// 		{
// 			//缩放
// 			Ogre::Vector3 scale(1, 1, 1); 
// 			float axisScale = param.m_ptDeltaRel.x > 0 ? 1.1f : 0.9f;
// 
// 			switch (pGizmo->GetActiveAxis())
// 			{
// 			case GizmoAxis::eAxis_X: scale.x = axisScale; break;
// 			case GizmoAxis::eAxis_Y: scale.y = axisScale; break;
// 			case GizmoAxis::eAxis_Z: scale.z = axisScale; break;
// 			}
// 			manObject.Scale(curSel, scale, false);
// 		}
// 		m_bChanged = true;
// 	}
// 	else
// 	{
// 		pGizmo->Update(ray, mode);
// 	}
}

//const Ogre::Vector3 ActionObjectEdit::_ComputeTranslateVector(const Ogre::Ray& ray, GizmoAxis::eAxis axis, bool bAxisLocal)
//{
//	Entity* pSelEnt = ManipulatorSystem.GetObject().GetSelection();
//	Quaternion qOrient = pSelEnt->getParentSceneNode()->_getDerivedOrientation();
//	Vector3 oldPos = pSelEnt->getParentSceneNode()->_getDerivedPosition();
//
//	Plane planeX(qOrient.xAxis(), oldPos);
//	Plane planeY(qOrient.yAxis(), oldPos);
//	Plane planeZ(qOrient.zAxis(), oldPos);
//
//	float vX = planeX.projectVector(ray.getDirection()).length();
//	float vY = planeY.projectVector(ray.getDirection()).length();
//	float vZ = planeZ.projectVector(ray.getDirection()).length();
//
//	Vector3 vAxis = Vector3::ZERO;
//	switch (axis)
//	{
//	case GizmoAxis::eAxis_X: { vX = 10000.0f; vAxis = bAxisLocal ? Vector3::UNIT_X : qOrient.xAxis(); } break;
//	case GizmoAxis::eAxis_Y: { vY = 10000.0f; vAxis = bAxisLocal ? Vector3::UNIT_Y : qOrient.yAxis(); } break;
//	case GizmoAxis::eAxis_Z: { vZ = 10000.0f; vAxis = bAxisLocal ? Vector3::UNIT_Z : qOrient.zAxis(); } break;
//	}
//
//	Plane planeToUse;
//	if (vX < vY && vX < vZ)
//	{
//		planeToUse = planeX;
//	}
//	else
//	{
//		if (vY < vX && vY < vZ )
//			planeToUse = planeY;
//		else
//			planeToUse = planeZ;
//	}
//
//	std::pair<bool,Ogre::Real> result;
//	result = ray.intersects(planeToUse);
//	if (result.first)
//	{
//		Vector3 Proj = ray.getPoint(result.second) - oldPos;
//		vAxis.normalise();
//		Vector3 deltaPos = vAxis.dotProduct(Proj) * vAxis;
//
//		return deltaPos;
//	}
//
//	return Vector3::ZERO;
//}




