/********************************************************************
	created:	2013/08/07
	created:	7:8:2013   14:55
	filename: 	Color.h
	author:		maval
	
	purpose:	简单的颜色类
*********************************************************************/
#ifndef Color_h__
#define Color_h__

#include "Prerequiestity.h"
#include "MathDef.h"

static float inv_byte = 1.0f / 255;

namespace Neo
{
	struct SColor 
	{
		SColor() {}
		SColor(float _r, float _g, float _b, float _a = 1.0f):a(_a),r(_r),g(_g),b(_b) {}

		SColor operator* (float k) const;
		SColor& operator*= (float k);
		SColor operator* (const VEC3& v) const;
		SColor& operator*= (const VEC3& v);
		SColor& operator+= (const SColor& c);
		SColor& operator*= (const SColor& c);

		void	Set(float _r, float _g, float _b, float _a = 1.0f);
		void	Saturate();
		void	SetAsInt(DWORD color);
		DWORD	GetAsInt() const;

		float	r, g, b, a;

		static SColor WHITE;
		static SColor BLACK;
		static SColor BLUE;
		static SColor RED;
		static SColor YELLOW;
		static SColor NICE_BLUE;
	};

	__forceinline void SColor::Set( float _r, float _g, float _b, float _a /*= 1.0f*/ )
	{
		a = _a; r = _r; g = _g; b = _b;
	}

	__forceinline void m128_to_color(SColor& out, __m128 V)
	{
		__m128 T1 = _mm_shuffle_ps(V,V,_MM_SHUFFLE(1,1,1,1));
		__m128 T2 = _mm_shuffle_ps(V,V,_MM_SHUFFLE(2,2,2,2));
		_mm_store_ss( &out.r, V );
		_mm_store_ss( &out.g, T1 );
		_mm_store_ss( &out.b, T2 );
	}

	__forceinline SColor SColor::operator*( float k ) const
	{
		SColor result = *this;
		result *= k;
		return std::move(result);
	}

	__forceinline SColor SColor::operator*( const VEC3& v ) const
	{
		SColor result = *this;
		result *= v;
		return std::move(result);
	}

	__forceinline SColor& SColor::operator*=( float k )
	{
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(a, b, g, r);
		__m128 V2 =  _mm_set_ps1(k);
		m128_to_color(*this, _mm_mul_ps( V1, V2 ));
#else
		a *= k;
		r *= k;
		g *= k;
		b *= k;
#endif
		return *this;
	}

	__forceinline SColor& SColor::operator*=( const VEC3& v )
	{
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(a, b, g, r);
		__m128 V2 =  _mm_set_ps(1.0f, v.z, v.y, v.x);
		m128_to_color(*this, _mm_mul_ps( V1, V2 ));
#else
		r *= v.x;
		g *= v.y;
		b *= v.z;
#endif
		return *this;
	}

	__forceinline SColor& SColor::operator*=( const SColor& c )
	{
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(a, b, g, r);
		__m128 V2 =  _mm_set_ps(c.a, c.b, c.g, c.r);
		m128_to_color(*this, _mm_mul_ps( V1, V2 ));
#else
		a *= c.a;
		r *= c.r;
		g *= c.g;
		b *= c.b;
#endif
		return *this;
	}

	__forceinline SColor& SColor::operator+=( const SColor& c )
	{
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(a, b, g, r);
		__m128 V2 =  _mm_set_ps(c.a, c.b, c.g, c.r);
		m128_to_color(*this, _mm_add_ps( V1, V2 ));
#else
		a += c.a;
		r += c.r;
		g += c.g;
		b += c.b;
#endif
		return *this;
	}

	__forceinline void SColor::Saturate()
	{
		a = Clamp(a, 0.0f, 1.0f);
		r = Clamp(r, 0.0f, 1.0f);
		g = Clamp(g, 0.0f, 1.0f);
		b = Clamp(b, 0.0f, 1.0f);
	}

	__forceinline void SColor::SetAsInt( DWORD color )
	{
		a = ((color >> 24) & 0xff) * inv_byte;
		r = ((color >> 16) & 0xff) * inv_byte;
		g = ((color >> 8) & 0xff) * inv_byte;
		b = ((color >> 0) & 0xff) * inv_byte;
	}

	__forceinline DWORD SColor::GetAsInt() const
	{
#if USE_SIMD == 1
		VEC4 c;
		__m128 V1 =  _mm_set_ps(a, b, g, r);
		__m128 V2 =  _mm_set_ps1(255.0f);
		Common::m128_to_vec4(c, _mm_mul_ps( V1, V2 ));

		BYTE tmp_a = Ftoi32_Fast(c.w);
		BYTE tmp_r = Ftoi32_Fast(c.x);
		BYTE tmp_g = Ftoi32_Fast(c.y);
		BYTE tmp_b = Ftoi32_Fast(c.z);
#else
		BYTE tmp_a = Ftoi32_Fast(a * 255);
		BYTE tmp_r = Ftoi32_Fast(r * 255);
		BYTE tmp_g = Ftoi32_Fast(g * 255);
		BYTE tmp_b = Ftoi32_Fast(b * 255);
#endif
		DWORD ret = (tmp_a << 24) + (tmp_r << 16) + (tmp_g << 8) + (tmp_b);

		return ret;
	}
}

#endif // Color_h__