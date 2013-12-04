#include "stdafx.h"
#include "AABB.h"

namespace Common
{

	AxisAlignBBox::AxisAlignBBox()
	{
		SetNull();
	}

	void AxisAlignBBox::Merge( const VEC4& pt )
	{
		m_minCorner.x = min(m_minCorner.x, pt.x);
		m_minCorner.y = min(m_minCorner.y, pt.y);
		m_minCorner.z = min(m_minCorner.z, pt.z);

		m_maxCorner.x = max(m_maxCorner.x, pt.x);
		m_maxCorner.y = max(m_maxCorner.y, pt.y);
		m_maxCorner.z = max(m_maxCorner.z, pt.z);
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
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true) );

		// min,min,max
		currentCorner.z = oldMax.z;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true) );

		// min max max
		currentCorner.y = oldMax.y;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true) );

		// min max min
		currentCorner.z = oldMin.z;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true) );

		// max max min
		currentCorner.x = oldMax.x;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true) );

		// max max max
		currentCorner.z = oldMax.z;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true) );

		// max min max
		currentCorner.y = oldMin.y;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true) );

		// max min min
		currentCorner.z = oldMin.z;
		Merge( Common::Transform_Vec3_By_Mat44(currentCorner, matrix, true) ); 

		//更新外接球球径
		m_boundingRadius = Common::Vec3_Distance(m_minCorner, m_maxCorner) / 2;
	}

}