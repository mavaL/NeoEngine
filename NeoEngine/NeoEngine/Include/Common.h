/********************************************************************
	created:	1:6:2014   18:56
	filename	Common.h
	author:		maval

	purpose:	Common methods define
*********************************************************************/

#ifndef Common_h__
#define Common_h__



inline std::string	GetResPath(const std::string& filename)
{
	std::string filepath("../../../Res/");
	filepath += filename;
	return std::move(filepath);
}

inline bool Equal(float a, float b)
{
	return fabs(a - b) < 1e-03;
}


template<class T>
inline void Swap(T& t1, T& t2)
{
	T tmp = t1;
	t1 = t2;
	t2 = tmp;
}

template<class T>
inline T Clamp(const T& val, const T& left, const T& right)
{
	if(val < left)
		return left;
	else if(val > right)
		return right;
	else
		return val;
}

__forceinline int Ceil32_Fast(float x)
{
	const float h = 0.5f;
	int t;

	_asm
	{
		fld	x
			fadd	h
			fistp	t
	}

	return t;
}

__forceinline int Floor32_Fast(float x)
{
	const float h = 0.5f;
	int t;

	_asm
	{
		fld	x
			fsub	h
			fistp	t
	}

	return t;
}

__forceinline int Ftoi32_Fast(float x)
{
	int t;
	_asm
	{
		fld	x
			fistp	t
	}

	return t;

	// SSE?
	//return _mm_cvtt_ss2si(_mm_load_ss(&x)); 
}


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
#define V(x)           { hr = (x); assert(SUCCEEDED(hr)); }
#endif
#ifndef V_RETURN
#define V_RETURN(x)    { hr = (x); if( FAILED(hr) ) { assert(0); return false; } }
#endif
#else
#ifndef V
#define V(x)           { hr = (x); }
#endif
#ifndef V_RETURN
#define V_RETURN(x)    { hr = (x); assert(SUCCEEDED(hr)); }
#endif
#endif

#endif // Common_h__