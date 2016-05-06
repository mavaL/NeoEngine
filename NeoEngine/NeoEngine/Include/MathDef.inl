#ifndef MathDef_inl__
#define MathDef_inl__

namespace Common
{
	//////////// SSE Helper
	__declspec(align(16))
	struct XMVECTORI32 
	{
		union 
		{
			int		i[4];
			__m128	v;
		};
	};

	const XMVECTORI32 g_XMInfinity          = {0x7F800000, 0x7F800000, 0x7F800000, 0x7F800000};
	const XMVECTORI32 g_XMQNaN              = {0x7FC00000, 0x7FC00000, 0x7FC00000, 0x7FC00000};
	const XMVECTORI32 g_XMMask3             = {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000};

	__forceinline void m128_to_vec2(Vector2& out, __m128 V)
	{
		__m128 T = _mm_shuffle_ps( V, V, _MM_SHUFFLE( 1, 1, 1, 1 ) );
		_mm_store_ss( &out.x, V );
		_mm_store_ss( &out.y, T );
	}

	__forceinline void m128_to_vec3(Vector3& out, __m128 V)
	{
		__m128 T1 = _mm_shuffle_ps(V,V,_MM_SHUFFLE(1,1,1,1));
		__m128 T2 = _mm_shuffle_ps(V,V,_MM_SHUFFLE(2,2,2,2));
		_mm_store_ss( &out.x, V );
		_mm_store_ss( &out.y, T1 );
		_mm_store_ss( &out.z, T2 );
	}

	__forceinline void m128_to_vec4(Vector4& out, __m128 V)
	{
		_mm_storeu_ps( &out.x, V );
	}
	////////////////////

	__forceinline float Vector3::Normalize()
	{
#if USE_SIMD == 1
		__m128 V =  _mm_set_ps(0, z, y, x);
		// Perform the dot product on x,y and z only
		__m128 vLengthSq = _mm_mul_ps(V,V);
		__m128 vTemp = _mm_shuffle_ps(vLengthSq,vLengthSq,_MM_SHUFFLE(2,1,2,1));
		vLengthSq = _mm_add_ss(vLengthSq,vTemp);
		vTemp = _mm_shuffle_ps(vTemp,vTemp,_MM_SHUFFLE(1,1,1,1));
		vLengthSq = _mm_add_ss(vLengthSq,vTemp);
		vLengthSq = _mm_shuffle_ps(vLengthSq,vLengthSq,_MM_SHUFFLE(0,0,0,0));
		// Prepare for the division
		__m128 vResult = _mm_sqrt_ps(vLengthSq);
		// Create zero with a single instruction
		__m128 vZeroMask = _mm_setzero_ps();
		// Test for a divide by zero (Must be FP to detect -0.0)
		vZeroMask = _mm_cmpneq_ps(vZeroMask,vResult);
		// Failsafe on zero (Or epsilon) length planes
		// If the length is infinity, set the elements to zero
		vLengthSq = _mm_cmpneq_ps(vLengthSq,g_XMInfinity.v);
		// Divide to perform the normalization
		vResult = _mm_div_ps(V,vResult);
		// Any that are infinity, set to zero
		vResult = _mm_and_ps(vResult,vZeroMask);
		// Select qnan or result based on infinite length
		__m128 vTemp1 = _mm_andnot_ps(vLengthSq,g_XMQNaN.v);
		__m128 vTemp2 = _mm_and_ps(vResult,vLengthSq);
		m128_to_vec3(*this, _mm_or_ps(vTemp1,vTemp2));

		float oLen;
		XMStoreFloat(&oLen, _mm_sqrt_ps(vLengthSq));

		return oLen;
#else
		float mod = sqrtf(x * x + y * y + z * z);
		float invMode = 1 / mod;
		x *= invMode;
		y *= invMode;
		z *= invMode;

		return mod;
#endif
	}

	__forceinline void Matrix44::SetScale( const Vector3& scale )
	{
		m_arr[0][0] = scale.x;
		m_arr[1][1] = scale.y;
		m_arr[2][2] = scale.z;
	}

	__forceinline Matrix44 BuildReflectMatrix(const Plane& p)
	{
		return Matrix44(
			-2 * p.n.x * p.n.x + 1,   -2 * p.n.x * p.n.y,       -2 * p.n.x * p.n.z,       0, 
			-2 * p.n.y * p.n.x,       -2 * p.n.y * p.n.y + 1,   -2 * p.n.y * p.n.z,       0, 
			-2 * p.n.z * p.n.x,       -2 * p.n.z * p.n.y,       -2 * p.n.z * p.n.z + 1,   0, 
			-2 * p.n.x * p.d,         -2 * p.n.y * p.d,         -2 * p.n.z * p.d,         1);
	}

