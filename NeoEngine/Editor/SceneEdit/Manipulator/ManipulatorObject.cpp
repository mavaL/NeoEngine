#include "stdafx.h"
#include "ManipulatorObject.h"
#include "../EditorDefine.h"
#include "ManipulatorScene.h"
#include "ManipulatorAction.h"
#include "Gizmo.h"
#include "Utility.h"
#include "Operation/Operation.h"


ManipulatorObject::ManipulatorObject()
:m_curEditMode(eEditMode_None)
//,m_pSelectEntity(nullptr)
{
	//默认查询掩码
//	Ogre::MovableObject::setDefaultQueryFlags(eQueryMask_Default);

	ManipulatorScene::GetSingleton().AddCallback(this);
	m_pGizmoAixs = new GizmoAxis;
// 	m_pRaySceneQuery = RenderSys.m_pSceneMgr->createRayQuery(Ogre::Ray());
// 	m_pAABBSceneQuery = RenderSys.m_pSceneMgr->createAABBQuery(Ogre::AxisAlignedBox());
// 	m_pRaySceneQuery->setSortByDistance(true);
}

ManipulatorObject::~ManipulatorObject()
{
// 	RenderSys.m_pSceneMgr->destroyQuery(m_pRaySceneQuery);
// 	RenderSys.m_pSceneMgr->destroyQuery(m_pAABBSceneQuery);
// 	m_pRaySceneQuery = nullptr;
// 	m_pAABBSceneQuery = nullptr;
 	SAFE_DELETE(m_pGizmoAixs);
// 	ManipulatorScene::GetSingleton().RemoveCallback(this);
}

void ManipulatorObject::OnGizmoNodeReset()
{
	m_pGizmoAixs->OnGizmoNodeReset();
}

void ManipulatorObject::OnSceneClose()
{
// 	m_curEditMode = eEditMode_None; 
// 	ClearSelection();
// 
// 	for(auto iter=m_objects.begin(); iter!=m_objects.end(); ++iter)
// 	{
// 		SObjectInfo* obj = iter->second;
// 		delete obj;
// 	}
// 	m_objects.clear();
}

void ManipulatorObject::OnSceneNew()
{
	m_pGizmoAixs->Reset();
}

void ManipulatorObject::OnSceneOpen()
{
	m_pGizmoAixs->Reset();
}

// void ManipulatorObject::AddEntity( const STRING& meshname, const VEC3& worldPos, bool bOp, const MAT44& orient, const VEC3& scale )
// {
// 	static int counter = 0;
// 
// 	char tmp[32];
// 	_itoa_s(counter++, tmp, sizeof(tmp), 10);
// 
// 	STRING entName("Entity_");
// 	entName += tmp;
// 
// 	Ogre::Entity* newEntity = RenderSys.m_pSceneMgr->createEntity(entName, meshname);
// 	if(!newEntity)
// 		return nullptr;
// 
// 	Ogre::SceneNode* pNode = RenderSys.m_pSceneMgr->getRootSceneNode()->createChildSceneNode(worldPos, orient);
// 	pNode->setScale(scale);
// 	pNode->attachObject(newEntity);
// 
// 	//每个Entity创建一个包围盒节点
// 	Ogre::WireBoundingBox* aabb = new Ogre::WireBoundingBox;
// 	aabb->setMaterial("BaseWhiteNoLighting");
// 	aabb->setRenderQueueGroup(Ogre::RENDER_QUEUE_OVERLAY);
// 	Ogre::SceneNode* aabbNode = pNode->createChildSceneNode(entName);
// 	aabbNode->attachObject(aabb);
// 	aabbNode->setVisible(false);
// 
// 	_UpdateAABBOfEntity(newEntity);
// 
// 	//设置查询掩码
// 	newEntity->setQueryFlags(eQueryMask_Entity);
// 
// 	SObjectInfo* objInfo = new SObjectInfo;
// 	objInfo->m_meshname = meshname;
// 	objInfo->m_pos = worldPos;
// 	objInfo->m_rot = orient;
// 	objInfo->m_scale = scale;
// 
// 	m_objects.insert(std::make_pair(newEntity, objInfo));
// 
// 	//可撤销操作
// 	if (bOp)
// 	{
// 		opObjectAddRemove* op = ManipulatorSystem.GetOperation().NewOperation<opObjectAddRemove>();
// 		opObjectAddRemove::SOpItem item;
// 		item.bAddOrRemove = true;
// 		item.ent = newEntity;
// 		item.objInfo = *objInfo;
// 		op->AddOp(item);
// 		ManipulatorSystem.GetOperation().Commit(op);
// 	}
// }

