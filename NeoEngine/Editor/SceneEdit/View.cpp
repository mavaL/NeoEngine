
// View.cpp : CEditorView 类的实现
//

#include "stdafx.h"
#include "SceneEdit.h"
#include "View.h"
#include "Utility.h"
#include "Manipulator/ManipulatorScene.h"
#include "Manipulator/ManipulatorObject.h"
#include "Manipulator/ManipulatorAction.h"


// CEditorView

CEditorView::CEditorView()
{
	m_pResDropHelper = new COleDropTarget;
	m_app = &dynamic_cast<CSceneEditApp*>(AfxGetApp())->m_app;
}

CEditorView::~CEditorView()
{
	SAFE_DELETE(m_pResDropHelper);
}

IMPLEMENT_DYNCREATE(CEditorView, CView)

BEGIN_MESSAGE_MAP(CEditorView, CWnd)
	ON_WM_MOUSEWHEEL()
	ON_WM_PAINT()
	ON_WM_SIZE()
	ON_WM_CREATE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_KEYDOWN()
	ON_WM_KEYUP()
END_MESSAGE_MAP()



// CEditorView 消息处理程序

BOOL CEditorView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CEditorView::OnPaint() 
{
	CPaintDC dc(this); // 用于绘制的设备上下文
	
	// TODO: 在此处添加消息处理程序代码
	
	// 不要为绘制消息而调用 CWnd::OnPaint()
}

void CEditorView::OnSize( UINT nType, int cx, int cy )
{
	CView::OnSize(nType, cx, cy);
	((CSceneEditApp*)AfxGetApp())->m_app.OnViewportResized(cx, cy);
}

int CEditorView::OnCreate( LPCREATESTRUCT lpCreateStruct )
{
	if(!m_pResDropHelper->Register(this))
		return -1;

	return 0;
}

BOOL CEditorView::OnDrop( COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point )
{
// 	//取出拖拽项
// 	CXTPTaskPanelItem* pItemDrop = CXTPTaskPanelItem::CreateFromOleData(pDataObject);
// 	assert(pItemDrop);
// 
// 	//获取资源名称
// 	std::wstring meshname = pItemDrop->GetCaption();
// 	meshname += L".mesh";
// 
// 	Ogre::Vector2 pos((float)point.x, (float)point.y);
// 	RECT rect;
// 	GetClientRect(&rect);
// 	pos.x /= (rect.right-rect.left);
// 	pos.y /= (rect.bottom-rect.top);
// 
// 	//创建物体
// 	ManipulatorObject& manObject = ManipulatorSystem.GetObject();
// 	Ogre::Entity* pEnt = manObject.AddEntity(Utility::UnicodeToEngine(meshname), pos);
// 	if(!pEnt)
// 		return FALSE;
// 
// 	if(pEnt->getSkeleton())
// 	{
// 		manObject.SetCurEditMode(ManipulatorObject::eEditMode_Select);
// 		manObject.SetSelection(pEnt);
// 		pEnt->getParentSceneNode()->yaw(Ogre::Radian(Ogre::Math::PI));
// 	}
// 	else
// 	{
// 		//激活物体移动状态
// 		manObject.SetCurEditMode(ManipulatorObject::eEditMode_Move);
// 		manObject.SetSelection(pEnt);
// 		ManipulatorAction::GetSingleton().SetActiveAction(eActionType_ObjectEdit);
// 	}

	return TRUE;
}

DROPEFFECT CEditorView::OnDragOver( COleDataObject* pDataObject, DWORD dwKeyState, CPoint point )
{
	return DROPEFFECT_COPY;
}

void CEditorView::OnLButtonDown( UINT nFlags, CPoint point )
{
	m_app->OnLButtonDown(point);
}

void CEditorView::OnLButtonUp( UINT nFlags, CPoint point )
{
	m_app->OnLButtonUp(point);
	SetFocus();
}

void CEditorView::OnMouseMove( UINT nFlags, CPoint point )
{
	m_app->OnMouseMove(point);
}

void CEditorView::OnRButtonDown( UINT nFlags, CPoint point )
{
	m_app->OnRButtonDown(point);
}

void CEditorView::OnRButtonUp( UINT nFlags, CPoint point )
{
	m_app->OnRButtonUp(point);
}

BOOL CEditorView::OnMouseWheel( UINT nFlags, short zDelta, CPoint pt )
{
	m_app->OnMouseWheel(-zDelta / WHEEL_DELTA);
	return TRUE;
}

void CEditorView::OnKeyDown( UINT nChar, UINT nRepCnt, UINT nFlags )
{
	m_app->OnKeyDown(nChar);
}

void CEditorView::OnKeyUp( UINT nChar, UINT nRepCnt, UINT nFlags )
{
	m_app->OnKeyUp(nChar);
}

