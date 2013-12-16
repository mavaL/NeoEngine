/********************************************************************
	created:	27:11:2013   22:21
	filename	Application.h
	author:		maval

	purpose:	App class
*********************************************************************/
#ifndef Application_h__
#define Application_h__

#include "Prerequiestity.h"

//------------------------------------------------------------------------------------
class Application
{
public:
	Application();
	~Application();

public:
	void	Init(HINSTANCE hInstance);
	void	Run();
	void	ShutDown();
	void	ToggleScene();
	Camera*	GetCamera()	{ return m_camera; }

private:
	bool	_InitWindow(HINSTANCE hInstance);
	void	_InitAllScene();

	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

private:
	HINSTANCE				m_hInstance;
	std::vector<Scene*>		m_scenes;	
	Scene*					m_pCurScene;
	Neo::D3D11RenderSystem*	m_pRenderSystem;
	Camera*					m_camera;
};

#endif // Application_h__