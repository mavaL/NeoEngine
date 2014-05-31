/********************************************************************
	created:	2:7:2013   22:38
	filename	MathDef.h
	author:		maval

	purpose:	Math lib. Support non-"operator overload" version
				to avoid efficiency loss
*********************************************************************/
#ifndef MathDef_h__
#define MathDef_h__


const float		PI			=	3.14159f;
const float		HALF_PI		=	1.57079f;
const float		TWO_PI		=	6.28318f;

namespace Common
{
	/////////////////////////////////////////////////////////////
	//////// Integer point
	class iPoint
	{
	public:
		iPoint(int _x, int _y):x(_x),y(_y) {}

		int x, y;
	};


	/////////////////////////////////////////////////////////////
	//////// 2D Vector
	class Vector2
	{
	public:
		Vector2():x(0),y(0) {}
		Vector2(float _x, float _y):x(_x),y(_y) {}

		void Set(float _x, float _y) { x=_x; y=_y; }

		float x, y;
	};

	/////////////////////////////////////////////////////////////
	//////// 3D Vector
	class Vector3
	{
	public:
		Vector3():x(0),y(0),z(0) {}
		Vector3(float _x, float _y, float _z):x(_x),y(_y),z(_z) {}
		Vector3(const Vector3& rhs):x(rhs.x),y(rhs.y),z(rhs.z) {}

		bool operator ==(const Vector3& other) const
		{
			return x == other.x &&
				y == other.y &&
				z == other.z;
		}

		void Set(float _x, float _y, float _z) { x=_x; y=_y; z=_z; }

		bool	IsZeroLength() const
		{
			float sqlen = (x * x) + (y * y) + (z * z);
			return (sqlen < (1e-06 * 1e-06));
		}

		float	Normalize();
		//求负
		void	Neg() { x = -x; y = -y; z = -z; }

		float x, y, z;

		static Vector3		ZERO;
		static Vector3		UNIT_X;
		static Vector3		UNIT_Y;
		static Vector3		UNIT_Z;
		static Vector3		NEG_UNIT_X;
		static Vector3		NEG_UNIT_Y;
		static Vector3		NEG_UNIT_Z;
	};

	/////////////////////////////////////////////////////////////
	//////// 4D Vector
	class Vector4
	{
	public:
		Vector4():x(0),y(0),z(0),w(0) {}
		Vector4(const Vector3& pt, float _w):x(pt.x),y(pt.y),z(pt.z),w(_w) {}
		Vector4(float _x, float _y, float _z, float _w):x(_x),y(_y),z(_z),w(_w) {}

		void		Set(float _x, float _y, float _z, float _w) { x=_x; y=_y; z=_z; w=_w; }
		const Vector3& GetVec3() const	{ return vec3; }
		//求负
		void	Neg() { x = -x; y = -y; z = -z; w = -w; }

		union
		{
			struct { Vector3 vec3; float w; };
			struct { float x, y, z, w; };
		};

		static Vector4		ZERO;
	};

	/////////////////////////////////////////////////////////////
	//////// 4x4 Matrix
	class Matrix44
	{
	public:
		Matrix44() { MakeIdentity(); }
		Matrix44(	float _m00, float _m01, float _m02, float _m03,
					float _m10, float _m11, float _m12, float _m13,
					float _m20, float _m21, float _m22, float _m23,
					float _m30, float _m31, float _m32, float _m33)
					:m00(_m00),m01(_m01),m02(_m02),m03(_m03)
					,m10(_m10),m11(_m11),m12(_m12),m13(_m13)
					,m20(_m20),m21(_m21),m22(_m22),m23(_m23)
					,m30(_m30),m31(_m31),m32(_m32),m33(_m33) {}

		/// Operator
		friend Matrix44 operator * (const Matrix44& lhs, const Matrix44& rhs);

