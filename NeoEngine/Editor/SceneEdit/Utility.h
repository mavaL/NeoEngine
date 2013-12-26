/********************************************************************
	created:	9:1:2013   1:49
	filename: 	Utility.h
	author:		maval
	
	purpose:	杂七杂八
*********************************************************************/

#ifndef Utility_h__
#define Utility_h__



#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p) { delete p; p=NULL; } }
#endif

#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(a) { if(p) { delete []p; p=NULL; } }
#endif

namespace Utility
{
	std::wstring	EngineToUnicode(const char* src);
	std::wstring	EngineToUnicode(const STRING& src);
	STRING			UnicodeToEngine(const WCHAR* src);
	STRING			UnicodeToEngine(const std::wstring& src);

	//截取至小数点后两位
	std::wstring	FloatToString_CutPrecision(float f);
	std::wstring	StringCutPrecision(const CString& strFloat);

	//获取GUID
	int				GenGUID();

	//获取数值正负号
	template<typename T>
	T GetSign(T val)
	{
		if (val == 0)
		{
			return 0;
		}
		return val > 0 ? 1 : -1;
	}

	class WorkingDirectory
	{
	public:
		WorkingDirectory(const WCHAR* szNewDir)
		{
			::GetCurrentDirectoryW(MAX_PATH, m_oldDir);
			::SetCurrentDirectoryW(szNewDir);

		}
		WorkingDirectory()
		{
			::GetCurrentDirectoryW(MAX_PATH, m_oldDir);
		}
		~WorkingDirectory()
		{
			::SetCurrentDirectoryW(m_oldDir);
		}
	private:
		WCHAR	m_oldDir[MAX_PATH];
	};
}

//编译期断言
template<bool> struct Static_Assert;
template<> struct Static_Assert<true> {};

//注册proerty
#define PROPERTY_REG(category, type, name, value, id)	\
{	\
	CXTPPropertyGridItem* pItem = category->AddChildItem(new CXTPPropertyGridItem##type(name, value));	\
	pItem->SetID(id);								\
	pItem->SetReadOnly(TRUE);						\
	m_mapItem.insert(std::make_pair(id, pItem));	\
}


#endif // Utility_h__