	__forceinline Matrix44	BuildViewMatrix(const Vector3& vEye, Vector3& vLookAt, const Vector3& vUp)
	{
		Vector3 zAxis(Sub_Vec3_By_Vec3(vLookAt, vEye));
		zAxis.Normalize();

		Vector3 xAxis, yAxis;
		xAxis = CrossProduct_Vec3_By_Vec3(vUp, zAxis);
		xAxis.Normalize();

		yAxis = CrossProduct_Vec3_By_Vec3(zAxis, xAxis);
		yAxis.Normalize();

		Matrix44 ret;
		ret.FromAxises(xAxis, yAxis, zAxis);

		ret = ret.Transpose();

		Vector4 trans;
		trans = Transform_Vec3_By_Mat44(vEye, ret, true);
		trans.Neg();
		ret.SetTranslation(trans.GetVec3());

		return ret;
	}

	__forceinline Matrix44	BuildOthroMatrix(float l, float r, float b, float t, float n, float f)
	{
		float    ReciprocalWidth;
		float    ReciprocalHeight;
		Matrix44 ret;

		ReciprocalWidth = 1.0f / (r - l);
		ReciprocalHeight = 1.0f / (t - b);

		ret.SetRow(0, Vector4(ReciprocalWidth + ReciprocalWidth, 0.0f, 0.0f, 0.0f));
		ret.SetRow(1, Vector4(0.0f, ReciprocalHeight + ReciprocalHeight, 0.0f, 0.0f));
		ret.SetRow(2, Vector4(0.0f, 0.0f, 1.0f / (f - n), 0.0f));
		ret.SetRow(3, Vector4(-(l + r) * ReciprocalWidth, -(t + b) * ReciprocalHeight,-ret.m22 * n,1.0f));

		return ret;
	}

	__forceinline void		Add_Vec2_By_Vec2(Vector2& result, const Vector2& v1, const Vector2& v2)
	{
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(0, 0, v1.y, v1.x);
		__m128 V2 =  _mm_set_ps(0, 0, v2.y, v2.x);
		m128_to_vec2(result, _mm_add_ps( V1, V2 ));
#else
		float x = v1.x + v2.x;
		float y = v1.y + v2.y;

		result.Set(x, y);
#endif
	}

	__forceinline void		Add_Vec3_By_Vec3(Vector3& result, const Vector3& v1, const Vector3& v2)
	{
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(0, v1.z, v1.y, v1.x);
		__m128 V2 =  _mm_set_ps(0, v2.z, v2.y, v2.x);
		m128_to_vec3(result, _mm_add_ps( V1, V2 ));
#else
		float x = v1.x + v2.x;
		float y = v1.y + v2.y;
		float z = v1.z + v2.z;

		result.Set(x, y, z);
#endif
	}

	__forceinline Vector3	Add_Vec3_By_Vec3(const Vector3& v1, const Vector3& v2)
	{
		Vector3 result;
		Add_Vec3_By_Vec3(result, v1, v2);
		return std::move(result);
	}

	__forceinline Vector4	Add_Vec4_By_Vec4(const Vector4& v1, const Vector4& v2)
	{
#if USE_SIMD == 1
		Vector4 result;
		__m128 V1 =  _mm_set_ps(v1.w, v1.z, v1.y, v1.x);
		__m128 V2 =  _mm_set_ps(v2.w, v2.z, v2.y, v2.x);
		m128_to_vec4(result, _mm_add_ps( V1, V2 ));
		return std::move(result);
#else
		return std::move(Vector4(v1.x+v2.x, v1.y+v2.y, v1.z+v2.z, v1.w+v2.w));
#endif
	}

	__forceinline Vector4	Sub_Vec4_By_Vec4(const Vector4& v1, const Vector4& v2)
	{
#if USE_SIMD == 1
		Vector4 result;
		__m128 V1 =  _mm_set_ps(v1.w, v1.z, v1.y, v1.x);
		__m128 V2 =  _mm_set_ps(v2.w, v2.z, v2.y, v2.x);
		m128_to_vec4(result, _mm_sub_ps( V1, V2 ));
		return std::move(result);
#else
		return std::move(Vector4(v1.x-v2.x, v1.y-v2.y, v1.z-v2.z, v1.w-v2.w));
#endif
	}