// Ogre::Entity* ManipulatorObject::AddEntity( const Ogre::String& meshname, const Ogre::Vector2& screenPos )
// {
// 	Ogre::Ray ray = RenderSys.m_pMainCamera->getCameraToViewportRay(screenPos.x, screenPos.y);
// 
// 	Vector3 pt;
// 	if (ManipulatorSystem.GetTerrain().GetRayIntersectPoint(ray, pt))
// 		return AddEntity(meshname, pt);
// 
// 	return nullptr;
// }

// void ManipulatorObject::SetSelection( Ogre::Entity* pEnt )
// {
// 	ClearSelection();
// 	
// 	assert(pEnt && pEnt->getParentNode());
// 	ShowEntityGizmo(pEnt, true, m_curEditMode, false);
// 	m_pSelectEntity = pEnt;
// 
// 	//改变摄像机模式
// 	if(pEnt->hasSkeleton())
// 	{
// 		ManipulatorSystem.GetCamera().SetType(eCameraType_ModelViewer);
// 		ManipulatorSystem.GetCamera().SetModelViewerTarget(pEnt);
// 		ManipulatorSystem.GetEffect().BindEntityToEffectTemplate(pEnt);
// 	}
// 
// 	//回调事件
// 	Excute([this](ManipulatorObjectEventCallback* callback){ callback->OnObjectSetSelection(m_pSelectEntity); });
// }
// 
// void ManipulatorObject::ShowEntityGizmo(Ogre::Entity* pEntity, bool bShow, eEditMode mode, bool bDrift/* = false*/)
// {
// 	if(!pEntity)
// 		return;
// 
// 	assert(mode != eEditMode_None);
// 	if (mode == eEditMode_Select)
// 	{
// 		Ogre::SceneNode* aabbNode = dynamic_cast<Ogre::SceneNode*>(pEntity->getParentSceneNode()->getChild(pEntity->getName()));
// 		aabbNode->setVisible(bShow);
// 		if (bShow)
// 		{
// 			//显示包围盒
// 			Ogre::WireBoundingBox* pAABB = GetEntityAABBGizmo(pEntity);
// 			if(bDrift)		//显示为红色
// 				pAABB->setMaterial("RedEmissive_ZCheck");
// 			else			//显示为绿色
// 				pAABB->setMaterial("GreenEmissive_ZCheck");
// 		}
// 	}
// 	else
// 	{
// 		//显示坐标轴
// 		m_pGizmoAixs->Show(bShow, mode == eEditMode_Move || mode == eEditMode_Scale);
// 		if (bShow)
// 			m_pGizmoAixs->Attach(pEntity->getParentSceneNode());
// 	}
// }

