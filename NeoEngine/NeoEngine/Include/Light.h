/********************************************************************
	created:	2016/06/27 16:50
	filename	Light.h
	author:		maval

	purpose:	Directional light, point light, spot light.
*********************************************************************/
#ifndef Light_h__
#define Light_h__


#include "Prerequiestity.h"
#include "MathDef.h"
#include "Color.h"

namespace Neo
{
	struct SDirectionLight
	{
		SDirectionLight() : lightDir(0, -1, 0), lightColor(SColor::WHITE) {}

		VEC3	lightDir;
		SColor	lightColor;
	};

	struct SPointLight 
	{
		SPointLight() :vPos(0, 0, 0), fRadius(0), fAtten(0), color(SColor::WHITE) {}

		// TODO: PBR invser-square atten
		SColor	color;
		VEC3	vPos;
		float	fRadius;
		float	fAtten;
	};

	typedef std::vector<SPointLight>	PointLightVector;

	////////////////////////////////////////////////////
	///	Light structure for tiled CS
	struct SPointLightCS
	{
		VEC3 position;
		float attenuationBegin;
		VEC3 color;
		float attenuationEnd;
	};
}

#endif // Light_h__