	__forceinline Vector2	Sub_Vec2_By_Vec2(const Vector2& v1, const Vector2& v2)
	{
#if USE_SIMD == 1
		Vector2 result;
		__m128 V1 =  _mm_set_ps(0, 0, v1.y, v1.x);
		__m128 V2 =  _mm_set_ps(0, 0, v2.y, v2.x);
		m128_to_vec2(result, _mm_sub_ps( V1, V2 ));
		return std::move(result);
#else
		return std::move(Vector2(v1.x-v2.x, v1.y-v2.y));
#endif
	}

	__forceinline Vector3	Sub_Vec3_By_Vec3(const Vector3& v1, const Vector3& v2)
	{
#if USE_SIMD == 1
		Vector3 result;
		__m128 V1 =  _mm_set_ps(0, v1.z, v1.y, v1.x);
		__m128 V2 =  _mm_set_ps(0, v2.z, v2.y, v2.x);
		m128_to_vec3(result, _mm_sub_ps( V1, V2 ));
		return std::move(result);
#else
		return std::move(Vector3(v1.x-v2.x, v1.y-v2.y, v1.z-v2.z));
#endif
	}

	__forceinline float		DotProduct_Vec3_By_Vec3(const Vector3& v1, const Vector3& v2)
	{
#if USE_SIMD == 1
		Vector3 result;
		__m128 V1 =  _mm_set_ps(0, v1.z, v1.y, v1.x);
		__m128 V2 =  _mm_set_ps(0, v2.z, v2.y, v2.x);
		m128_to_vec3(result, _mm_mul_ps( V1, V2 ));
		return result.x + result.y + result.z;
#else
		return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
#endif
	}

	__forceinline Vector3	CrossProduct_Vec3_By_Vec3(const Vector3& v1, const Vector3& v2)
	{
		Vector3 ret;
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(0, v1.z, v1.y, v1.x);
		__m128 V2 =  _mm_set_ps(0, v2.z, v2.y, v2.x);
		// y1,z1,x1,w1
		__m128 vTemp1 = _mm_shuffle_ps(V1,V1,_MM_SHUFFLE(3,0,2,1));
		// z2,x2,y2,w2
		__m128 vTemp2 = _mm_shuffle_ps(V2,V2,_MM_SHUFFLE(3,1,0,2));
		// Perform the left operation
		__m128 vResult = _mm_mul_ps(vTemp1,vTemp2);
		// z1,x1,y1,w1
		vTemp1 = _mm_shuffle_ps(vTemp1,vTemp1,_MM_SHUFFLE(3,0,2,1));
		// y2,z2,x2,w2
		vTemp2 = _mm_shuffle_ps(vTemp2,vTemp2,_MM_SHUFFLE(3,1,0,2));
		// Perform the right operation
		vTemp1 = _mm_mul_ps(vTemp1,vTemp2);
		// Subract the right from left, and return answer
		vResult = _mm_sub_ps(vResult,vTemp1);
		// Set w to zero
		m128_to_vec3(ret, _mm_and_ps(vResult,g_XMMask3.v));
#else
		ret.x = v1.y * v2.z - v1.z * v2.y;
		ret.y = v1.z * v2.x - v1.x * v2.z;
		ret.z = v1.x * v2.y - v1.y * v2.x;
#endif
		return std::move(ret);
	}

	__forceinline Vector2	Multiply_Vec2_By_K(const Vector2& v, float k)
	{
		Vector2 result;
		Multiply_Vec2_By_K(result, v, k);
		return std::move(result);
	}

	__forceinline void		Multiply_Vec2_By_K(Vector2& result, const Vector2& v, float k)
	{
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(0, 0, v.y, v.x);
		__m128 V2 =  _mm_set_ps1(k);
		m128_to_vec2(result, _mm_mul_ps(V1,V2));
#else
		result.x = v.x * k;
		result.y = v.y * k;
#endif
	}

	__forceinline Vector2	Multiply_Vec2_By_Vec2(const Vector2& v1, const Vector2& v2)
	{
#if USE_SIMD == 1
		Vector2 result;
		__m128 V1 =  _mm_set_ps(0, 0, v1.y, v1.x);
		__m128 V2 =  _mm_set_ps(0, 0, v2.y, v2.x);
		m128_to_vec2(result, _mm_mul_ps(V1,V2));
		return std::move(result);
#else
		return std::move(Vector2(v1.x * v2.x, v1.y * v2.y));
#endif
	}

