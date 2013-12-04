/********************************************************************
	created:	4:7:2013   20:14
	filename	GeometryDef.h
	author:		maval

	purpose:	渲染几何数据结构定义
*********************************************************************/
#ifndef GeometryDef_h__
#define GeometryDef_h__

#include "Prerequiestity.h"
#include "Utility.h"
#include "MathDef.h"
#include "PixelBox.h"
#include "Color.h"

namespace Neo
{
	///////////////////////////////////////////////////
	struct SVertex 
	{
		SVertex()
		:normal(VEC3::ZERO)
		,color(SColor::WHITE)
		,uv(-1,-1) {}

		VEC3	pos;
		VEC3	normal;
		VEC2	uv;
		SColor	color;
	};

	///////////////////////////////////////////////////
	struct SDirectionLight
	{
		SDirectionLight():dir(VEC3::ZERO),neg_dir(VEC3::ZERO),color(SColor::BLACK) {}

		VEC3	dir;
		VEC3	neg_dir;	//反方向
		SColor	color;
	};
}

#endif // GeometryDef_h__