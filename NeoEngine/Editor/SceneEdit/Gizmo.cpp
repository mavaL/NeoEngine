#include "stdafx.h"
#include "Gizmo.h"
#include "EditorDefine.h"
#include "Manipulator/ManipulatorScene.h"


GizmoRectangle::~GizmoRectangle()
{
	DestroyRenderable();
}

void GizmoRectangle::InitRenderable(float w, float h)
{
// 	DestroyRenderable();
// 
// 	//矩形长宽上分布点的个数
// 	const int ptCountOfWidth = (int)std::ceil(w * POINT_DENSITY);
// 	const int ptCountOfHeight = (int)std::ceil(h * POINT_DENSITY);
// 	const int totalCount = (ptCountOfWidth + ptCountOfHeight) * 2 + 1 - 4;
// 
// 	mRenderOp.vertexData = new VertexData();
// 
// 	mRenderOp.indexData = 0;
// 	mRenderOp.vertexData->vertexCount = totalCount;
// 	mRenderOp.vertexData->vertexStart = 0; 
// 	mRenderOp.operationType = RenderOperation::OT_LINE_STRIP; 
// 	mRenderOp.useIndexes = false; 
// 	mRenderOp.useGlobalInstancingVertexBufferIsAvailable = false;
// 
// 	VertexDeclaration* decl = mRenderOp.vertexData->vertexDeclaration;
// 	VertexBufferBinding* bind = mRenderOp.vertexData->vertexBufferBinding;
// 
// 	size_t offset = 0;
// 	decl->addElement(0, offset, VET_FLOAT3, VES_POSITION);
// 	offset += VertexElement::getTypeSize(VET_FLOAT3);
// 	decl->addElement(0, offset, VET_FLOAT3, VES_DIFFUSE);
// 	offset += VertexElement::getTypeSize(VET_FLOAT3);
// 
// 	HardwareVertexBufferSharedPtr vbuf = 
// 		HardwareBufferManager::getSingleton().createVertexBuffer(
// 		offset,
// 		mRenderOp.vertexData->vertexCount,
// 		HardwareBuffer::HBU_DYNAMIC_WRITE_ONLY);
// 
// 	// Bind buffer
// 	bind->setBinding(0, vbuf);
// 
// 	//总是可见
// 	(const_cast<Ogre::AxisAlignedBox&>(getBoundingBox())).setInfinite();
// 
// 	setMaterial("BaseWhiteNoLighting");
// 	
// 	setRenderQueueGroup(RENDER_QUEUE_OVERLAY);
}

// void GizmoRectangle::getWorldTransforms( Matrix4* xform ) const
// {
// 	// return identity matrix to prevent parent transforms
// 	*xform = Matrix4::IDENTITY;
// }

void GizmoRectangle::UpdatePosition( const VEC3& pos, float w, float h )
{
// 	ManipulatorTerrain& terrain = ManipulatorSystem.GetTerrain();
// 	//矩形长宽上分布点的个数
// 	const int ptCountOfWidth = (int)std::ceil(w * POINT_DENSITY);
// 	const int ptCountOfHeight = (int)std::ceil(h * POINT_DENSITY);
// 
// 	const float halfW = w / 2, halfH = h / 2;
// 	const float ptDist = 1 / POINT_DENSITY;
// 
// 	HardwareVertexBufferSharedPtr vbuf = 
// 		mRenderOp.vertexData->vertexBufferBinding->getBuffer(0);
// 	float* pFloat = static_cast<float*>(vbuf->lock(HardwareBuffer::HBL_DISCARD));
// 	
// 	const float yOffset = 0.01f;
// 	//上边
// 	for (int i=0; i<ptCountOfWidth-1; ++i)
// 	{
// 		//position
// 		float x = pos.x - halfW + i * ptDist;
// 		float z = pos.z - halfH;
// 		float y = terrain.GetHeightAt(Ogre::Vector2(x, z));
// 
// 		*pFloat++ = x;
// 		*pFloat++ = y + yOffset;
// 		*pFloat++ = z;
// 
// 		//color
// 		*pFloat++ = 0.0f;
// 		*pFloat++ = 0.0f;
// 		*pFloat++ = 1.0f;
// 	}
// 
// 	//右边
// 	for (int i=0; i<ptCountOfHeight-1; ++i)
// 	{
// 		//position
// 		float x = pos.x + halfW;
// 		float z = pos.z - halfH + i * ptDist;
// 		float y = terrain.GetHeightAt(Ogre::Vector2(x, z));
// 
// 		*pFloat++ = x;
// 		*pFloat++ = y + yOffset;
// 		*pFloat++ = z;
// 
// 		//color
// 		*pFloat++ = 0.0f;
// 		*pFloat++ = 0.0f;
// 		*pFloat++ = 1.0f;
// 	}
// 
// 	//下边
// 	for (int i=0; i<ptCountOfWidth-1; ++i)
// 	{
// 		//position
// 		float x = pos.x + halfW - i * ptDist;
// 		float z = pos.z + halfH;
// 		float y = terrain.GetHeightAt(Ogre::Vector2(x, z));
// 
// 		*pFloat++ = x;
// 		*pFloat++ = y + yOffset;
// 		*pFloat++ = z;
// 
// 		//color
// 		*pFloat++ = 0.0f;
// 		*pFloat++ = 0.0f;
// 		*pFloat++ = 1.0f;
// 	}
// 
// 	//左边
// 	for (int i=0; i<ptCountOfHeight-1; ++i)
// 	{
// 		//position
// 		float x = pos.x - halfW;
// 		float z = pos.z + halfH - i * ptDist;
// 		float y = terrain.GetHeightAt(Ogre::Vector2(x, z));
// 
// 		*pFloat++ = x;
// 		*pFloat++ = y + yOffset;
// 		*pFloat++ = z;
// 
// 		//color
// 		*pFloat++ = 0.0f;
// 		*pFloat++ = 0.0f;
// 		*pFloat++ = 1.0f;
// 	}
// 
// 	//最后一个点,起点
// 	float x = pos.x - halfW;
// 	float z = pos.z - halfH;
// 	float y = terrain.GetHeightAt(Ogre::Vector2(x, z));
// 
// 	*pFloat++ = x;
// 	*pFloat++ = y + yOffset;
// 	*pFloat++ = z;
// 
// 	//color
// 	*pFloat++ = 0.0f;
// 	*pFloat++ = 0.0f;
// 	*pFloat++ = 1.0f;
// 
// 	vbuf->unlock();
}