	__forceinline Vector3	Multiply_Vec3_By_K(const Vector3& v, float k)
	{
		Vector3 result;
		Multiply_Vec3_By_K(result, v, k);
		return std::move(result);
	}

	__forceinline void		Multiply_Vec3_By_K(Vector3& result, const Vector3& v, float k)
	{
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(0, v.z, v.y, v.x);
		__m128 V2 =  _mm_set_ps1(k);
		m128_to_vec3(result, _mm_mul_ps(V1,V2));
#else
		result.x = v.x * k;
		result.y = v.y * k;
		result.z = v.z * k;
#endif
	}

	__forceinline Vector4	Multiply_Vec4_By_K(const Vector4& v, float k)
	{
		Vector4 result;
		Multiply_Vec4_By_K(result, v, k);
		return std::move(result);
	}

	__forceinline void		Multiply_Vec4_By_K(Vector4& result, const Vector4& v, float k)
	{
#if USE_SIMD == 1
		__m128 V1 =  _mm_set_ps(v.w, v.z, v.y, v.x);
		__m128 V2 =  _mm_set_ps1(k);
		m128_to_vec4(result, _mm_mul_ps(V1,V2));
#else
		result.x = v.x * k;
		result.y = v.y * k;
		result.z = v.z * k;
		result.w = v.w * k;
#endif
	}

	__forceinline float		Angle_To_Radian(float angle)
	{
		return angle * PI / 180;
	}

	__forceinline float		Vec3_Distance(const Vector3& v1, const Vector3& v2)
	{
		float dx = v1.x - v2.x, dy = v1.y - v2.y, dz = v1.z - v2.z;
		return sqrt(dx * dx + dy * dy + dz * dz);
	}

	__forceinline bool		Equal(float a, float b)
	{
		return fabs(a - b) < 1e-03;
	}

	__forceinline Vector4	Transform_Vec3_By_Mat44(const Vector3& pt, const Matrix44& mat, bool bPosOrDir)
	{
		return Transform_Vec4_By_Mat44(Vector4(pt, bPosOrDir ? 1.0f : 0.0f), mat);
	}

