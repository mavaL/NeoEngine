#include "stdafx.h"
#include "Operation.h"
#include "Manipulator/ManipulatorScene.h"

void opObjectAddRemove::_ApplyUndoRedo( bool bReverse )
{
// 	ManipulatorObject& manObject = ManipulatorSystem.GetObject();
// 
// 	for (size_t i=0; i<m_ops.size(); ++i)
// 	{
// 		SOpItem& item = m_ops[i];
// 		if (item.bAddOrRemove == bReverse)
// 		{
// 			manObject.RemoveEntity(item.ent, false);
// 		}
// 		else
// 		{
// 			Ogre::Entity* pNew = manObject.AddEntity(item.objInfo.m_meshname, item.objInfo.m_pos, false, item.objInfo.m_rot, item.objInfo.m_scale);
// 			manObject.SetObjectInfo(pNew, item.objInfo);
// 
// 			ManipulatorSystem.GetOperation().RebindEntity(item.ent, pNew);
// 			item.ent = pNew;
// 		}
// 	}
}

void opObjectEdit::_ApplyUndoRedo( bool bReverse )
{
// 	ManipulatorObject& manObject = ManipulatorSystem.GetObject();
// 
// 	for (size_t i=0; i<m_ops.size(); ++i)
// 	{
// 		SOpItem& item = m_ops[i];
// 		Ogre::Any& val = bReverse ? item.oldValue : item.newValue;
// 		switch (item.type)
// 		{
// 		case ManipulatorObject::eEditMode_Move:		manObject.SetPosition(item.pEntity		, Ogre::any_cast<Ogre::Vector3>(val), false); break;
// 		case ManipulatorObject::eEditMode_Rotate:	manObject.SetOrientation(item.pEntity	, Ogre::any_cast<Ogre::Quaternion>(val), false); break;
// 		case ManipulatorObject::eEditMode_Scale:	manObject.SetScale(item.pEntity			, Ogre::any_cast<Ogre::Vector3>(val), false); break;
// 		}
// 	}
}

// void opObjectEdit::RebindEntity( Ogre::Entity* pOld, Ogre::Entity* pNew )
// {
// 	for (size_t i=0; i<m_ops.size(); ++i)
// 	{
// 		SOpItem& item = m_ops[i];
// 		if(item.pEntity == pOld)
// 			item.pEntity = pNew;
// 	}
// }
