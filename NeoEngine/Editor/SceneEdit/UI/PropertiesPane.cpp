// PropertiesPane.cpp : implementation file
//
// This file is a part of the XTREME TOOLKIT PRO MFC class library.
// (c)1998-2011 Codejock Software, All Rights Reserved.
//
// THIS SOURCE FILE IS THE PROPERTY OF CODEJOCK SOFTWARE AND IS NOT TO BE
// RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED WRITTEN
// CONSENT OF CODEJOCK SOFTWARE.
//
// THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS OUTLINED
// IN THE XTREME TOOLKIT PRO LICENSE AGREEMENT. CODEJOCK SOFTWARE GRANTS TO
// YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE THIS SOFTWARE ON A
// SINGLE COMPUTER.
//
// CONTACT INFORMATION:
// support@codejock.com
// http://www.codejock.com
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "PropertiesPane.h"


/////////////////////////////////////////////////////////////////////////////
// CPropertiesPane

CPropertiesPane::CPropertiesPane()
{
	m_wndPropertyGrid.SetTheme(xtpGridThemeWhidbey);
}

CPropertiesPane::~CPropertiesPane()
{
}


BEGIN_MESSAGE_MAP(CPropertiesPane, CWnd)
	//{{AFX_MSG_MAP(CPropertiesPane)
	ON_WM_CREATE()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_PANEPROPERTIES_CATEGORIZED, OnPanePropertiesCategorized)
	ON_UPDATE_COMMAND_UI(ID_PANEPROPERTIES_CATEGORIZED, OnUpdatePanePropertiesCategorized)
	ON_COMMAND(ID_PANEPROPERTIES_ALPHABETIC, OnPanePropertiesAlphabetic)
	ON_UPDATE_COMMAND_UI(ID_PANEPROPERTIES_ALPHABETIC, OnUpdatePanePropertiesAlphabetic)
	ON_WM_SETFOCUS()
	ON_MESSAGE(XTPWM_PROPERTYGRID_NOTIFY, OnGridNotify)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CPropertiesPane message handlers

int CPropertiesPane::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	VERIFY(m_wndToolBar.CreateToolBar(WS_TABSTOP|WS_VISIBLE|WS_CHILD|CBRS_TOOLTIPS, this));
	VERIFY(m_wndToolBar.LoadToolBar(IDR_Property_Toolbar));

	if (m_wndPropertyGrid.GetSafeHwnd() == 0)
	{
		m_wndPropertyGrid.Create( CRect(0, 0, 0, 0), this, 0 );
		m_wndPropertyGrid.SetOwner(this);
		m_wndPropertyGrid.HighlightChangedItems(TRUE);
	}

	if(!_OnCreate())
		return -1;

	return 0;
}

void CPropertiesPane::OnSize(UINT nType, int cx, int cy)
{
	CWnd::OnSize(nType, cx, cy);

	int nTop = 0;

	if (m_wndToolBar.GetSafeHwnd())
	{
		CSize sz = m_wndToolBar.CalcDockingLayout(cx, /*LM_HIDEWRAP|*/ LM_HORZDOCK|LM_HORZ | LM_COMMIT);

		m_wndToolBar.MoveWindow(0, nTop, cx, sz.cy);
		m_wndToolBar.Invalidate(FALSE);
		nTop += sz.cy;
	}

	if (m_wndPropertyGrid.GetSafeHwnd())
	{
		m_wndPropertyGrid.MoveWindow(0, nTop, cx, cy - nTop);
		m_wndPropertyGrid.Invalidate(FALSE);
	}
}




void CPropertiesPane::OnPanePropertiesCategorized()
{
	m_wndPropertyGrid.SetPropertySort(xtpGridSortCategorized);

}

void CPropertiesPane::OnUpdatePanePropertiesCategorized(CCmdUI* pCmdUI)
{
	pCmdUI->SetCheck(m_wndPropertyGrid.GetPropertySort() == xtpGridSortCategorized);

}

void CPropertiesPane::OnPanePropertiesAlphabetic()
{
	m_wndPropertyGrid.SetPropertySort(xtpGridSortAlphabetical);

}

void CPropertiesPane::OnUpdatePanePropertiesAlphabetic(CCmdUI* pCmdUI)
{
	pCmdUI->SetCheck(m_wndPropertyGrid.GetPropertySort() == xtpGridSortAlphabetical);

}

void CPropertiesPane::OnSetFocus(CWnd* /*pOldWnd*/)
{
	m_wndPropertyGrid.SetFocus();
}

void CPropertiesPane::UpdateAllFromEngine()
{
	int IDStart = _GetIDStart();
	int IDEnd = _GetIDEnd();
	for (int i=IDStart; i<IDEnd; ++i)
		UpdateProperty(i);
}

void CPropertiesPane::UpdateProperty( int id )
{
	_UpdateProperty(id);
}

void CPropertiesPane::EnableMutableProperty( BOOL bEnable )
{
	int IDStart = _GetIDMutableStart();
	int IDEnd = _GetIDMutableEnd();
	for(int i=IDStart; i<IDEnd; ++i)
		m_mapItem[i]->SetReadOnly(!bEnable);

	_EnableMutableProperty(bEnable);
}

LRESULT CPropertiesPane::OnGridNotify( WPARAM wParam, LPARAM lParam )
{
	if (wParam == XTP_PGN_ITEMVALUE_CHANGED)
	{
		CXTPPropertyGridItem* pItem = (CXTPPropertyGridItem*)lParam;
		const int id = (int)pItem->GetID();
	
		_SetProperty(id);

		//让控件失去焦点
		((CFrameWnd*)AfxGetMainWnd())->GetActiveView()->SetFocus();
	}
	else if (wParam == XTP_PGN_AFTEREDIT)
	{
		//让控件失去焦点
		((CFrameWnd*)AfxGetMainWnd())->GetActiveView()->SetFocus();
	}

	return 0;
}

void CPropertiesPane::UpdateCategoryProperty( int category )
{
	CXTPPropertyGridItems* cats = m_wndPropertyGrid.GetCategories();
	assert(category >=0 && category < cats->GetCount());

	CXTPPropertyGridItems* cat = cats->GetAt(category)->GetChilds();
	for (int i=0; i<cat->GetCount(); ++i)
	{
		int id = cat->GetAt(i)->GetID();
		UpdateProperty(id);
	}
}

void CPropertiesPane::EnableCategory( int category, BOOL bEnable )
{
	CXTPPropertyGridItems* cats = m_wndPropertyGrid.GetCategories();
	assert(category >=0 && category < cats->GetCount());

	CXTPPropertyGridItems* cat = cats->GetAt(category)->GetChilds();
	for (int i=0; i<cat->GetCount(); ++i)
		cat->GetAt(i)->SetReadOnly(!bEnable);
}
