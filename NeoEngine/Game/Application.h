/********************************************************************
	created:	27:11:2013   22:21
	filename	Application.h
	author:		maval

	purpose:	App class
*********************************************************************/
#ifndef Application_h__
#define Application_h__

#include "Prerequiestity.h"
#include "OIS.h"

//------------------------------------------------------------------------------------
class Application
{
public:
	Application();
	~Application();

public:
	void	Init();
	void	Run();
	void	ShutDown();

private:
	bool	_InitWindow();

	// OIS::KeyListener
	bool	OnKeyPressed(const OIS::KeyEvent &arg);

	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

private:
	HINSTANCE				m_hInstance;
	Neo::D3D11RenderSystem*	m_pRenderSystem;
};

#endif // Application_h__