// Ogre::MovableObject* ManipulatorObject::DoRaySceneQuery( const Ogre::Ray& ray, int queryMask /*= eQueryMask_Default*/ )
// {
// 	m_pRaySceneQuery->setRay(ray);
// 	m_pRaySceneQuery->setQueryMask(queryMask);
// 	const Ogre::RaySceneQueryResult& result = m_pRaySceneQuery->execute();
// 
// 	if(result.empty())
// 		return nullptr;
// 
// 	return result[0].movable;
// }
// 
// void ManipulatorObject::DoAABBSceneQuery( const Ogre::AxisAlignedBox& aabb, int queryMask /*= 0xffffffff*/ )
// {
// 	m_pAABBSceneQuery->setBox(aabb);
// 	m_pAABBSceneQuery->setQueryMask(queryMask);
// 	Ogre::SceneQueryResult& queryResults = m_pAABBSceneQuery->execute();
// 
// 	auto movableList = queryResults.movables;
// }
// 
// void ManipulatorObject::SetPosition( Ogre::Entity* ent, const Ogre::Vector3& vecMove, bool bOp )
// {
// 	assert(ent);
// 
// 	//可撤销操作
// 	if (bOp)
// 	{
// 		Ogre::Any oldValue(ent->getParentNode()->_getDerivedPosition());
// 		CommitEditOperation(ent, eEditMode_Move, oldValue, Ogre::Any(vecMove));
// 	}
// 
// 	ent->getParentSceneNode()->_setDerivedPosition(vecMove);
// 
// 	//回调事件
// 	Excute([=,this](ManipulatorObjectEventCallback* callback){ callback->OnObjectPropertyChanged(ent); });
// }
// 
// void ManipulatorObject::Rotate( Ogre::Entity* ent, float radian, bool bOp )
// {
// 	assert(ent);
// 
// 	switch (m_pGizmoAixs->GetActiveAxis())
// 	{
// 	case GizmoAxis::eAxis_X: ent->getParentSceneNode()->pitch(Ogre::Radian(radian)); break;
// 	case GizmoAxis::eAxis_Y: ent->getParentSceneNode()->yaw(Ogre::Radian(radian)); break;
// 	case GizmoAxis::eAxis_Z: ent->getParentSceneNode()->roll(Ogre::Radian(radian)); break;
// 	}
// 
// 	//回调事件
// 	Excute([=,this](ManipulatorObjectEventCallback* callback){ callback->OnObjectPropertyChanged(ent); });
// }
// 
// void ManipulatorObject::Scale( Ogre::Entity* ent, const Ogre::Vector3& scaleMultiplier, bool bOp )
// {
// 	assert(ent);
// 	ent->getParentSceneNode()->scale(scaleMultiplier);
// 
// 	//回调事件
// 	Excute([=,this](ManipulatorObjectEventCallback* callback){ callback->OnObjectPropertyChanged(ent); });
// }
// 
// void ManipulatorObject::SetOrientation( Ogre::Entity* ent, const Ogre::Quaternion& orient, bool bOp )
// {
// 	assert(ent);
// 
// 	//可撤销操作
// 	if (bOp)
// 	{
// 		Ogre::Any oldValue(ent->getParentNode()->_getDerivedOrientation());
// 		CommitEditOperation(ent, eEditMode_Rotate, oldValue, Ogre::Any(orient));
// 	}
// 
// 	ent->getParentSceneNode()->_setDerivedOrientation(orient);
// 
// 	//回调事件
// 	Excute([=,this](ManipulatorObjectEventCallback* callback){ callback->OnObjectPropertyChanged(ent); });
// }
// 
// void ManipulatorObject::SetScale( Ogre::Entity* ent, const Ogre::Vector3 scale, bool bOp )
// {
// 	assert(ent);
// 
// 	//可撤销操作
// 	if (bOp)
// 	{
// 		Ogre::Any oldValue(ent->getParentNode()->_getDerivedScale());
// 		CommitEditOperation(ent, eEditMode_Scale, oldValue, Ogre::Any(scale));
// 	}
// 
// 	ent->getParentSceneNode()->setScale(scale);
// 
// 	//回调事件
// 	Excute([=,this](ManipulatorObjectEventCallback* callback){ callback->OnObjectPropertyChanged(ent); });
// }

void ManipulatorObject::ClearSelection()
{
// 	if (m_pSelectEntity)
// 	{
// 		//隐藏所有gizmo
// 		ShowEntityGizmo(m_pSelectEntity, false, eEditMode_Select);
// 		ShowEntityGizmo(m_pSelectEntity, false, eEditMode_Move);
// 
// 		Ogre::Entity* ent = m_pSelectEntity;
// 		m_pSelectEntity = nullptr;
// 
// 		//改变摄像机模式
// 		if(ent->hasSkeleton())
// 			ManipulatorSystem.GetCamera().SetType(eCameraType_RTS);
// 
// 		//回调事件
// 		Excute([=,this](ManipulatorObjectEventCallback* callback){ callback->OnObjectClearSelection(ent); });
// 	}
}

void ManipulatorObject::OnFrameMove( float dt )
{
	//更新选中物体的包围盒
// 	if (m_pSelectEntity)
// 		_UpdateAABBOfEntity(m_pSelectEntity);
}

