/********************************************************************
	created:	4:4:2013   20:53
	filename	SubclassHelper.h
	author:		maval

	purpose:	window subclassing∏®÷˙¿‡
*********************************************************************/

#ifndef SubclassHelper_h__
#define SubclassHelper_h__

#include "Singleton.h"

template<class TCallee>
class WndSubclassHelper : public Common::CSingleton<WndSubclassHelper<TCallee>>
{
	DECLEAR_SINGLETON(WndSubclassHelper<TCallee>);	
public:
	typedef bool	(TCallee::*NewWndProc)(HWND, UINT, WPARAM, LPARAM, LRESULT&);
	typedef std::tuple<TCallee*, NewWndProc, WNDPROC>	SubclassItem;
	typedef std::unordered_map<HWND, SubclassItem>	Items;

	void	Subclass(HWND hwnd, TCallee* callee, NewWndProc proc)
	{
		WNDPROC origProc = (WNDPROC)SetWindowLongPtrW(hwnd, GWLP_WNDPROC, (LONG_PTR)MyWndProc);
		SubclassItem item = std::make_tuple(callee, proc, origProc);
		m_items.insert(std::make_pair(hwnd, item));
	}
private:
	static LRESULT CALLBACK MyWndProc(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam)
	{
		auto iter = m_items.find(hWnd);
		if (iter != m_items.end())
		{
			auto& item = iter->second;
			LRESULT result;
 			bool processed = (std::get<0>(item)->*std::get<1>(item))(hWnd, uMsg, wParam, lParam, result);
 			if(!processed)
				result = CallWindowProcW(std::get<2>(item), hWnd, uMsg, wParam, lParam);
			return result;
		}

		return ::DefWindowProc(hWnd, uMsg, wParam, lParam);
	}
	
	static Items	m_items;
};


template<class T> 
typename WndSubclassHelper<T>::Items WndSubclassHelper<T>::m_items;

#endif // SubclassHelper_h__







