#include "stdafx.h"
#include "MathDef.h"
#include "AABB.h"

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


	Common::Quaternion Quaternion::IDENTITY	=	Quaternion(1, 0, 0, 0);


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

	void Matrix44::SetTranslation( const Vector3& t )
	{
		SetRow(3, Vector4(t, 1.0f));
	}

	Matrix44 Matrix44::Transpose() const
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

	void Matrix44::FromQuaternion(const Quaternion& quat)
	{
		float xy = quat.x * quat.y;
		float xz = quat.x * quat.z;
		float xw = quat.x * quat.w;
		float yz = quat.y * quat.z;
		float yw = quat.y * quat.w;
		float zw = quat.z * quat.w;
		float xx = quat.x * quat.x;
		float yy = quat.y * quat.y;
		float zz = quat.z * quat.z;

		m00 = 1 - 2 * (yy + zz);	m01 = 2 * (xy + zw);	m02 = 2 * (xz - yw);	m03 = 0;
		m10 = 2 * (xy - zw);		m11 = 1 - 2 * (xx + zz); m12 = 2 * (yz + xw);	m13 = 0;
		m20 = 2 * (xz + yw);		m21 = 2 * (yz - xw);	m22 = 1 - 2 * (xx + yy); m23 = 0;
		m30 = 0;					m31 = 0;				m32 = 0;				m33 = 1;
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

	void Quaternion::FromAxisAngle( const Vector3& axis, float angle )
	{
		float fHalfRadin = Angle_To_Radian(angle * 0.5f);
		x = axis.x * sinf(fHalfRadin);
		y = axis.y * sinf(fHalfRadin);
		z = axis.z * sinf(fHalfRadin);
		w = cosf(fHalfRadin);
	}

	float Quaternion::Normalise()
	{
		float len = w*w + x*x + y*y + z*z;
		float factor = 1.0f / sqrtf(len);
		*this = *this * factor;
		return len;
	}

	float Quaternion::Dot(const Quaternion& rkQ) const
	{
		return w*rkQ.w + x*rkQ.x + y*rkQ.y + z*rkQ.z;
	}

	Quaternion Quaternion::Slerp(float fT, const Quaternion& rkP, const Quaternion& rkQ, bool shortestPath)
	{
		float fCos = rkP.Dot(rkQ);
		Quaternion rkT;

		// Do we need to invert rotation?
		if (fCos < 0.0f && shortestPath)
		{
			fCos = -fCos;
			rkT = -rkQ;
		}
		else
		{
			rkT = rkQ;
		}

		if (fabsf(fCos) < 1 - 1e-03)
		{
			// Standard case (slerp)
			float fSin = sqrtf(1 - fCos * fCos);
			float fAngle = atan2(fSin, fCos);
			float fInvSin = 1.0f / fSin;
			float fCoeff0 = sinf((1.0f - fT) * fAngle) * fInvSin;
			float fCoeff1 = sinf(fT * fAngle) * fInvSin;
			return fCoeff0 * rkP + fCoeff1 * rkT;
		}
		else
		{
			// There are two situations:
			// 1. "rkP" and "rkQ" are very close (fCos ~= +1), so we can do a linear
			//    interpolation safely.
			// 2. "rkP" and "rkQ" are almost inverse of each other (fCos ~= -1), there
			//    are an infinite number of possibilities interpolation. but we haven't
			//    have method to fix this case, so just use linear interpolation here.
			Quaternion t = (1.0f - fT) * rkP + fT * rkT;
			// taking the complement requires renormalisation
			t.Normalise();
			return t;
		}
	}

	void Quaternion::FromRotationMatrix(const Matrix44& kRot)
	{
		// Algorithm in Ken Shoemake's article in 1987 SIGGRAPH course notes
		// article "Quaternion Calculus and Fast Animation".

		float fTrace = kRot.m_arr[0][0] + kRot.m_arr[1][1] + kRot.m_arr[2][2];
		float fRoot;

		if (fTrace > 0.0)
		{
			// |w| > 1/2, may as well choose w > 1/2
			fRoot = sqrtf(fTrace + 1.0f);  // 2w
			w = 0.5f*fRoot;
			fRoot = 0.5f / fRoot;  // 1/(4w)
			x = (kRot.m_arr[2][1] - kRot.m_arr[2][1])*fRoot;
			y = (kRot.m_arr[2][0] - kRot.m_arr[0][2])*fRoot;
			z = (kRot.m_arr[0][1] - kRot.m_arr[1][0])*fRoot;
		}
		else
		{
			// |w| <= 1/2
			static size_t s_iNext[3] = { 1, 2, 0 };
			size_t i = 0;
			if (kRot.m_arr[1][1] > kRot.m_arr[0][0])
				i = 1;
			if (kRot.m_arr[2][2] > kRot.m_arr[i][i])
				i = 2;
			size_t j = s_iNext[i];
			size_t k = s_iNext[j];

			fRoot = sqrtf(kRot.m_arr[i][i] - kRot.m_arr[j][j] - kRot.m_arr[k][k] + 1.0f);
			float* apkQuat[3] = { &x, &y, &z };
			*apkQuat[i] = 0.5f*fRoot;
			fRoot = 0.5f / fRoot;
			w = (kRot.m_arr[j][k] - kRot.m_arr[k][j])*fRoot;
			*apkQuat[j] = (kRot.m_arr[i][j] + kRot.m_arr[j][i])*fRoot;
			*apkQuat[k] = (kRot.m_arr[i][k] + kRot.m_arr[k][i])*fRoot;
		}
	}

	Matrix44 Quaternion::ToRotationMatrix() const
	{
		float fTx = x + x;
		float fTy = y + y;
		float fTz = z + z;
		float fTwx = fTx*w;
		float fTwy = fTy*w;
		float fTwz = fTz*w;
		float fTxx = fTx*x;
		float fTxy = fTy*x;
		float fTxz = fTz*x;
		float fTyy = fTy*y;
		float fTyz = fTz*y;
		float fTzz = fTz*z;

		Matrix44 kRot;

		kRot.m_arr[0][0] = 1.0f - (fTyy + fTzz);
		kRot.m_arr[0][1] = fTxy - fTwz;
		kRot.m_arr[0][2] = fTxz + fTwy;
		kRot.m_arr[1][0] = fTxy + fTwz;
		kRot.m_arr[1][1] = 1.0f - (fTxx + fTzz);
		kRot.m_arr[1][2] = fTyz - fTwx;
		kRot.m_arr[2][0] = fTxz - fTwy;
		kRot.m_arr[2][1] = fTyz + fTwx;
		kRot.m_arr[2][2] = 1.0f - (fTxx + fTyy);

		return kRot;
	}

	void Plane::Redefine(const Vector3& _n, const Vector3& _p)
	{
		n = _n;
		d = -Common::DotProduct_Vec3_By_Vec3(_n, _p);
	}

	void Plane::Redefine(const Vector3& p1, const Vector3& p2, const Vector3& p3)
	{
		const Vector3 v1 = p2 - p1;
		const Vector3 v2 = p3 - p1;
		Vector3 vNormal = Common::CrossProduct_Vec3_By_Vec3(v1, v2);
		vNormal.Normalize();
		d = -Common::DotProduct_Vec3_By_Vec3(p1, vNormal);
	}

	Plane::Side Plane::GetSide(const Vector3& p) const
	{
		float result = Common::DotProduct_Vec3_By_Vec3(p, n) + d;

		if (result < 0.0)
			return NEGATIVE_SIDE;

		if (result > 0.0)
			return POSITIVE_SIDE;

		return NO_SIDE;
	}


	bool Vector3::DirectionEqual(const Vector3& dir, float fToleraceRadian) const
	{
		float fDot = DotProduct_Vec3_By_Vec3(*this, dir);
		float fRadian = acosf(fDot);

		return fabsf(fRadian) <= fToleraceRadian;
	}

	Common::Plane Transform_Plane_By_Mat44(const Plane& plane, const Matrix44& mat)
	{
		Vector4 v(plane.n, plane.d);

		// To transform normal, we can not use the matrix directly
		// See: http://www.songho.ca/opengl/gl_normaltransform.html
		Matrix44 matInvTranspose = mat.Inverse();
		matInvTranspose.Transpose();

		v = Common::Transform_Vec4_By_Mat44(v, matInvTranspose);

		Plane ret;
		ret.n = v.GetVec3();
		ret.d = v.w / ret.n.Normalize();

		return ret;
	}

	bool SweepIntersectionTest(const AxisAlignBBox &objectBB, const AxisAlignBBox &frustumBB, const Vector3 &vSweepDir)
	{
		// min and max vectors of object
		const Vector3 &vFrustumMin = frustumBB.m_minCorner;
		const Vector3 &vFrustumMax = frustumBB.m_maxCorner;
		const Vector3 &vObjectMin = objectBB.m_minCorner;
		const Vector3 &vObjectMax = objectBB.m_maxCorner;

		// calculate projections along sweep direction
		//

		// project AABB center point
		Vector3 vFrustumCenter = (vFrustumMin + vFrustumMax) * 0.5f;
		Vector3 vFrustumHalfSize = (vFrustumMax - vFrustumMin) * 0.5f;
		float fFrustumCenterProj = DotProduct_Vec3_By_Vec3(vFrustumCenter, vSweepDir);
		// project AABB half-size
		float fFrustumHalfSizeProj = vFrustumHalfSize.x * fabs(vSweepDir.x) +
			vFrustumHalfSize.y * fabs(vSweepDir.y) +
			vFrustumHalfSize.z * fabs(vSweepDir.z);
		float fFrustumProjMin = fFrustumCenterProj - fFrustumHalfSizeProj;
		float fFrustumProjMax = fFrustumCenterProj + fFrustumHalfSizeProj;

		// project AABB center poin
		Vector3 vObjectCenter = (vObjectMin + vObjectMax) * 0.5f;
		Vector3 vObjectHalfSize = (vObjectMax - vObjectMin) * 0.5f;
		float fObjectCenterProj = DotProduct_Vec3_By_Vec3(vObjectCenter, vSweepDir);
		// project AABB half-size
		float fObjectHalfSizeProj = vObjectHalfSize.x * fabs(vSweepDir.x) +
			vObjectHalfSize.y * fabs(vSweepDir.y) +
			vObjectHalfSize.z * fabs(vSweepDir.z);
		float fObjectProjMin = fObjectCenterProj - fObjectHalfSizeProj;
		float fObjectProjMax = fObjectCenterProj + fObjectHalfSizeProj;

		// find the distance in sweep direction
		// where intersection occurs on all axis.
		//

		// sweep direction intersection
		// starts: fObjectProjMax + fDist = fFrustumProjMin
		//   ends: fObjectProjMin + fDist = fFrustumProjMax
		float fDistMin = fFrustumProjMin - fObjectProjMax;
		float fDistMax = fFrustumProjMax - fObjectProjMin;
		if (fDistMin > fDistMax) Swap(fDistMin, fDistMax);

		// only intersects in opposite of sweep direction
		if (fDistMax < 0) return false;

		// intersection on an axis:
		// starts: vObjectMax.x + fDist*vSweepDir.x = vFrustumMin.x
		//   ends: vObjectMin.x + fDist*vSweepDir.x = vFrustumMax.x

		// test x-axis:
		if (vSweepDir.x == 0)
		{
			// there is never an intersection on this axis
			if (vFrustumMin.x > vObjectMax.x || vObjectMin.x > vFrustumMax.x) return false;
		}
		else
		{
			float fDistMinNew = (vFrustumMin.x - vObjectMax.x) / vSweepDir.x;
			float fDistMaxNew = (vFrustumMax.x - vObjectMin.x) / vSweepDir.x;
			if (fDistMinNew > fDistMaxNew) Swap(fDistMinNew, fDistMaxNew);

			// distance ranges don't overlap
			if (fDistMin > fDistMaxNew || fDistMinNew > fDistMax) return false;
			// otherwise merge ranges
			fDistMin = Max(fDistMin, fDistMinNew);
			fDistMax = Min(fDistMax, fDistMaxNew);
		}

		// test y-axis:
		if (vSweepDir.y == 0)
		{
			// there is never an intersection on this axis
			if (vFrustumMin.y > vObjectMax.y || vObjectMin.y > vFrustumMax.y) return false;
		}
		else
		{
			float fDistMinNew = (vFrustumMin.y - vObjectMax.y) / vSweepDir.y;
			float fDistMaxNew = (vFrustumMax.y - vObjectMin.y) / vSweepDir.y;
			if (fDistMinNew > fDistMaxNew) Swap(fDistMinNew, fDistMaxNew);

			// distance ranges don't overlap
			if (fDistMin > fDistMaxNew || fDistMinNew > fDistMax) return false;
			// otherwise merge ranges
			fDistMin = Max(fDistMin, fDistMinNew);
			fDistMax = Min(fDistMax, fDistMaxNew);
		}

		// test z-axis:
		if (vSweepDir.z == 0)
		{
			// there is never an intersection on this axis
			if (vFrustumMin.z > vObjectMax.z || vObjectMin.z > vFrustumMax.z) return false;
		}
		else
		{
			float fDistMinNew = (vFrustumMin.z - vObjectMax.z) / vSweepDir.z;
			float fDistMaxNew = (vFrustumMax.z - vObjectMin.z) / vSweepDir.z;
			if (fDistMinNew > fDistMaxNew) Swap(fDistMinNew, fDistMaxNew);

			// distance ranges don't overlap
			if (fDistMin > fDistMaxNew || fDistMinNew > fDistMax) return false;
		}

		// all tests passed - intersection occurs
		return true;
	}
}