	__forceinline Matrix44	Multiply_Mat44_By_Mat44( const Matrix44& mat1, const Matrix44& mat2 )
	{
		Matrix44 ret;
#if USE_SIMD == 1
		Vector4 tmp;
		__m128 m1r0 = _mm_set_ps(mat1.m_arr[0][3], mat1.m_arr[0][2], mat1.m_arr[0][1], mat1.m_arr[0][0]);
		__m128 m1r1 = _mm_set_ps(mat1.m_arr[1][3], mat1.m_arr[1][2], mat1.m_arr[1][1], mat1.m_arr[1][0]);
		__m128 m1r2 = _mm_set_ps(mat1.m_arr[2][3], mat1.m_arr[2][2], mat1.m_arr[2][1], mat1.m_arr[2][0]);
		__m128 m1r3 = _mm_set_ps(mat1.m_arr[3][3], mat1.m_arr[3][2], mat1.m_arr[3][1], mat1.m_arr[3][0]);
		__m128 m2r0 = _mm_set_ps(mat2.m_arr[0][3], mat2.m_arr[0][2], mat2.m_arr[0][1], mat2.m_arr[0][0]);
		__m128 m2r1 = _mm_set_ps(mat2.m_arr[1][3], mat2.m_arr[1][2], mat2.m_arr[1][1], mat2.m_arr[1][0]);
		__m128 m2r2 = _mm_set_ps(mat2.m_arr[2][3], mat2.m_arr[2][2], mat2.m_arr[2][1], mat2.m_arr[2][0]);
		__m128 m2r3 = _mm_set_ps(mat2.m_arr[3][3], mat2.m_arr[3][2], mat2.m_arr[3][1], mat2.m_arr[3][0]);
		// Use vW to hold the original row
		__m128 vW = m1r0;
		// Splat the component X,Y,Z then W
		__m128 vX = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(0,0,0,0));
		__m128 vY = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(1,1,1,1));
		__m128 vZ = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(2,2,2,2));
		vW = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(3,3,3,3));
		// Perform the opertion on the first row
		vX = _mm_mul_ps(vX,m2r0);
		vY = _mm_mul_ps(vY,m2r1);
		vZ = _mm_mul_ps(vZ,m2r2);
		vW = _mm_mul_ps(vW,m2r3);
		// Perform a binary add to reduce cumulative errors
		vX = _mm_add_ps(vX,vZ);
		vY = _mm_add_ps(vY,vW);
		vX = _mm_add_ps(vX,vY);
		m128_to_vec4(tmp, vX);
		ret.SetRow(0, tmp);
		// Repeat for the other 3 rows
		vW = m1r1;
		vX = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(0,0,0,0));
		vY = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(1,1,1,1));
		vZ = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(2,2,2,2));
		vW = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(3,3,3,3));
		vX = _mm_mul_ps(vX,m2r0);
		vY = _mm_mul_ps(vY,m2r1);
		vZ = _mm_mul_ps(vZ,m2r2);
		vW = _mm_mul_ps(vW,m2r3);
		vX = _mm_add_ps(vX,vZ);
		vY = _mm_add_ps(vY,vW);
		vX = _mm_add_ps(vX,vY);
		m128_to_vec4(tmp, vX);
		ret.SetRow(1, tmp);
		vW = m1r2;
		vX = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(0,0,0,0));
		vY = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(1,1,1,1));
		vZ = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(2,2,2,2));
		vW = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(3,3,3,3));
		vX = _mm_mul_ps(vX,m2r0);
		vY = _mm_mul_ps(vY,m2r1);
		vZ = _mm_mul_ps(vZ,m2r2);
		vW = _mm_mul_ps(vW,m2r3);
		vX = _mm_add_ps(vX,vZ);
		vY = _mm_add_ps(vY,vW);
		vX = _mm_add_ps(vX,vY);
		m128_to_vec4(tmp, vX);
		ret.SetRow(2, tmp);
		vW = m1r3;
		vX = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(0,0,0,0));
		vY = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(1,1,1,1));
		vZ = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(2,2,2,2));
		vW = _mm_shuffle_ps(vW,vW,_MM_SHUFFLE(3,3,3,3));
		vX = _mm_mul_ps(vX,m2r0);
		vY = _mm_mul_ps(vY,m2r1);
		vZ = _mm_mul_ps(vZ,m2r2);
		vW = _mm_mul_ps(vW,m2r3);
		vX = _mm_add_ps(vX,vZ);
		vY = _mm_add_ps(vY,vW);
		vX = _mm_add_ps(vX,vY);
		m128_to_vec4(tmp, vX);
		ret.SetRow(3, tmp);
#else
		ret.m00 = mat1.m00 * mat2.m00 + mat1.m01 * mat2.m10 + mat1.m02 * mat2.m20 + mat1.m03 * mat2.m30;
		ret.m01 = mat1.m00 * mat2.m01 + mat1.m01 * mat2.m11 + mat1.m02 * mat2.m21 + mat1.m03 * mat2.m31;
		ret.m02 = mat1.m00 * mat2.m02 + mat1.m01 * mat2.m12 + mat1.m02 * mat2.m22 + mat1.m03 * mat2.m32;
		ret.m03 = mat1.m00 * mat2.m03 + mat1.m01 * mat2.m13 + mat1.m02 * mat2.m23 + mat1.m03 * mat2.m33;

		ret.m10 = mat1.m10 * mat2.m00 + mat1.m11 * mat2.m10 + mat1.m12 * mat2.m20 + mat1.m13 * mat2.m30;
		ret.m11 = mat1.m10 * mat2.m01 + mat1.m11 * mat2.m11 + mat1.m12 * mat2.m21 + mat1.m13 * mat2.m31;
		ret.m12 = mat1.m10 * mat2.m02 + mat1.m11 * mat2.m12 + mat1.m12 * mat2.m22 + mat1.m13 * mat2.m32;
		ret.m13 = mat1.m10 * mat2.m03 + mat1.m11 * mat2.m13 + mat1.m12 * mat2.m23 + mat1.m13 * mat2.m33;

		ret.m20 = mat1.m20 * mat2.m00 + mat1.m21 * mat2.m10 + mat1.m22 * mat2.m20 + mat1.m23 * mat2.m30;
		ret.m21 = mat1.m20 * mat2.m01 + mat1.m21 * mat2.m11 + mat1.m22 * mat2.m21 + mat1.m23 * mat2.m31;
		ret.m22 = mat1.m20 * mat2.m02 + mat1.m21 * mat2.m12 + mat1.m22 * mat2.m22 + mat1.m23 * mat2.m32;
		ret.m23 = mat1.m20 * mat2.m03 + mat1.m21 * mat2.m13 + mat1.m22 * mat2.m23 + mat1.m23 * mat2.m33;

		ret.m30 = mat1.m30 * mat2.m00 + mat1.m31 * mat2.m10 + mat1.m32 * mat2.m20 + mat1.m33 * mat2.m30;
		ret.m31 = mat1.m30 * mat2.m01 + mat1.m31 * mat2.m11 + mat1.m32 * mat2.m21 + mat1.m33 * mat2.m31;
		ret.m32 = mat1.m30 * mat2.m02 + mat1.m31 * mat2.m12 + mat1.m32 * mat2.m22 + mat1.m33 * mat2.m32;
		ret.m33 = mat1.m30 * mat2.m03 + mat1.m31 * mat2.m13 + mat1.m32 * mat2.m23 + mat1.m33 * mat2.m33;
