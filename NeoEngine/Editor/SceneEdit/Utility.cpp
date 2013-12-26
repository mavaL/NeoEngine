#include "stdafx.h"
#include "Utility.h"
#include "objbase.h"

namespace Utility
{
	std::wstring EngineToUnicode(const char* src)
	{
		WCHAR dest[MAX_PATH];
		MultiByteToWideChar( CP_ACP, 0, src,
			strlen(src)+1, dest, sizeof(dest)/sizeof(dest[0]) );

		return std::wstring(dest);
	}

	std::wstring EngineToUnicode(const STRING& src)
	{
		return EngineToUnicode(src.c_str());
	}

	STRING UnicodeToEngine(const WCHAR* src)
	{
		char dest[MAX_PATH];
		WideCharToMultiByte( CP_ACP, 0, src, -1,
			dest, MAX_PATH, NULL, NULL );

		return dest;
	}

	STRING UnicodeToEngine(const std::wstring& src)
	{
		return UnicodeToEngine(src.c_str());
	}

	std::wstring FloatToString_CutPrecision( float f )
	{
// 		std::wstring str = Utility::EngineToUnicode(Ogre::StringConverter::toString(f));
// 		return StringCutPrecision(str.c_str());
		return L"0";
	}

	std::wstring StringCutPrecision( const CString& strFloat )
	{
// 		assert(Ogre::StringConverter::parseReal(UnicodeToEngine(strFloat), 10000) != 10000 && "Error! Input string invalid.");
// 
// 		std::wstring str = strFloat;
// 		size_t cutPos = str.find('.');
// 		if(cutPos != std::wstring::npos)
// 		{
// 			cutPos += 3;
// 			if (cutPos < str.length()-1)
// 				str = str.substr(0, cutPos);
// 		}
// 
// 		return str;
		return L"0";
	}

	int GenGUID()
	{
		GUID guid;
		if (S_OK == ::CoCreateGuid(&guid))
		{
			return *(int*)&guid;
		}
		assert(0);
		return 0;
	}

}