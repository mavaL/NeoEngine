#include "stdafx.h"
#include "AABB.h"

namespace Common
{

	AxisAlignBBox::AxisAlignBBox()
	{
		SetNull();
	}

	void AxisAlignBBox::Merge( const VEC3& pt )
	{
		m_minCorner.x = min(m_minCorner.x, pt.x);
		m_minCorner.y = min(m_minCorner.y, pt.y);
		m_minCorner.z = min(m_minCorner.z, pt.z);

		m_maxCorner.x = max(m_maxCorner.x, pt.x);
		m_maxCorner.y = max(m_maxCorner.y, pt.y);
		m_maxCorner.z = max(m_maxCorner.z, pt.z);

		//更新外接球球径
		m_boundingRadius = Common::Vec3_Distance(m_minCorner, m_maxCorner) / 2;
	}

	void AxisAlignBBox::Merge( const AABB& aabb )
	{
		Merge(aabb.m_minCorner);
		Merge(aabb.m_maxCorner);
	}

	void AxisAlignBBox::Transform( const MAT44& matrix )
	{
		VEC3 oldMin, oldMax, currentCorner;

		// Getting the old values so that we can use the existing merge method.
		oldMin = m_minCorner;
		oldMax = m_maxCorner;

		// reset
		SetNull();

		// We sequentially compute the corners in the following order :
		// 0, 6, 5, 1, 2, 4 ,7 , 3
		// This sequence allows us to only change one member at a time to get at all corners.

		// For each one, we transform it using the matrix
		// Which gives the resulting point and merge the resulting point.

		// First corner 
		// min min min
		currentCorner = oldMin;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true).GetVec3() );

		// min,min,max
		currentCorner.z = oldMax.z;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true).GetVec3() );

		// min max max
		currentCorner.y = oldMax.y;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true).GetVec3() );

		// min max min
		currentCorner.z = oldMin.z;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true).GetVec3() );

		// max max min
		currentCorner.x = oldMax.x;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true).GetVec3() );

		// max max max
		currentCorner.z = oldMax.z;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true).GetVec3() );

		// max min max
		currentCorner.y = oldMin.y;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true).GetVec3() );

		// max min min
		currentCorner.z = oldMin.z;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true).GetVec3() ); 
	}
	//------------------------------------------------------------------------------------
	void AxisAlignBBox::SetNull()
	{
		m_minCorner.Set(10000,10000,10000);
		m_maxCorner.Set(-10000,-10000,-10000);
		m_boundingRadius = -1;
	}
	//------------------------------------------------------------------------------------
	VEC3 AxisAlignBBox::GetCenter() const
	{
		VEC3 ret = Common::Add_Vec3_By_Vec3(m_minCorner, m_maxCorner);
		ret = Common::Multiply_Vec3_By_K(ret, 0.5f);

		return std::move(ret);
	}
	//------------------------------------------------------------------------------------
	VEC3 AxisAlignBBox::GetSize() const
	{
		return VEC3(m_maxCorner.x - m_minCorner.x,
			m_maxCorner.y - m_minCorner.y,
			m_maxCorner.z - m_minCorner.z);
	}
}