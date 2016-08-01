#include "stdafx.h"
#include "Application.h"
#include "Scene.h"
#include "D3D11RenderSystem.h"
#include "MathDef.h"
#include "SceneManager.h"
#include "Camera.h"

SGlobalEnv			g_env;

static const uint32	SCREEN_WIDTH	=	1024;
static const uint32	SCREEN_HEIGHT	=	768;
//----------------------------------------------------------------------------------------
Application::Application()
:m_hInstance(nullptr)
,m_pRenderSystem(nullptr)
{

}
//----------------------------------------------------------------------------------------
Application::~Application()
{
	
}
//----------------------------------------------------------------------------------------
void Application::Init()
{
	if(!_InitWindow())
	{
		assert(0);
		return;
	}

	m_pRenderSystem = new Neo::D3D11RenderSystem;
	g_env.pRenderSystem = m_pRenderSystem;

	if(!m_pRenderSystem->Init(SCREEN_WIDTH, SCREEN_HEIGHT, g_env.hwnd))
	{
		assert(0);
		return;
	}

	g_env.pFrameStat = new Neo::SFrameStat;

	g_env.pSceneMgr = new Neo::SceneManager;
	g_env.pSceneMgr->Init();
	g_env.pSceneMgr->ToggleScene();
}
//----------------------------------------------------------------------------------------
void Application::ShutDown()
{
	SAFE_DELETE(g_env.pSceneMgr);

	m_pRenderSystem->ShutDown();
	SAFE_DELETE(m_pRenderSystem);
}
//----------------------------------------------------------------------------------------
bool Application::_InitWindow()
{
	HMODULE hInst = ::GetModuleHandle(nullptr);
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInst;
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
		windowLeft, windowTop, realWidth, realHeight, NULL, NULL, hInst, NULL);

	if (!hWnd)
		return false;

	g_env.hwnd = hWnd;

	ShowWindow(hWnd, SW_SHOWNORMAL);
	UpdateWindow(hWnd);

	return true;
}
//----------------------------------------------------------------------------------------
LRESULT CALLBACK Application::WndProc( HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam )
{
	PAINTSTRUCT ps;
	Neo::SceneManager* pSceneMgr = g_env.pSceneMgr;

	switch (message)
	{
	case WM_PAINT:
		BeginPaint(hWnd, &ps);
		EndPaint(hWnd, &ps);
		break;

	case WM_LBUTTONDOWN:
		if (!pSceneMgr->GetCamera()->GetManualControl())
		{
			pSceneMgr->GetCamera()->SetActive(true);
		}
		return 0;

	case WM_LBUTTONUP:
		if (!pSceneMgr->GetCamera()->GetManualControl())
		{
			pSceneMgr->GetCamera()->SetActive(false);
		}
		return 0;

	case WM_KEYDOWN:
		{
			switch (wParam)
			{
			case VK_ADD:
				{
					pSceneMgr->GetCamera()->AddMoveSpeed(1.0f);
					return 0;
				}
				break;
			case VK_SUBTRACT:
				{
					pSceneMgr->GetCamera()->AddMoveSpeed(-0.2f);
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
			switch (wParam)
			{
			case 't':
				{
					g_env.pSceneMgr->ToggleScene();
				}
				break;

			case 'r':
				{
					// Toggle fill mode
					D3D11_RASTERIZER_DESC& rasDesc = g_env.pRenderSystem->GetRasterizeDesc();
					rasDesc.FillMode = (rasDesc.FillMode==D3D11_FILL_SOLID?D3D11_FILL_WIREFRAME:D3D11_FILL_SOLID);
					g_env.pRenderSystem->SetRasterizeDesc(rasDesc);
				}
				break;
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
			DWORD curTime = ::GetTickCount();
			static DWORD lastTime = curTime;
			
			const float fDeltaTime = (curTime - lastTime) / 1000.0f;

			// Render a frame during idle time (no messages are waiting)
			Neo::SceneManager* pSceneMgr = g_env.pSceneMgr;

			pSceneMgr->GetCamera()->Update();
			pSceneMgr->Update(fDeltaTime);
			m_pRenderSystem->Update(fDeltaTime);
			
			m_pRenderSystem->BeginScene();
			pSceneMgr->Render();
			m_pRenderSystem->EndScene();

			lastTime = curTime;
		}
	}
}