		void		SetRow(int row, const Vector4& vec);
		void		SetScale(const Vector3& scale);
		//单位矩阵化
		void		MakeIdentity();
		//零矩阵化
		inline void	MakeZero() { memset(m_arr, 0, sizeof(m_arr)); }
		//求逆
		Matrix44	Inverse() const;
		//转置
		Matrix44	Transpose() const;
		//清除平移部分
		inline void	ClearTranslation() { SetRow(3, Vector4(0,0,0,1)); }
		//设置平移部分
		void		SetTranslation(const Vector4& t);
		//获取平移部分
		inline Vector4	GetTranslation() const { return std::move(Vector4(m30, m31, m32, m33)); }
		//通过轴角对构建旋转矩阵,平移部分设为0
		void		FromAxisAngle(const Vector3& axis, float angle);
		//通过轴构建矩阵
		void		FromAxises(const Vector3& v1, const Vector3& v2, const Vector3& v3);

		union
		{
			struct  
			{
				float	m00, m01, m02, m03,
						m10, m11, m12, m13,
						m20, m21, m22, m23,
						m30, m31, m32, m33;
			};

			float m_arr[4][4];
		};

		static Matrix44 IDENTITY;
	};

	/////////////////////////////////////////////////////////////
	//////// 3D plane
	class Plane
	{
	public:
		Plane() {}
		Plane(const Vector3& _n, float _d):n(_n),d(_d) {}

		void	Set(const Vector3& _n, float _d) { n = _n; d = _d; }
		void	Normalize();

		Vector3	n;
		float	d;
	};

	//////// 以4x4矩阵变换4d坐标
	void	Transform_Vec4_By_Mat44(Vector4& result, const Vector4& pt, const Matrix44& mat);
	Vector4	Transform_Vec4_By_Mat44(const Vector4& pt, const Matrix44& mat);

	Vector4		Transform_Vec3_By_Mat44(const Vector3& pt, const Matrix44& mat, bool bPosOrDir);
	Matrix44	Multiply_Mat44_By_Mat44(const Matrix44& mat1, const Matrix44& mat2);
	Vector4		Multiply_Vec4_By_K(const Vector4& v, float k);
	void		Multiply_Vec4_By_K(Vector4& result, const Vector4& v, float k);
	Vector2		Sub_Vec2_By_Vec2(const Vector2& v1, const Vector2& v2);
	Vector3		Sub_Vec3_By_Vec3(const Vector3& v1, const Vector3& v2);
	void		Add_Vec2_By_Vec2(Vector2& result, const Vector2& v1, const Vector2& v2);
	void		Add_Vec3_By_Vec3(Vector3& result, const Vector3& v1, const Vector3& v2);
	Vector3		Add_Vec3_By_Vec3(const Vector3& v1, const Vector3& v2);
	Vector4		Add_Vec4_By_Vec4(const Vector4& v1, const Vector4& v2);
	Vector4		Sub_Vec4_By_Vec4(const Vector4& v1, const Vector4& v2);
	float		DotProduct_Vec3_By_Vec3(const Vector3& v1, const Vector3& v2);
	Vector3		CrossProduct_Vec3_By_Vec3(const Vector3& v1, const Vector3& v2);
	Vector3		Multiply_Vec3_By_K(const Vector3& v, float k);
	void		Multiply_Vec3_By_K(Vector3& result, const Vector3& v, float k);
	Vector2		Multiply_Vec2_By_K(const Vector2& v, float k);
	void		Multiply_Vec2_By_K(Vector2& result, const Vector2& v, float k);
	Vector2		Multiply_Vec2_By_Vec2(const Vector2& v1, const Vector2& v2);
	float		Angle_To_Radian(float angle);
	float		Vec3_Distance(const Vector3& v1, const Vector3& v2);

	//建构关于平面的反射矩阵
	Matrix44	BuildReflectMatrix(const Plane& p);
	// Build view matrix, Left handed
	Matrix44	BuildViewMatrix(const Vector3& vEye, const Vector3& vLookAt, const Vector3& vUp);
	// Build othrographic projection matrix, left handed
	Matrix44	BuildOthroMatrix(float l, float r, float b, float t, float n, float f);
}

#include "MathDef.inl"

#endif // MathDef_h__