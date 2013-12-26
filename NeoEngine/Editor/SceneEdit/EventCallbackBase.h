/********************************************************************
	created:	30:4:2013   21:43
	filename	EventCallbackBase.h
	author:		maval

	purpose:	事件回调基类
*********************************************************************/

#ifndef EventCallbackBase_h__
#define EventCallbackBase_h__


////////////////////////////////////////////////////////////////////////
///事件回调管理器
template<class TBase>
class EventCallbackManager : public TBase
{
public:
	EventCallbackManager() {}
	virtual ~EventCallbackManager() {}

public:
	void	AddCallback(TBase* pCB);
	void	RemoveCallback(TBase* pCB);
	void	RemoveAllCallbacks();
	//对所有注册的监听者执行回调
	//这样写是为了解除派生类对m_listeners的耦合
	template<class Func> void	Excute(Func&& fun)
	{
		std::for_each(m_listeners.begin(), m_listeners.end(), fun);
	}

private:
	typedef std::list<TBase*>	lstListeners;
	lstListeners	m_listeners;
};

template<class T> void EventCallbackManager<T>::AddCallback( T* pCB )
{
	assert(std::find(m_listeners.begin(), m_listeners.end(), pCB) == m_listeners.end() && "The callback had already registered!");
	m_listeners.push_back(pCB);
}

template<class T> void EventCallbackManager<T>::RemoveCallback( T* pCB )
{
	auto iter = std::find(m_listeners.begin(), m_listeners.end(), pCB);
	assert(iter != m_listeners.end() && "The callback didn't registered!");
	m_listeners.erase(iter);
}

template<class T> void EventCallbackManager<T>::RemoveAllCallbacks()
{
	m_listeners.clear();
}

////////////////////////////////////////////////////////////////////////
///事件回调基类
class EventCallbackBase
{
public:
	virtual ~EventCallbackBase() {}
};

#endif // EventCallbackBase_h__