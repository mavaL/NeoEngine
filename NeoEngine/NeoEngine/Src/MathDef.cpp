#include "stdafx.h"
#include "MathDef.h"

namespace Common
{
	Vector3 Vector3::ZERO			=	Vector3(0, 0, 0);
	Vector3 Vector3::UNIT_X			=	Vector3(1, 0, 0);
	Vector3 Vector3::UNIT_Y			=	Vector3(0, 1, 0);
	Vector3 Vector3::UNIT_Z			=	Vector3(0, 0, 1);
	Vector3 Vector3::NEG_UNIT_X		=	Vector3(-1, 0, 0);
	Vector3 Vector3::NEG_UNIT_Y		=	Vector3(0, -1, 0);
	Vector3 Vector3::NEG_UNIT_Z		=	Vector3(0, 0, -1);
	Vector4 Vector4::ZERO			=	Vector4(0, 0, 0, 0);


	Matrix44 Matrix44::IDENTITY		=	Matrix44(1, 0, 0, 0,
												0, 1, 0, 0,
												0, 0, 1, 0,
												0, 0, 0, 1);


	//////////////////////////////////////////////////////////////////////////////////////////////
	void Transform_Vec4_By_Mat44( Vector4& result, const Vector4& pt, const Matrix44& mat )
	{
		result = Transform_Vec4_By_Mat44(pt, mat);
	}

	Common::Vector4 Transform_Vec4_By_Mat44( const Vector4& pt, const Matrix44& mat )
	{
		return Vector4(
			mat.m_arr[0][0] * pt.x + mat.m_arr[1][0] * pt.y + mat.m_arr[2][0] * pt.z + mat.m_arr[3][0] * pt.w, 
			mat.m_arr[0][1] * pt.x + mat.m_arr[1][1] * pt.y + mat.m_arr[2][1] * pt.z + mat.m_arr[3][1] * pt.w,
			mat.m_arr[0][2] * pt.x + mat.m_arr[1][2] * pt.y + mat.m_arr[2][2] * pt.z + mat.m_arr[3][2] * pt.w,
			mat.m_arr[0][3] * pt.x + mat.m_arr[1][3] * pt.y + mat.m_arr[2][3] * pt.z + mat.m_arr[3][3] * pt.w
			);
	}

	//////////////////////////////////////////////////////////////////////////////////////////////
	void Matrix44::MakeIdentity()
	{
		m00 = 1; m01 = 0; m02 = 0; m03 = 0;
		m10 = 0; m11 = 1; m12 = 0; m13 = 0;
		m20 = 0; m21 = 0; m22 = 1; m23 = 0;
		m30 = 0; m31 = 0; m32 = 0; m33 = 1;
	}

	void Matrix44::SetTranslation( const Vector4& t )
	{
		SetRow(3, t);
	}

	Common::Matrix44 Matrix44::Transpose()
	{
		return Matrix44(	m00, m10, m20, m30,
							m01, m11, m21, m31,
							m02, m12, m22, m32,
							m03, m13, m23, m33);
	}

	void Matrix44::FromAxisAngle( const Vector3& axis, float angle )
	{
		MakeZero();

		//from ogre
		float radian = Angle_To_Radian(angle);
		float fCos = std::cos(radian);
		float fSin = std::sin(radian);
		float fOneMinusCos = 1.0f-fCos;
		float fX2 = axis.x*axis.x;
		float fY2 = axis.y*axis.y;
		float fZ2 = axis.z*axis.z;
		float fXYM = axis.x*axis.y*fOneMinusCos;
		float fXZM = axis.x*axis.z*fOneMinusCos;
		float fYZM = axis.y*axis.z*fOneMinusCos;
		float fXSin = axis.x*fSin;
		float fYSin = axis.y*fSin;
		float fZSin = axis.z*fSin;

		m_arr[0][0] = fX2*fOneMinusCos+fCos;
		m_arr[1][0] = fXYM-fZSin;
		m_arr[2][0] = fXZM+fYSin;
		m_arr[0][1] = fXYM+fZSin;
		m_arr[1][1] = fY2*fOneMinusCos+fCos;
		m_arr[2][1] = fYZM-fXSin;
		m_arr[0][2] = fXZM-fYSin;
		m_arr[1][2] = fYZM+fXSin;
		m_arr[2][2] = fZ2*fOneMinusCos+fCos;

		ClearTranslation();
	}

