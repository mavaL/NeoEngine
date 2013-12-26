
// SceneEdit.h : SceneEdit 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号
#include "Application.h"


// CSceneEditApp:
// 有关此类的实现，请参阅 SceneEdit.cpp
//

class CSceneEditApp : public CWinApp
{
public:
	CSceneEditApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现

private:
	DECLARE_MESSAGE_MAP()
	afx_msg void	OnAppAbout();
	afx_msg void	OnFileNew();
	afx_msg void	OnFileOpen();
	afx_msg void	OnFileSave();
	afx_msg void	OnFileClose();

public:
	Application		m_app;
};

extern CSceneEditApp theApp;