// Ogre::WireBoundingBox* ManipulatorObject::GetEntityAABBGizmo(Ogre::Entity* pEntity)
// {
// 	assert(pEntity);
// 	Ogre::SceneNode* aabbNode = dynamic_cast<Ogre::SceneNode*>(pEntity->getParentSceneNode()->getChild(pEntity->getName()));
// 	return dynamic_cast<Ogre::WireBoundingBox*>(aabbNode->getAttachedObject(0));
// }

void ManipulatorObject::Load( rapidxml::xml_node<>* XMLNode )
{
// 	Ogre::SceneManager* pSceneMgr = RenderSys.m_pSceneMgr;
// 	size_t count = Ogre::StringConverter::parseUnsignedInt(XMLNode->first_attribute("count")->value());
// 	rapidxml::xml_node<>* curObjNode = XMLNode->first_node();
// 
// 	for (size_t i=0; i< count; ++i)
// 	{
// 		const String strMesh = curObjNode->first_attribute("meshname")->value();
// 		const bool bIsNavMesh = Ogre::StringConverter::parseBool(curObjNode->first_attribute("isnavmesh")->value());
// 		const bool bIsBuilding = Ogre::StringConverter::parseBool(curObjNode->first_attribute("isbuilding")->value());
// 		const bool bIsResource = Ogre::StringConverter::parseBool(curObjNode->first_attribute("isresource")->value());
// 		const Ogre::Vector3 pos = Ogre::StringConverter::parseVector3(curObjNode->first_attribute("position")->value());
// 		const Ogre::Quaternion orient = Ogre::StringConverter::parseQuaternion(curObjNode->first_attribute("orientation")->value());
// 		const Ogre::Vector3 scale = Ogre::StringConverter::parseVector3(curObjNode->first_attribute("scale")->value());
// 
// 		Ogre::Entity* pNewEnt = AddEntity(strMesh, pos, false, orient, scale);
// 		assert(pNewEnt);
// 
// 		SObjectInfo objInfo;
// 		objInfo.m_bIsBuilding = bIsBuilding;
// 		objInfo.m_bAddToNavmesh = bIsNavMesh;
// 		objInfo.m_bIsResource = bIsResource;
// 
// 		if(bIsBuilding)
// 		{
// 			const String strBuildingName = curObjNode->first_attribute("buildingname")->value();
// 			objInfo.m_buildingName = strBuildingName;
// 		}
// 
// 		SetObjectInfo(pNewEnt, objInfo);
// 		curObjNode = curObjNode->next_sibling();
// 	}
}

void ManipulatorObject::Serialize( rapidxml::xml_document<>* doc, rapidxml::xml_node<>* XMLNode )
{
// 	using namespace rapidxml;
// 
// 	const String count = Ogre::StringConverter::toString(m_objects.size());
// 	XMLNode->append_attribute(doc->allocate_attribute("count", doc->allocate_string(count.c_str())));
// 
// 	for (auto iter=m_objects.begin(); iter!=m_objects.end(); ++iter)
// 	{
// 		Ogre::Entity* pObj = iter->first;
// 		xml_node<>* objNode =   doc->allocate_node(node_element, "entity");
// 
// 		//meshname
// 		const String& strMesh = pObj->getMesh()->getName();
// 		objNode->append_attribute(doc->allocate_attribute("meshname", doc->allocate_string(strMesh.c_str())));
// 		//add to navmesh
// 		const String& strIsNavMesh = Ogre::StringConverter::toString((iter->second)->m_bAddToNavmesh);
// 		objNode->append_attribute(doc->allocate_attribute("isnavmesh", doc->allocate_string(strIsNavMesh.c_str())));
// 		//is building
// 		const String& strIsBuilding = Ogre::StringConverter::toString((iter->second)->m_bIsBuilding);
// 		objNode->append_attribute(doc->allocate_attribute("isbuilding", doc->allocate_string(strIsBuilding.c_str())));
// 		//building name
// 		if(strIsBuilding == "true")
// 			objNode->append_attribute(doc->allocate_attribute("buildingname", doc->allocate_string((iter->second)->m_buildingName.c_str())));
// 		//is resource
// 		const String& strIsResource = Ogre::StringConverter::toString((iter->second)->m_bIsResource);
// 		objNode->append_attribute(doc->allocate_attribute("isresource", doc->allocate_string(strIsResource.c_str())));
// 		//position
// 		String strPos = Ogre::StringConverter::toString(pObj->getParentSceneNode()->_getDerivedPosition());
// 		objNode->append_attribute(doc->allocate_attribute("position", doc->allocate_string(strPos.c_str())));
// 		//orientation
// 		String strOrient = Ogre::StringConverter::toString(pObj->getParentSceneNode()->_getDerivedOrientation());
// 		objNode->append_attribute(doc->allocate_attribute("orientation", doc->allocate_string(strOrient.c_str())));
// 		//scale
// 		String strScale = Ogre::StringConverter::toString(pObj->getParentSceneNode()->_getDerivedScale());
// 		objNode->append_attribute(doc->allocate_attribute("scale", doc->allocate_string(strScale.c_str())));
// 
// 		XMLNode->append_node(objNode);
// 	}
}

