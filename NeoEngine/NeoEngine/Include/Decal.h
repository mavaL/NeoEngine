/********************************************************************
	created:	2016/11/10 10:39
	filename	Decal.h
	author:		maval

	purpose:	Deferred decal system.
	ref:		1. http://martindevans.me/game-development/2015/02/27/Drawing-Stuff-On-Other-Stuff-With-Deferred-Screenspace-Decals/
				2. <<Game Engine Gems>> - "A Deferred Decal Rendering Technique"
*********************************************************************/
#ifndef Decal_h__
#define Decal_h__

#include "MathDef.h"

namespace Neo
{
	class Decal
	{
	public:
		Decal(const VEC3& pos, float size, const QUATERNION& rot);
		~Decal();

	public:
		void	Init(Texture* pDiffuseMap, Texture* pNormalMap);
		void	Render();
		void	SetClipDistance(float fDist);

	private:
		_declspec(align(16))
		struct cBufferDecal
		{
			MAT44		matRotation;
			float		fProjClip;		// Decal plane clip distance
		};
		cBufferDecal	m_cbDecal;
		static ConstantBuffer*	m_pCB_Decal;

		static Entity*	m_pUnitCube;
		VEC3			m_vPos;
		float			m_fSize;
		Material*		m_pMaterial;
	};
}


#endif // Decal_h__