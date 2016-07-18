#include "stdafx.h"
#include "Utility.h"


std::wstring EngineToUnicode(const char* src)
{
	WCHAR dest[MAX_PATH];
	MultiByteToWideChar(CP_ACP, 0, src,
		strlen(src) + 1, dest, sizeof(dest) / sizeof(dest[0]));

	return std::wstring(dest);
}

std::wstring EngineToUnicode(const std::string& src)
{
	return EngineToUnicode(src.c_str());
}

std::string UnicodeToEngine(const WCHAR* src)
{
	char dest[MAX_PATH];
	WideCharToMultiByte(CP_ACP, 0, src, -1,
		dest, MAX_PATH, NULL, NULL);

	return std::string(dest);
}

std::string UnicodeToEngine(const std::wstring& src)
{
	return UnicodeToEngine(src.c_str());
}