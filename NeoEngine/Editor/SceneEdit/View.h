
// View.h : CEditorView 类的接口
//


#pragma once

class Application;
//----------------------------------------------------------------------------------------
class CEditorView : public CView
{
public:
	CEditorView();
	virtual ~CEditorView();
	DECLARE_DYNCREATE(CEditorView)

public:
	virtual DROPEFFECT OnDragOver(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual BOOL OnDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point);

protected:
	virtual BOOL	PreCreateWindow(CREATESTRUCT& cs);
	virtual	void	OnDraw(CDC* dc) {}
	virtual void	PostNcDestroy() {}

private:
	afx_msg void	OnPaint();
	afx_msg void	OnSize(UINT nType, int cx, int cy);
	afx_msg int		OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void	OnLButtonDown(UINT nFlags, CPoint point );
	afx_msg void	OnLButtonUp(UINT nFlags, CPoint point );
	afx_msg void	OnRButtonDown(UINT nFlags, CPoint point );
	afx_msg void	OnRButtonUp(UINT nFlags, CPoint point );
	afx_msg void	OnMouseMove(UINT nFlags, CPoint point );
	afx_msg BOOL	OnMouseWheel( UINT nFlags, short zDelta, CPoint pt );
	afx_msg void	OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void	OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);

	DECLARE_MESSAGE_MAP()

private:
	COleDropTarget*	m_pResDropHelper;	//ole拖拽
	Application*	m_app;
};

