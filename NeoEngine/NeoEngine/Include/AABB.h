/********************************************************************
	created:	2013/07/23
	created:	23:7:2013   9:21
	filename: 	AABB.h
	author:		maval
	
	purpose:	轴对齐包围盒
*********************************************************************/
#ifndef AABB_h__
#define AABB_h__

#include "Prerequiestity.h"
#include "MathDef.h"

namespace Common
{
	class AxisAlignBBox
	{
	public:
		AxisAlignBBox();

		void	SetNull();
		VEC3	GetCenter() const;
		void	Merge(const VEC3& pt);
		void	Merge(const AABB& aabb);
		VEC3	GetSize() const;
		bool	IsFinite() const { return m_boundingRadius != -1; }
		//变换AABB,from ogre. NB: 变换后需要保持轴对齐
		void	Transform(const MAT44& matrix);

		VEC3	m_minCorner, m_maxCorner;
		float	m_boundingRadius;		//外接球球径
	};	
}

#endif // AABB_h__