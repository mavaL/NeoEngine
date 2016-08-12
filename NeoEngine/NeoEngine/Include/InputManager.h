#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include "Singleton.h"
#include <SimpleSignal.h>

namespace Neo
{

	//输入事件优先级,由高到低
	enum eInputEventPriority
	{
		eInputEventPriority_GUI			=	0,		//GUI事件响应
		eInputEventPriority_Targeting	=	1,		//鼠标选择目标
		eInputEventPriority_default		=	2,
		eInputEventPriority_Count
	};

	enum eInputEvent
	{
		eInputEvent_MouseMove,
		eInputEvent_MouseBtnDown,
		eInputEvent_MouseBtnUp,
		eInputEvent_KeyDown,
		eInputEvent_KeyUp,
		eInputEvent_Count
	};

	/*------------------------------------------------
					键盘鼠标输入管理类
	-------------------------------------------------*/

	class CInputManager : public Common::CSingleton<CInputManager>, public OIS::MouseListener, public OIS::KeyListener
	{
		DECLEAR_SINGLETON(CInputManager);
		CInputManager();
		~CInputManager();

		typedef std::function<bool(const OIS::MouseEvent&)> MouseMoveHandler;
		typedef std::function<bool(const OIS::MouseEvent&, OIS::MouseButtonID)> MouseBtnHandler;
		typedef std::function<bool(const OIS::KeyEvent&)> KeyHandler;

	public:
		bool Init();
		void Shutdown();
		bool IsInit() { return m_bIsInit; }
		//捕获输入设备
		void Capture();
		OIS::Mouse*	GetMouse()	{ return mMouse; }

		Common::Signal<bool(const OIS::MouseEvent&)> m_MouseMoveSignal;
		Common::Signal<bool(const OIS::MouseEvent&, OIS::MouseButtonID)> m_MousePressedSignal;
		Common::Signal<bool(const OIS::MouseEvent&, OIS::MouseButtonID)> m_MouseReleasedSignal;
		Common::Signal<bool(const OIS::KeyEvent&)> m_KeyPressedSignal;
		Common::Signal<bool(const OIS::KeyEvent&)> m_KeyReleasedSignal;

	private:
		OIS::InputManager* mInputManager;
		OIS::Mouse*    mMouse;
		OIS::Keyboard* mKeyboard;
		bool			m_bIsInit;

		// OIS::MouseListener
		virtual bool mouseMoved( const OIS::MouseEvent &arg ) { return m_MouseMoveSignal.emit(arg); }
		virtual bool mousePressed(const OIS::MouseEvent &arg, OIS::MouseButtonID id) { return m_MousePressedSignal.emit(arg, id); }
		virtual bool mouseReleased(const OIS::MouseEvent &arg, OIS::MouseButtonID id) { return m_MouseReleasedSignal.emit(arg, id); }
		// OIS::KeyListener
		virtual bool keyPressed(const OIS::KeyEvent &arg) { return m_KeyPressedSignal.emit(arg); }
		virtual bool keyReleased(const OIS::KeyEvent &arg) { return m_KeyReleasedSignal.emit(arg); }
	};

}


#endif
