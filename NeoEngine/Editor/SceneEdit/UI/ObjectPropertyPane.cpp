#include "stdafx.h"
#include "ObjectPropertyPane.h"
#include "Manipulator/ManipulatorScene.h"
#include "XTPCustomPropertyGridItem.h"
#include "Utility.h"


bool PropertyPaneObject::_OnCreate()
{
	CXTPPropertyGridItem* pCategory = m_wndPropertyGrid.AddCategory(L"Entity");
	PROPERTY_REG(pCategory,			, L"Mesh File"			, L""					, propMeshName		);
	PROPERTY_REG(pCategory,	Vec3	, L"Position"			, VEC3(0,0,0)			, propPosition		);
	PROPERTY_REG(pCategory,	Vec4	, L"Orientation"		, VEC4(0,0,0,1)			, propOrientation	);
	PROPERTY_REG(pCategory,	Vec3	, L"Scale"				, VEC3(1,1,1)			, propScale			);
	pCategory->Expand();

	(dynamic_cast<CXTPPropertyGridItemVec3*>(m_mapItem[propPosition]))->SetChildItemID(propPosX, propPosY, propPosZ);
	(dynamic_cast<CXTPPropertyGridItemVec4*>(m_mapItem[propOrientation]))->SetChildItemID(propOrientX, propOrientY, propOrientZ, propOrientW);
	(dynamic_cast<CXTPPropertyGridItemVec3*>(m_mapItem[propScale]))->SetChildItemID(propScaleX, propScaleY, propScaleZ);

	return true;
}

void PropertyPaneObject::_SetProperty( int id )
{
// 	ManipulatorObject& manObject = ManipulatorSystem.GetObject();
// 	Ogre::Entity* ent			= manObject.GetSelection();
// 	Ogre::Vector3 objPos		= ent->getParentSceneNode()->_getDerivedPosition();
// 	Ogre::Quaternion objOrient	= ent->getParentSceneNode()->_getDerivedOrientation();
// 	Ogre::Vector3 objScale		= ent->getParentSceneNode()->_getDerivedScale();
// 	SObjectInfo* objInfo		= manObject.GetObjectInfo(ent);
// 	CXTPPropertyGridItem* pItem = m_mapItem[id];
// 
// 	switch (id)
// 	{
// 	case propPosX: 
// 	case propPosY: 
// 	case propPosZ: pItem = m_mapItem[propPosition];
// 	case propPosition: 
// 		{
// 			CXTPPropertyGridItemVec3* pItemPos = dynamic_cast<CXTPPropertyGridItemVec3*>(pItem);
// 			manObject.SetPosition(ent, GetVec3Value(pItemPos, id != propPosition));
// 		}
// 		break;
// 	case propOrientX:
// 	case propOrientY:
// 	case propOrientZ:
// 	case propOrientW: pItem = m_mapItem[propOrientation];
// 	case propOrientation:
// 		{
// 			CXTPPropertyGridItemVec4* pItemOrient = dynamic_cast<CXTPPropertyGridItemVec4*>(pItem);
// 			manObject.SetOrientation(ent, GetVec4Value(pItemOrient, id != propOrientation));
// 		}
// 		break;
// 	case propScaleX: 
// 	case propScaleY: 
// 	case propScaleZ: pItem = m_mapItem[propScale];
// 	case propScale: 
// 		{
// 			CXTPPropertyGridItemVec3* pItemScale = dynamic_cast<CXTPPropertyGridItemVec3*>(pItem);
// 			manObject.SetScale(ent, GetVec3Value(pItemScale, id != propScale));
// 		}
// 		break;
// 
// 	case propAddToNavmesh:
// 		{
// 			CXTPPropertyGridItemBool* pItemBool = dynamic_cast<CXTPPropertyGridItemBool*>(pItem);
// 			objInfo->m_bAddToNavmesh = pItemBool->GetBool();
// 		}
// 		break;
// 
// 	case propIsBuilding:
// 		{
// 			CXTPPropertyGridItemBool* pItemBool = dynamic_cast<CXTPPropertyGridItemBool*>(pItem);
// 			objInfo->m_bIsBuilding = pItemBool->GetBool();
// 		}
// 		break;
// 
// 	case propBuildingName:
// 		{
// 			std::string name = Utility::UnicodeToEngine(pItem->GetValue());
// 			objInfo->m_buildingName = name;
// 		}
// 		break;
// 
// 	case propIsResource:
// 		{
// 			CXTPPropertyGridItemBool* pItemBool = dynamic_cast<CXTPPropertyGridItemBool*>(pItem);
// 			objInfo->m_bIsResource = pItemBool->GetBool();
// 		}
// 		break;
// 
// 	default: assert(0);
// 	}
}

void PropertyPaneObject::_UpdateProperty( int id )
{
// 	Ogre::Entity* curSel = ManipulatorSystem.GetObject().GetSelection();
// 	if (!curSel)
// 	{
// 		m_mapItem[id]->SetValue(L"");
// 		return;
// 	}
// 
// 	Ogre::SceneNode* pNode = curSel->getParentSceneNode();
// 	std::string strNewValue;
// 	const SObjectInfo* objInfo = ManipulatorSystem.GetObject().GetObjectInfo(curSel);
// 
// 	switch (id)
// 	{
// 	case propMeshName:		strNewValue = curSel->getMesh()->getName(); break;
// 	case propPosX:
// 	case propPosY:
// 	case propPosZ:			id = propPosition;
// 	case propPosition:		strNewValue = Ogre::StringConverter::toString(pNode->_getDerivedPosition()); break;
// 	case propOrientX:
// 	case propOrientY:
// 	case propOrientZ:
// 	case propOrientW:		id = propOrientation;
// 	case propOrientation:	strNewValue = Ogre::StringConverter::toString(pNode->_getDerivedOrientation()); break;
// 	case propScaleX:
// 	case propScaleY:
// 	case propScaleZ:		id = propScale;
// 	case propScale:			strNewValue = Ogre::StringConverter::toString(pNode->_getDerivedScale()); break;
// 	case propAddToNavmesh:	strNewValue = Ogre::StringConverter::toString(objInfo->m_bAddToNavmesh); break;
// 	case propIsBuilding:	strNewValue = Ogre::StringConverter::toString(objInfo->m_bIsBuilding); break;
// 	case propBuildingName:	strNewValue = objInfo->m_buildingName; break;
// 	case propIsResource:	strNewValue = Ogre::StringConverter::toString(objInfo->m_bIsResource); break;
// 	default: assert(0);
// 	}
// 	
// 	std::wstring wcsNewValue = Utility::EngineToUnicode(strNewValue);
// 	m_mapItem[id]->SetValue(wcsNewValue.c_str());
}

void PropertyPaneObject::_EnableMutableProperty( BOOL bEnable )
{
// 	CXTPPropertyGridItemBool* pItem = dynamic_cast<CXTPPropertyGridItemBool*>(m_mapItem[propIsBuilding]);
// 	m_mapItem[propBuildingName]->SetReadOnly(!pItem->GetBool());
}
