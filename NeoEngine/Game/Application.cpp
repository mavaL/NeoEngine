#include "stdafx.h"
#include "Application.h"
#include "Scene.h"
#include "D3D11RenderSystem.h"
#include "MathDef.h"
#include "SceneManager.h"
#include "Camera.h"
#include "InputManager.h"

SGlobalEnv			g_env;

static const uint32	SCREEN_WIDTH	=	1536;
static const uint32	SCREEN_HEIGHT	=	864;
//----------------------------------------------------------------------------------------
Application::Application()
: m_hInstance(nullptr)
, m_pRenderSystem(nullptr)
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

	Neo::CInputManager::GetSingleton().Init();

	g_env.pInputSystem->m_KeyPressedSignal += Common::slot(this, &Application::OnKeyPressed);

	g_env.pFrameStat = new Neo::SFrameStat;

	g_env.pSceneMgr = new Neo::SceneManager;
	g_env.pSceneMgr->Init();
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

			Neo::CInputManager::GetSingleton().Capture();

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

bool Application::OnKeyPressed(const OIS::KeyEvent &arg)
{
	switch (arg.key)
	{
	case OIS::KC_ADD:		g_env.pSceneMgr->SetShadowDepthBias(g_env.pSceneMgr->GetShadowDepthBias()+0.001); break;
	case OIS::KC_SUBTRACT:	g_env.pSceneMgr->SetShadowDepthBias(g_env.pSceneMgr->GetShadowDepthBias()-0.001); break;
	case OIS::KC_ESCAPE:	DestroyWindow(g_env.hwnd); break;
	case OIS::KC_F1:
		{
			Neo::Camera* pCam = g_env.pSceneMgr->GetCamera();
			pCam->SetManualControl(!pCam->GetManualControl());
		}
		break;

	case OIS::KC_T:			g_env.pSceneMgr->ToggleScene(); break;

	case OIS::KC_R:
		{
			// Toggle fill mode
			//Neo::SStateRaster rasterState = g_env.pRenderSystem->GetCurRasterState();
			//rasDesc.FillMode = (rasDesc.FillMode == D3D11_FILL_SOLID ? D3D11_FILL_WIREFRAME : D3D11_FILL_SOLID);
			//g_env.pRenderSystem->SetRasterizeDesc(rasDesc);
		}
		break;
	};

	return true;
}





