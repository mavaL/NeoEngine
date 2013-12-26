// PropertiesPane.h : header file
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

#if !defined(AFX_PROPERTIESPANE_H__9A60EAC5_EB5B_4C96_BE70_C9A972B10CDC__INCLUDED_)
#define AFX_PROPERTIESPANE_H__9A60EAC5_EB5B_4C96_BE70_C9A972B10CDC__INCLUDED_

#pragma once

#include "../resource.h"

/////////////////////////////////////////////////////////////////////////////
// CPropertiesPane window

class CPropertiesPane : public CWnd
{
// Construction
public:
	CPropertiesPane();
	virtual ~CPropertiesPane();

// Attributes
public:

	CXTPPropertyGrid m_wndPropertyGrid;
	CXTPToolBar m_wndToolBar;

public:
	//更新所有控件数据
	void			UpdateAllFromEngine();
	//更新某组的控件数据
	void			UpdateCategoryProperty(int category);
	//更新控件数据
	void			UpdateProperty(int id);
	//允许/禁止编辑Mutable数据(ReadOnly数据不需要管,本来就不能编辑)
	void			EnableMutableProperty(BOOL bEnable);
	void			EnableCategory(int category, BOOL bEnable);

protected:
	afx_msg int		OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg LRESULT OnGridNotify(WPARAM, LPARAM);
	afx_msg void	OnSize(UINT nType, int cx, int cy);
	afx_msg void	OnPanePropertiesCategorized();
	afx_msg void	OnUpdatePanePropertiesCategorized(CCmdUI* pCmdUI);
	afx_msg void	OnPanePropertiesAlphabetic();
	afx_msg void	OnUpdatePanePropertiesAlphabetic(CCmdUI* pCmdUI);
	afx_msg void	OnSetFocus(CWnd* pOldWnd);

	DECLARE_MESSAGE_MAP()

protected:
	////////////////////////////////////////////////
	/// 子类选择性重写的实现接口
	virtual	bool	_OnCreate() = 0;
	virtual	void	_SetProperty(int nID) {}
	virtual	void	_UpdateProperty(int nID) {}
	virtual void	_EnableMutableProperty(BOOL bEnable) {}

	virtual int		_GetIDStart() = 0;
	virtual int		_GetIDEnd() = 0;
	virtual int		_GetIDMutableStart() = 0;
	virtual int		_GetIDMutableEnd() = 0;

	std::unordered_map<int, CXTPPropertyGridItem*>	m_mapItem;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROPERTIESPANE_H__9A60EAC5_EB5B_4C96_BE70_C9A972B10CDC__INCLUDED_)
