#include "stdafx.h"
#include "Brush.h"
#include "Gizmo.h"
#include "EditorDefine.h"
#include "Manipulator/ManipulatorScene.h"

Brush::Brush()
:m_bActive(false)
{	
}

void Brush::SetActive( bool bActive )
{
	//m_pNode->setVisible(bActive);
	m_bActive = bActive;
}


/////////////////////////////////////////////////////////////
BrushCircle::BrushCircle()
{
	m_pRenderable = new GizmoCircle;
}

BrushCircle::~BrushCircle()
{
	SAFE_DELETE(m_pRenderable);
}

//////////////////////////////////////////////////////////
BrushSquare::BrushSquare()
:m_width(-1)
,m_height(-1)
{
	m_pRenderable = new GizmoRectangle;
}

BrushSquare::~BrushSquare()
{
	SAFE_DELETE(m_pRenderable);
}

void BrushSquare::SetWidth( float w )
{
	m_width = w;
}

void BrushSquare::SetHeight( float h )
{
	m_height = h;
}

void BrushSquare::SetPosition( const VEC3& pos )
{
	Brush::SetPosition(pos);
	m_pRenderable->UpdatePosition(pos, m_width, m_height);}

void BrushSquare::OnGizmoNodeReset()
{
// 	m_pNode = RenderSys.m_pSceneMgr->getRootSceneNode()->createChildSceneNode();
// 	m_pNode->attachObject(m_pRenderable);
// 	m_pNode->setVisible(false);
}

void BrushSquare::SetDimension( float dim1, float dim2 )
{
	m_pRenderable->InitRenderable(dim1, dim2);

	m_width = dim1;
	m_height = dim2;
}