// void ManipulatorObject::AddGrass( const VEC3& pos, const MAT44& orient /*= ORIENT_IDENTITY*/, const VEC3& scale /*= VEC3(1,1,1)*/ )
// {
// 	irr::scene::ISceneManager* sceneMgr = RenderSys.GetSceneManager();
// 
// 	SCENENODE* grass = new irr::scene::GrassSceneNode(sceneMgr->getRootSceneNode(), sceneMgr);
// 	grass->setScale(scale);
// 	grass->setPosition(pos);
// 	grass->drop();
// }

// void ManipulatorObject::_UpdateAABBOfEntity( Ogre::Entity* pEntity )
// {
// 	assert(pEntity);
// 
// 	Ogre::SceneNode* aabbNode = dynamic_cast<Ogre::SceneNode*>(
// 		pEntity->getParentSceneNode()->getChild(pEntity->getName()));
// 	Ogre::WireBoundingBox* pAABB = GetEntityAABBGizmo(pEntity);
// 	pAABB->setupBoundingBox(pEntity->getWorldBoundingBox(true));
// 	//避免被裁减
// 	(const_cast<Ogre::AxisAlignedBox&>(pAABB->getBoundingBox())).setInfinite();
// 	aabbNode->_updateBounds();
// }
// 
// void ManipulatorObject::RemoveEntity(Ogre::Entity* ent, bool bOp)
// {
// 	if (bOp)
// 	{
// 		opObjectAddRemove* op = ManipulatorSystem.GetOperation().NewOperation<opObjectAddRemove>();
// 		opObjectAddRemove::SOpItem item;
// 		item.bAddOrRemove = false;
// 		item.ent = nullptr;
// 		item.objInfo = *GetObjectInfo(ent);
// 		op->AddOp(item);
// 		ManipulatorSystem.GetOperation().Commit(op);
// 	}
// 
// 	auto iter = m_objects.find(ent);
// 	assert(iter != m_objects.end());
// 	delete iter->second;
// 	m_objects.erase(iter);
// 	
// 	if(ent == m_pSelectEntity)
// 	{
// 		ClearSelection();
// 		ManipulatorAction::GetSingleton().SetActiveAction(eActionType_None);
// 	}
// 
// 	RenderSys.m_pSceneMgr->destroyEntity(ent);
// }
// 
// void ManipulatorObject::SetObjectInfo( Ogre::Entity* ent, const SObjectInfo& info )
// {
// 	auto iter = m_objects.find(ent);
// 	assert(iter != m_objects.end());
// 	*(iter->second) = info;
// }
// 
// SObjectInfo* ManipulatorObject::GetObjectInfo( Ogre::Entity* ent )
// {
// 	auto iter = m_objects.find(ent);
// 	assert(iter != m_objects.end());
// 	return iter->second;
// }
// 
// void ManipulatorObject::CommitEditOperation( Ogre::Entity* ent, eEditMode mode, const Ogre::Any& oldValue, const Ogre::Any& newValue )
// {
// 	opObjectEdit* op = ManipulatorSystem.GetOperation().NewOperation<opObjectEdit>();
// 	opObjectEdit::SOpItem item;
// 	item.pEntity = ent;
// 	item.type = mode;
// 	item.oldValue = oldValue;
// 	item.newValue = newValue;
// 	op->AddOp(item);
// 	ManipulatorSystem.GetOperation().Commit(op);
// }