#endif
		return std::move(ret);
	}

	__forceinline Matrix44 operator * (const Matrix44& lhs, const Matrix44& rhs)
	{
		return Multiply_Mat44_By_Mat44(lhs, rhs);
	}

	__forceinline void Plane::Normalize()
	{
		float normalLen = n.Normalize();
		d /= normalLen;
	}

	//------------------------------------------------------------------------------------
	__forceinline Vector3 Ray::GetPoint(float t) const
	{
		return Add_Vec3_By_Vec3(m_origin, Common::Multiply_Vec3_By_K(m_dir, t));
	}
	//------------------------------------------------------------------------------------
	__forceinline std::pair<bool, float> Ray::Intersects(const Plane& plane) const
	{
		// p = o + vt
		// p * n = -d
		// t = (d - (o * n)) / (n * v)

		float dot = Common::DotProduct_Vec3_By_Vec3(plane.n, m_dir);
		if (Equal(dot, 0.0f))
			return std::pair<bool, float>(false, 0.0f);

		float t = (-plane.d - Common::DotProduct_Vec3_By_Vec3(m_origin, plane.n)) / dot;
		if (t < 0 ||
			t < 1e-03)	// Avoid self-shadowing cause by imprecision problem!
			return std::pair<bool, float>(false, 0.0f);

		return std::pair<bool, float>(true, t);
	}
	//------------------------------------------------------------------------------------
	__forceinline std::pair<bool, float> Ray::Intersects(const Vector3& p1, const Vector3& p2, const Vector3& p3) const
	{
		// First check ray-plane intersection
		Plane plane(p1, p2, p3);

		std::pair<bool, float> hitResult = Intersects(plane);
		if (!hitResult.first)
			return std::pair<bool, float>(false, 0.0f);

		// Then check whether intersection point is inside triangle
		if (!IsPointInTriangle(GetPoint(hitResult.second), p1, p2, p3))
			return std::pair<bool, float>(false, 0.0f);

		return hitResult;
	}
	//------------------------------------------------------------------------------------
	__forceinline bool		IsPointInTriangle(const Vector3& pt, const Vector3& p1, const Vector3& p2, const Vector3& p3)
	{
		// First check whether point is on the plane
		Plane plane(p1, p2, p3);
		float d1 = Common::DotProduct_Vec3_By_Vec3(plane.n, pt);

		if (!Equal(d1, plane.d))
			return false;

		// for triangle: p = w1p1 + w2p2 + w3p3, w1 + w2 + w3 = 1
		const Vector3 v1 = Common::Sub_Vec3_By_Vec3(p2, p1);
		const Vector3 v2 = Common::Sub_Vec3_By_Vec3(p3, p1);
		const Vector3 R = Common::Sub_Vec3_By_Vec3(pt, p1);
		float dot = Common::DotProduct_Vec3_By_Vec3(v1, v2);
		float a = Common::DotProduct_Vec3_By_Vec3(v1, v1);
		float b = Common::DotProduct_Vec3_By_Vec3(v2, v2);
		float e = Common::DotProduct_Vec3_By_Vec3(R, v1);
		float f = Common::DotProduct_Vec3_By_Vec3(R, v2);
		float denom = 1.0f / (a * b - dot * dot);

		float w1 = (b * e + f * -dot) * denom;
		float w2 = (-dot * e + a * f) * denom;

		if (w1 < 0 || w2 < 0 || (w1 + w2)>1)
			return false;

		return true;
	}
}

#endif // MathDef_inl__