void GizmoRectangle::DestroyRenderable()
{
//	SAFE_DELETE(mRenderOp.vertexData);
}

/////////////////////////////////////////////////////////////////////////////
void GizmoCircle::InitRenderable()
{

}

GizmoCircle::~GizmoCircle()
{
	DestroyRenderable();
}

/////////////////////////////////////////////////////////////////////////////
GizmoAxis::GizmoAxis()
// :m_pObjGizmoNode(nullptr)
// ,m_pAttachNode(nullptr)
:m_curActiveAxis(eAxis_None)
{
	_Init();
}

GizmoAxis::~GizmoAxis()
{
	_Destroy();
}

void GizmoAxis::_Init()
{
// 	STRING matNames[3] = { "RedEmissive", "GreenEmissive", "BlueEmissive" };
// 
// 	for (int i=0; i<3; ++i)
// 	{
// 		m_pAxisMove[i] = RenderSys.m_pSceneMgr->createEntity("Arrow1m.mesh");
// 		m_pAxisRotate[i] = RenderSys.m_pSceneMgr->createEntity("RotationRing.mesh");
// 		m_pAxisMove[i]->setRenderQueueGroup(Ogre::RENDER_QUEUE_OVERLAY);
// 		m_pAxisRotate[i]->setRenderQueueGroup(Ogre::RENDER_QUEUE_OVERLAY);
// 
// 		m_pAxisMove[i]->setMaterialName(matNames[i]);
// 		m_pAxisRotate[i]->setMaterialName(matNames[i]);
// 	}
}

// void GizmoAxis::Attach( Ogre::Node* pNode )
// {
// 	if (m_pAttachNode)
// 	{
// 		m_pAttachNode->removeChild(m_pObjGizmoNode);
// 		m_pAttachNode = nullptr;
// 	}
// 	m_pAttachNode = pNode;
// 	m_pAttachNode->addChild(m_pObjGizmoNode);
// 	m_pAttachNode->_update(true, false);
// 
// 	m_curActiveAxis = eAxis_None;
// 
// 	//重置坐标轴
// 	Node* xNode = m_pObjGizmoNode->getChild("GizmoMoveXAixsNode");
// 	Node* yNode = m_pObjGizmoNode->getChild("GizmoMoveYAixsNode");
// 	Node* zNode = m_pObjGizmoNode->getChild("GizmoMoveZAixsNode");
// 
// 	xNode->resetToInitialState();
// 	yNode->resetToInitialState();
// 	zNode->resetToInitialState();
// 
// 	Vector3 scale(0.5f, 0.5f, 3);
// 	//Scale
// 	xNode->setScale(scale);
// 	yNode->setScale(scale);
// 	zNode->setScale(scale);
// 	//Rotate
// 	xNode->yaw(Ogre::Degree(90));
// 	yNode->pitch(Ogre::Degree(-90));
// 	float offset = Math::Abs(m_pAxisMove[0]->getBoundingBox().getMinimum().z);
// 	//Translate
// 	xNode->translate(Vector3(0,0,offset*scale.z), Node::TS_LOCAL);
// 	yNode->translate(Vector3(0,0,offset*scale.z), Node::TS_LOCAL);
// 	zNode->translate(Vector3(0,0,offset*scale.z), Node::TS_LOCAL);
// 
// 	//重置旋转轴
// 	xNode = m_pObjGizmoNode->getChild("GizmoRotateXAixsNode");
// 	yNode = m_pObjGizmoNode->getChild("GizmoRotateYAixsNode");
// 	zNode = m_pObjGizmoNode->getChild("GizmoRotateZAixsNode");
// 
// 	xNode->resetToInitialState();
// 	yNode->resetToInitialState();
// 	zNode->resetToInitialState();
// 
// 	//Scale
// 	xNode->setScale(2,2,2);
// 	yNode->setScale(2,2,2);
// 	zNode->setScale(2,2,2);
// 	//Rotate
// 	xNode->roll(Ogre::Degree(90));
// 	zNode->pitch(Ogre::Degree(90));
// }

