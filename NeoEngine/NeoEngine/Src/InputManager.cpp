#include "stdafx.h"
#include "InputManager.h"
#include "D3D11RenderSystem.h"
#include <sstream>

namespace Neo
{

	CInputManager::CInputManager(void)
		: mInputManager(0)
		, mMouse(0)
		, mKeyboard(0)
		, m_bIsInit(false)
	{
		g_env.pInputSystem = this;
	}

	CInputManager::~CInputManager(void)
	{
	}

	bool CInputManager::Init()
	{
		OIS::ParamList pl;
		std::ostringstream winHandleStr;
		size_t hwnd = (size_t)g_env.hwnd;
		winHandleStr << hwnd;
		
		pl.insert(std::make_pair("WINDOW", winHandleStr.str()));

		mInputManager = OIS::InputManager::createInputSystem( pl );
		if(mInputManager == NULL)
			return false;

		mKeyboard = static_cast<OIS::Keyboard*>(mInputManager->createInputObject( OIS::OISKeyboard, true ));
		mMouse = static_cast<OIS::Mouse*>(mInputManager->createInputObject( OIS::OISMouse, true ));
		if(!mKeyboard || !mMouse)
		{
			Shutdown();
			return false;
		}

		OIS::MouseState& mouseState = const_cast<OIS::MouseState&>(mMouse->getMouseState());
		mouseState.width = g_env.pRenderSystem->GetWndWidth();
		mouseState.height = g_env.pRenderSystem->GetWndHeight();
		mouseState.X.abs = mouseState.width / 2;
		mouseState.Y.abs = mouseState.height / 2;

		mKeyboard->setEventCallback(this);
		mMouse->setEventCallback(this);
		m_bIsInit = true;

		return true;
	}

	void CInputManager::Capture()
	{
		//每帧捕获输入设备,才能接受到事件
		mKeyboard->capture();
		mMouse->capture();
	}

	void CInputManager::Shutdown()
	{
		if( mInputManager )
		{
			mInputManager->destroyInputObject( mMouse );
			mInputManager->destroyInputObject( mKeyboard );

			OIS::InputManager::destroyInputSystem(mInputManager);
			mMouse = 0;
			mKeyboard = 0;
			mInputManager = 0;
		}
	}
}


