#include "stdafx.h"
#include "Application.h"
#include "Scene.h"
#include "D3D11RenderSystem.h"
#include "Camera.h"
#include "MathDef.h"
#include "GeometryDef.h"
#include "SceneManager.h"


//----------------------------------------------------------------------------------------
Application::Application()
:m_pCurScene(nullptr)
,m_hInstance(nullptr)
,m_camera(nullptr)
,m_pRenderSystem(nullptr)
{

}
//----------------------------------------------------------------------------------------
Application::~Application()
{
	
}
//----------------------------------------------------------------------------------------
void Application::Init(HINSTANCE hInstance)
{
	if(!_InitWindow(hInstance))
	{
		assert(0);
		return;
	}

	m_pRenderSystem = new Neo::D3D11RenderSystem;
	if(!m_pRenderSystem->Init(g_env.hwnd))
	{
		assert(0);
		return;
	}
	g_env.pRenderSystem = m_pRenderSystem;
	g_env.pSceneMg = new Neo::SceneManager;

	m_camera = new Camera;

	_InitAllScene();
	ToggleScene();
}
//----------------------------------------------------------------------------------------
void Application::ShutDown()
{
	std::for_each(m_scenes.begin(), m_scenes.end(), std::default_delete<Scene>());
	m_scenes.clear();

	SAFE_DELETE(m_camera);
	SAFE_DELETE(g_env.pSceneMg);

	m_pRenderSystem->ShutDown();
	SAFE_DELETE(m_pRenderSystem);
}
//----------------------------------------------------------------------------------------
bool Application::_InitWindow(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;
	wcex.hIcon			= nullptr;
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground	= (HBRUSH)(GetStockObject(BLACK_BRUSH));
	wcex.lpszMenuName	= /*MAKEINTRESOURCE(IDC_THISISASOFTRENDERER)*/nullptr;
	wcex.lpszClassName	= "NeoEngineWndClass";
	wcex.hIconSm		= nullptr;

	if(!RegisterClassEx(&wcex))
		return false;

	//调整真正渲染窗口大小
	RECT rcClient;
	rcClient.top = 0;
	rcClient.left = 0;
	rcClient.right = SCREEN_WIDTH;
	rcClient.bottom = SCREEN_HEIGHT;

	DWORD style = WS_SYSMENU | WS_BORDER | WS_CAPTION | WS_CLIPCHILDREN | WS_CLIPSIBLINGS;

	AdjustWindowRect(&rcClient, style, FALSE);

	const int realWidth = rcClient.right - rcClient.left;
	const int realHeight = rcClient.bottom - rcClient.top;

	int windowLeft = (GetSystemMetrics(SM_CXSCREEN) - realWidth) / 2;
	int windowTop = (GetSystemMetrics(SM_CYSCREEN) - realHeight) / 2;

	HWND hWnd = CreateWindow("NeoEngineWndClass", "TestApp", style,
		windowLeft, windowTop, realWidth, realHeight, NULL, NULL, hInstance, NULL);

	if (!hWnd)
		return false;

	g_env.pApp = this;
	g_env.hwnd = hWnd;

	ShowWindow(hWnd, SW_SHOWNORMAL);
	UpdateWindow(hWnd);

	return true;
}
//----------------------------------------------------------------------------------------
void Application::ToggleScene()
{
	static int curScene = -1;
	++curScene;
	if(curScene == m_scenes.size())
		curScene = 0;

	m_pCurScene = m_scenes[curScene];
	m_pCurScene->Enter();
}
//----------------------------------------------------------------------------------------
LRESULT CALLBACK Application::WndProc( HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam )
{
	PAINTSTRUCT ps;

	switch (message)
	{
	case WM_PAINT:
		BeginPaint(hWnd, &ps);
		EndPaint(hWnd, &ps);
		break;

	case WM_LBUTTONDOWN:
		g_env.pApp->GetCamera()->m_bActive = true;
		return 0;

	case WM_LBUTTONUP:
		g_env.pApp->GetCamera()->m_bActive = false;
		return 0;

	case WM_KEYDOWN:
		{
			switch (wParam)
			{
			case VK_ADD:
				{
					g_env.pApp->GetCamera()->AddMoveSpeed(1.0f);
					return 0;
				}
				break;
			case VK_SUBTRACT:
				{
					g_env.pApp->GetCamera()->AddMoveSpeed(-0.2f);
					return 0;
				}
				break;
			case VK_ESCAPE:
				{
					DestroyWindow(hWnd);	
					return 0;
				}
			default: return DefWindowProc(hWnd, message, wParam, lParam);
			}
		}
		break;

	case WM_CHAR:
		{
			if(wParam == 't')
			{
				g_env.pApp->ToggleScene();
				return 0;
			}
		}
		break;

	case WM_DESTROY:
		{
			PostQuitMessage(0);
		}
		break;

	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}
//----------------------------------------------------------------------------------------
void Application::Run()
{
	MSG msg;
	while (1)
	{
		if (PeekMessage(&msg,NULL,0,0,PM_REMOVE))
		{ 
			if (msg.message == WM_QUIT)
				break;

			TranslateMessage(&msg);
			DispatchMessage(&msg);
		} 
		else
		{
			// Render a frame during idle time (no messages are waiting)
			m_camera->Update();
			_RenderOneFrame();
		}
	}
}
//----------------------------------------------------------------------------------------
void Application::_RenderOneFrame()
{
	m_pRenderSystem->BeginScene();
	m_pCurScene->Render();
	m_pRenderSystem->EndScene();
}





