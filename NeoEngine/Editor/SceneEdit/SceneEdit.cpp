#include "stdafx.h"
#include "afxwinappex.h"
#include "afxdialogex.h"
#include "SceneEdit.h"
#include "MainFrm.h"

#include "Application.h"
#include "EditorDefine.h"



// CSceneEditApp

BEGIN_MESSAGE_MAP(CSceneEditApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &CSceneEditApp::OnAppAbout)
	ON_COMMAND(ID_FILE_NEW, CSceneEditApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CSceneEditApp::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE, CSceneEditApp::OnFileSave)
	ON_COMMAND(ID_FILE_CLOSE, CSceneEditApp::OnFileClose)
END_MESSAGE_MAP()


// CSceneEditApp 构造

CSceneEditApp::CSceneEditApp()
{
	// 支持重新启动管理器
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;
#ifdef _MANAGED
	// 如果应用程序是利用公共语言运行时支持(/clr)构建的，则:
	//     1) 必须有此附加设置，“重新启动管理器”支持才能正常工作。
	//     2) 在您的项目中，您必须按照生成顺序向 System.Windows.Forms 添加引用。
	System::Windows::Forms::Application::SetUnhandledExceptionMode(System::Windows::Forms::UnhandledExceptionMode::ThrowException);
#endif

	// TODO: 将以下应用程序 ID 字符串替换为唯一的 ID 字符串；建议的字符串格式
	//为 CompanyName.ProductName.SubProduct.VersionInformation
	SetAppID(_T("SceneEdit.AppID.NoVersion"));

	// TODO: 在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}

// 唯一的一个 CSceneEditApp 对象

CSceneEditApp theApp;

ULONG_PTR g_gdiplusToken;

BOOL CSceneEditApp::InitInstance()
{
// 	// 如果一个运行在 Windows XP 上的应用程序清单指定要
// 	// 使用 ComCtl32.dll 版本 6 或更高版本来启用可视化方式，
// 	//则需要 InitCommonControlsEx()。否则，将无法创建窗口。
// 	INITCOMMONCONTROLSEX InitCtrls;
// 	InitCtrls.dwSize = sizeof(InitCtrls);
// 	// 将它设置为包括所有要在应用程序中使用的
// 	// 公共控件类。
// 	InitCtrls.dwICC = ICC_WIN95_CLASSES;
// 	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


//	EnableTaskbarInteraction(FALSE);

	// 使用 RichEdit 控件需要  AfxInitRichEdit2()	
	// AfxInitRichEdit2();

	// 标准初始化
	// 如果未使用这些功能并希望减小
	// 最终可执行文件的大小，则应移除下列
	// 不需要的特定初始化例程
	// 更改用于存储设置的注册表项
	// TODO: 应适当修改该字符串，
	// 例如修改为公司或组织名
	SetRegistryKey(_T("应用程序向导生成的本地应用程序"));

	//初始化OLE
	OleInitialize(NULL);

	//初始化GDI+
	Gdiplus::GdiplusStartupInput gdiplusStartupInput;
	GdiplusStartup(&g_gdiplusToken, &gdiplusStartupInput, NULL);

	CMainFrame* pFrame = new CMainFrame;
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;
	// 创建并加载框架及其资源
	pFrame->LoadFrame(IDR_MAINFRAME, WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, NULL, NULL);

	///////////////////////////////////////////
	///////////////////////////初始化主程序
	CView* pView = pFrame->GetActiveView();
	RECT rect;
	pView->GetClientRect(&rect);

	if(!m_app.Init(rect.right-rect.left, rect.bottom-rect.top, pView->GetSafeHwnd(), m_pMainWnd->GetSafeHwnd()))
	{
		MessageBoxW(nullptr, L"Failed to init the app!", L"Fatal Error", MB_OK | MB_ICONERROR);
		return FALSE;
	}

	///////////////////////////////////////////
	///////////////////////////初始化编辑器UI
	if(!pFrame->CreateEditorMainUI())
		return FALSE;

	///////////////////////////////////////////
	///////////////////////////初始化完毕,开始渲染...
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	//pFrame->SetForegroundWindow();

	pFrame->SetTimer(0, (UINT)10, NULL);

	return TRUE;
}

int CSceneEditApp::ExitInstance()
{
	//GdiplusShutdown(g_gdiplusToken);
	OleUninitialize();
	return CWinApp::ExitInstance();
}

// CSceneEditApp 消息处理程序


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()

// 用于运行对话框的应用程序命令
void CSceneEditApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

void CSceneEditApp::OnFileNew()
{
	m_app.SceneNew();
}

void CSceneEditApp::OnFileOpen()
{
	m_app.SceneOpen();
}

void CSceneEditApp::OnFileSave()
{
	m_app.SceneSave();
}

void CSceneEditApp::OnFileClose()
{
	m_app.SceneClose();
}

// CSceneEditApp 消息处理程序