	void Matrix44::FromAxises( const Vector3& v1, const Vector3& v2, const Vector3& v3 )
	{
		m00 = v1.x; m01 = v1.y; m02 = v1.z; m03 = 0;
		m10 = v2.x; m11 = v2.y; m12 = v2.z; m13 = 0;
		m20 = v3.x; m21 = v3.y; m22 = v3.z; m23 = 0;
		m30 = 0;	m31 = 0;	m32 = 0;	m33 = 1;
	}

	void Matrix44::SetRow( int row, const Vector4& vec )
	{
		assert(row >= 0 && row < 4);
		m_arr[row][0] = vec.x;
		m_arr[row][1] = vec.y;
		m_arr[row][2] = vec.z;
		m_arr[row][3] = vec.w;		
	}

	Matrix44 Matrix44::Inverse() const
	{
		//from ogre
		float m00 = m_arr[0][0], m01 = m_arr[0][1], m02 = m_arr[0][2], m03 = m_arr[0][3];
		float m10 = m_arr[1][0], m11 = m_arr[1][1], m12 = m_arr[1][2], m13 = m_arr[1][3];
		float m20 = m_arr[2][0], m21 = m_arr[2][1], m22 = m_arr[2][2], m23 = m_arr[2][3];
		float m30 = m_arr[3][0], m31 = m_arr[3][1], m32 = m_arr[3][2], m33 = m_arr[3][3];

		float v0 = m20 * m31 - m21 * m30;
		float v1 = m20 * m32 - m22 * m30;
		float v2 = m20 * m33 - m23 * m30;
		float v3 = m21 * m32 - m22 * m31;
		float v4 = m21 * m33 - m23 * m31;
		float v5 = m22 * m33 - m23 * m32;

		float t00 = + (v5 * m11 - v4 * m12 + v3 * m13);
		float t10 = - (v5 * m10 - v2 * m12 + v1 * m13);
		float t20 = + (v4 * m10 - v2 * m11 + v0 * m13);
		float t30 = - (v3 * m10 - v1 * m11 + v0 * m12);

		float invDet = 1 / (t00 * m00 + t10 * m01 + t20 * m02 + t30 * m03);

		float d00 = t00 * invDet;
		float d10 = t10 * invDet;
		float d20 = t20 * invDet;
		float d30 = t30 * invDet;

		float d01 = - (v5 * m01 - v4 * m02 + v3 * m03) * invDet;
		float d11 = + (v5 * m00 - v2 * m02 + v1 * m03) * invDet;
		float d21 = - (v4 * m00 - v2 * m01 + v0 * m03) * invDet;
		float d31 = + (v3 * m00 - v1 * m01 + v0 * m02) * invDet;

		v0 = m10 * m31 - m11 * m30;
		v1 = m10 * m32 - m12 * m30;
		v2 = m10 * m33 - m13 * m30;
		v3 = m11 * m32 - m12 * m31;
		v4 = m11 * m33 - m13 * m31;
		v5 = m12 * m33 - m13 * m32;

		float d02 = + (v5 * m01 - v4 * m02 + v3 * m03) * invDet;
		float d12 = - (v5 * m00 - v2 * m02 + v1 * m03) * invDet;
		float d22 = + (v4 * m00 - v2 * m01 + v0 * m03) * invDet;
		float d32 = - (v3 * m00 - v1 * m01 + v0 * m02) * invDet;

		v0 = m21 * m10 - m20 * m11;
		v1 = m22 * m10 - m20 * m12;
		v2 = m23 * m10 - m20 * m13;
		v3 = m22 * m11 - m21 * m12;
		v4 = m23 * m11 - m21 * m13;
		v5 = m23 * m12 - m22 * m13;

		float d03 = - (v5 * m01 - v4 * m02 + v3 * m03) * invDet;
		float d13 = + (v5 * m00 - v2 * m02 + v1 * m03) * invDet;
		float d23 = - (v4 * m00 - v2 * m01 + v0 * m03) * invDet;
		float d33 = + (v3 * m00 - v1 * m01 + v0 * m02) * invDet;

		return Matrix44(
			d00, d01, d02, d03,
			d10, d11, d12, d13,
			d20, d21, d22, d23,
			d30, d31, d32, d33);
	}
}


