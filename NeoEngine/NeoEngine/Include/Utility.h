/********************************************************************
	created:	9:7:2013   22:15
	filename	Utility.h
	author:		maval

	purpose:	实用工具,杂七杂八
*********************************************************************/
#ifndef Utility_h__
#define Utility_h__

#include "Prerequiestity.h"


namespace Ext
{
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

	//线性插值
	template<class T>
	inline void LinearLerp(T& result, const T& s, const T& e, float t)
	{
		result = s + (e - s) * t;
	}
	//双曲型插值(Hyperbolic Interpolation),用于透视校正
	template<class T>
	inline void HyperLerp(T& result, const T& s, const T& e, float t, float ws, float we)
	{
		T tmp_s = s * ws;
		T tmp_e = e * we;
		result = tmp_s + (tmp_e - tmp_s) * t;
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

	//计算三角形面积
	float			CalcAreaOfTriangle(const VEC2& p1, const VEC2& p2, const VEC2& p3);

	std::wstring	AnsiToUnicode(const char* src);
	STRING			UnicodeToEngine(const WCHAR* src);

	//获取逻辑CPU个数
	DWORD			GetLogicalCpuCount();
}

#endif // Utility_h__