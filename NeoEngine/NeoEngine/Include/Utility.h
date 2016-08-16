/********************************************************************
	created:	1:6:2014   18:56
	filename	Common.h
	author:		maval

	purpose:	Common methods define
*********************************************************************/

#ifndef Common_h__
#define Common_h__

#include <random>

inline std::string	GetResPath(const std::string& filename)
{
	std::string filepath("../../../Res/");
	filepath += filename;
	return std::move(filepath);
}

// Return a random number in [0, 1]
inline float RandomFloat(int range)
{
	std::random_device rd;
	return (rd() % (range + 1)) / (float)range;
}

// Return a random float in [fMin, fMax]
inline float RandomRange(float fMin, float fMax, int range)
{
	std::random_device rd;
	return fMin + (fMax - fMin) * RandomFloat(range);
}

// swap variables of any type
template<typename Type>
inline void Swap(Type &A, Type &B)
{
	Type C = A;
	A = B;
	B = C;
}

// clamp variables of any type
template<typename Type>
inline Type Clamp(const Type &A, const Type &Min, const Type &Max)
{
	if (A < Min) return Min;
	if (A > Max) return Max;
	return A;
}

// return smaller of the given variables
template<typename Type>
inline Type Min(const Type &A, const Type &B)
{
	if (A < B) return A;
	return B;
}

// return larger of the given variables
template<typename Type>
inline Type Max(const Type &A, const Type &B)
{
	if (A > B) return A;
	return B;
}

std::wstring	EngineToUnicode(const char* src);
std::wstring	EngineToUnicode(const std::string& src);
std::string		UnicodeToEngine(const WCHAR* src);
std::string		UnicodeToEngine(const std::wstring& src);


#ifndef SAFE_DELETE
#define SAFE_DELETE(p) if(p) { delete p; p=nullptr; }
#endif

#ifndef SAFE_RELEASE
#define SAFE_RELEASE(p) if(p) { p->Release(); p=nullptr; }
#endif

#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(p) if(p) { delete []p; p=nullptr; }
#endif

#if defined(DEBUG) || defined(_DEBUG)
#ifndef V
#define V(x)           { hr = (x); _AST(SUCCEEDED(hr)); }
#endif
#ifndef V_RETURN
#define V_RETURN(x)    { hr = (x); if( FAILED(hr) ) { _AST(0); return false; } }
#endif
#else
#ifndef V
#define V(x)           { hr = (x); }
#endif
#ifndef V_RETURN
#define V_RETURN(x)    { hr = (x); }
#endif
#endif

#endif // Common_h__