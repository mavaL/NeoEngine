#include "stdafx.h"
#include "Application.h"
#include "Scene.h"
#include "Renderer.h"
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

	g_env.pRenderer = new Neo::Renderer;
	if (!g_env.pRenderer->Init(SCREEN_WIDTH, SCREEN_HEIGHT, g_env.hwnd))
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
	g_env.pRenderer->ShutDown();
	SAFE_DELETE(g_env.pRenderer);
}
//----------------------------------------------------------------------------------------
bool Application::_InitWindow()
{
	HMODULE hInst = ::GetModuleHandle(nullptr);
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style			= CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInst;
	wcex.hIcon			= nullptr;
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground	= (HBRUSH)(GetStockObject(BLACK_BRUSH));
	wcex.lpszMenuName	= nullptr;
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

	PIXELFORMATDESCRIPTOR pfd =						// pfd Tells Windows How We Want Things To Be
	{
		sizeof(PIXELFORMATDESCRIPTOR),				// Size Of This Pixel Format Descriptor
		1,											// Version Number
		PFD_DRAW_TO_WINDOW |						// Format Must Support Window
		PFD_SUPPORT_OPENGL |						// Format Must Support OpenGL
		PFD_DOUBLEBUFFER,							// Must Support Double Buffering
		PFD_TYPE_RGBA,								// Request An RGBA Format
		32,											// Select Our Color Depth
		0, 0, 0, 0, 0, 0,							// Color Bits Ignored
		0,											// No Alpha Buffer
		0,											// Shift Bit Ignored
		0,											// No Accumulation Buffer
		0, 0, 0, 0,									// Accumulation Bits Ignored
		16,											// 16Bit Z-Buffer (Depth Buffer)  
		0,											// No Stencil Buffer
		0,											// No Auxiliary Buffer
		PFD_MAIN_PLANE,								// Main Drawing Layer
		0,											// Reserved
		0, 0, 0										// Layer Masks Ignored
	};

	HDC hDC;
	if (!(hDC = GetDC(hWnd)))
		return false;

	unsigned int PixelFormat;
	if (!(PixelFormat = ChoosePixelFormat(hDC, &pfd)))
		return false;

	if (!SetPixelFormat(hDC, PixelFormat, &pfd))
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

			pSceneMgr->GetCamera()->Update(fDeltaTime);
			pSceneMgr->Update(fDeltaTime);
			g_env.pRenderer->Update(fDeltaTime);
			
			pSceneMgr->Render();
			g_env.pRenderer->GetRenderSys()->SwapBuffer();

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
			// Toggle wireframe rendering mode.
			
		}
		break;
	};

	return true;
}





