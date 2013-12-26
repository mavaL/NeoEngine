/********************************************************************
	created:	14:10:2012   9:15
	filename: 	C:\Users\mavaL\Desktop\SceneEdit\SceneEdit\SceneEdit\Application.h
	author:		maval
	
	purpose:	编辑器应用程序框架类
*********************************************************************/

#ifndef Application_h__
#define Application_h__

namespace Ogre
{
	class RenderWindow;
	class Root;
}

struct SActionParam;

class Application
{
public:
	Application();
	~Application() {}

public:
	bool		Init(int width, int height, HWND hwnd, HWND hParent);
	bool		Update();
	void		Shutdown();
	//渲染视口大小改变,进行相应处理
	void		OnViewportResized(int w, int h);

	void		SceneNew();
	void		SceneOpen();
	void		SceneSave();
	bool		SceneClose();

	void		OnLButtonDown(const POINT& pt);
	void		OnLButtonUp(const POINT& pt);
	void		OnRButtonDown(const POINT& pt);
	void		OnRButtonUp(const POINT& pt);
	void		OnMouseMove(const POINT& pt);
	void		OnMouseWheel(short nNotch);
	void		OnKeyDown(UINT nChar);
	void		OnKeyUp(UINT nChar);

private:
	void		_UpdateInput(float dt);
	void		_CreateActionParam(const POINT& viewClientPt, SActionParam& retParam);

private:
	int			m_appSnapshot;
};

#endif // Application_h__