void GizmoAxis::Show( bool bShow, bool bMoveOrRotate )
{
// 	if (bMoveOrRotate)
// 	{
// 		m_pAxisMove[0]->setVisible(bShow);
// 		m_pAxisMove[1]->setVisible(bShow);
// 		m_pAxisMove[2]->setVisible(bShow);
// 	}
// 	else
// 	{
// 		m_pAxisRotate[0]->setVisible(bShow);
// 		m_pAxisRotate[1]->setVisible(bShow);
// 		m_pAxisRotate[2]->setVisible(bShow);
// 	}
}

void GizmoAxis::_Destroy()
{
// 	m_pAxisMove[0] = m_pAxisMove[1] = m_pAxisMove[2] = nullptr;
// 	m_pAxisRotate[0] = m_pAxisRotate[1] = m_pAxisRotate[2] = nullptr;
}

void GizmoAxis::Reset()
{
	_Destroy();
	_Init();
}

void GizmoAxis::OnGizmoNodeReset()
{
	//Gizmo Node
// 	m_pObjGizmoNode = RenderSys.m_pSceneMgr->getRootSceneNode()->createChildSceneNode("ObjectGizmoNode");
// 	m_pObjGizmoNode->setInheritScale(false);
// 
// 	//坐标轴
// 	Ogre::SceneNode* pXNode = m_pObjGizmoNode->createChildSceneNode("GizmoMoveXAixsNode");
// 	Ogre::SceneNode* pYNode = m_pObjGizmoNode->createChildSceneNode("GizmoMoveYAixsNode");
// 	Ogre::SceneNode* pZNode = m_pObjGizmoNode->createChildSceneNode("GizmoMoveZAixsNode");
// 
// 	pXNode->setInitialState();
// 	pYNode->setInitialState();
// 	pZNode->setInitialState();
// 
// 	pXNode->attachObject(m_pAxisMove[0]);
// 	pYNode->attachObject(m_pAxisMove[1]);
// 	pZNode->attachObject(m_pAxisMove[2]);
// 
// 	//旋转轴
// 	pXNode = m_pObjGizmoNode->createChildSceneNode("GizmoRotateXAixsNode");
// 	pYNode = m_pObjGizmoNode->createChildSceneNode("GizmoRotateYAixsNode");
// 	pZNode = m_pObjGizmoNode->createChildSceneNode("GizmoRotateZAixsNode");
// 
// 	pXNode->setInitialState();
// 	pYNode->setInitialState();
// 	pZNode->setInitialState();
// 
// 	pXNode->attachObject(m_pAxisRotate[0]);
// 	pYNode->attachObject(m_pAxisRotate[1]);
// 	pZNode->attachObject(m_pAxisRotate[2]);
// 
// 	m_pObjGizmoNode->setVisible(true);
// 	Show(false, true);
// 	Show(false, false);
// 
// 	RenderSys.m_pSceneMgr->getRootSceneNode()->removeChild(m_pObjGizmoNode);
// 
// 	m_pAttachNode = nullptr;
}

void GizmoAxis::HighlightAxis( bool bHighlight, eAxis axis, int mode )
{
// 	if(axis == eAxis_None)
// 		return;
// 
// 	Ogre::Entity** ent = (mode == ManipulatorObject::eEditMode_Rotate ? m_pAxisRotate : m_pAxisMove);
// 
// 	if(bHighlight)
// 	{
// 		ent[axis]->setMaterialName("YellowEmissive");
// 	}
// 	else
// 	{
// 		switch (axis)
// 		{
// 		case 0: ent[axis]->setMaterialName("RedEmissive"); break;
// 		case 1: ent[axis]->setMaterialName("GreenEmissive"); break;
// 		case 2: ent[axis]->setMaterialName("BlueEmissive"); break;
// 		}
// 	}
}

// void GizmoAxis::Update( const Ogre::Ray& ray, int mode )
// {
// 	const static float axisLenSq = 16.0f;
// 	const static float axisWidth = 0.1f;
// 
// 	const Ogre::Quaternion& orient = ManipulatorSystem.GetObject().GetSelection()->getParentSceneNode()->_getDerivedOrientation();
// 	const Ogre::Vector3& pos = ManipulatorSystem.GetObject().GetSelection()->getParentSceneNode()->_getDerivedPosition();
// 
// 	//更新辅助平面
// 	m_plane[eAxis_X].redefine(orient.xAxis(), pos);
// 	m_plane[eAxis_Y].redefine(orient.yAxis(), pos);
// 	m_plane[eAxis_Z].redefine(orient.zAxis(), pos);
// 
// 	bool collidePlane[3];
// 	collidePlane[eAxis_X] = false;
// 	collidePlane[eAxis_Y] = false;
// 	collidePlane[eAxis_Z] = false;
// 
// 	if (m_curActiveAxis != eAxis_None)
// 	{
// 		HighlightAxis(false, m_curActiveAxis, mode);
// 		m_curActiveAxis = eAxis_None;
// 	}
// 
// 	if (mode == ManipulatorObject::eEditMode_Move ||
// 		mode == ManipulatorObject::eEditMode_Scale	)
// 	{
// 		int intersecPlane = -1;
// 		float minDistance = 10000.0f;
// 		for (int i=0; i<3; ++i)
// 		{
// 			auto result = ray.intersects(m_plane[i]);
// 			if (!result.first)
// 				continue;
// 
// 			//以轴长为球径的粗判
// 			Vector3 intersectPt = ray.getPoint(result.second);
// 			if(intersectPt.squaredDistance(pos) > axisLenSq)
// 				continue;
// 
// 			//射线可能与多个平面相交,取最近的
// 			if (result.second < minDistance)
// 			{
// 				intersecPlane = i;
// 				minDistance = result.second;
// 			}
// 		}
// 
// 		if (intersecPlane != -1)
// 		{
// 			for (int i=0; i<3; ++i)
// 			{
// 				if(i == intersecPlane)
// 					continue;
// 
// 				//细判
// 				float distance = m_plane[i].getDistance(ray.getPoint(minDistance));
// 				if (distance <= axisWidth)
// 				{
// 					collidePlane[intersecPlane] = true;
// 					collidePlane[i] = true;
// 					break;
// 				}
// 			}
// 		}
// 
// 		//高亮选中轴
// 		if((collidePlane[eAxis_Y] || collidePlane[eAxis_Z]) && !collidePlane[eAxis_X])
// 		{
// 			//没有负半轴..
// 			if(m_plane[eAxis_X].getDistance(ray.getPoint(minDistance)) > 0)
// 				m_curActiveAxis = eAxis_X;
// 		}
// 		else if((collidePlane[eAxis_X] || collidePlane[eAxis_Y]) && !collidePlane[eAxis_Z])
// 		{
// 			if(m_plane[eAxis_Z].getDistance(ray.getPoint(minDistance)) > 0)
// 				m_curActiveAxis = eAxis_Z;
// 		}
// 		else if((collidePlane[eAxis_X] || collidePlane[eAxis_Z]) && !collidePlane[eAxis_Y])
// 		{
// 			if(m_plane[eAxis_Y].getDistance(ray.getPoint(minDistance)) > 0)
// 				m_curActiveAxis = eAxis_Y;
// 		}
// 
// 		HighlightAxis(true, m_curActiveAxis, mode);
// 	}
// 	else if(mode == ManipulatorObject::eEditMode_Rotate)
// 	{
// 		static const float radius = m_pAxisRotate[0]->getWorldBoundingSphere(true).getRadius();
// 		static const float minRadiusSq = (radius - 0.2f) * (radius - 0.2f);
// 		static const float maxRadiusSq = (radius + 0.2f) * (radius + 0.2f);
// 
// 		for (int i=0; i<3; ++i)
// 		{
// 			auto result = ray.intersects(m_plane[i]);
// 			if (!result.first)
// 				continue;
// 
// 			float distanceSq = pos.squaredDistance(ray.getPoint(result.second));
// 			if (distanceSq > minRadiusSq && distanceSq < maxRadiusSq)
// 			{
// 				m_curActiveAxis = (eAxis)i;
// 				HighlightAxis(true, m_curActiveAxis, mode);
// 				break;
// 			}
// 		}
// 	}
// }
