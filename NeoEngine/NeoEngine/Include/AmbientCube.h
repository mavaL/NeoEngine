/********************************************************************
	created:	2016/07/01 11:50
	filename	AmbientCube.h
	author:		maval

	purpose:	PBR ambient cubemap.
	references:	https://seblagarde.wordpress.com/2012/06/10/amd-cubemapgen-for-physically-based-rendering/		// CubeMapGen	- Open source tool
				https://github.com/dariomanesku/cmft															// cmft			- Open source tool
				https://www.knaldtech.com/get-lys/																// lys			- Commercial tool
				https://ndotl.wordpress.com/2015/03/07/pbr-cubemap-filtering/

*********************************************************************/
#ifndef AmbientCube_h__
#define AmbientCube_h__


#include "Prerequiestity.h"

namespace Neo
{
	class AmbientCube
	{
	public:
		AmbientCube();
		~AmbientCube();

	public:
		// Generate a base cubemap for later CubeMapGen use.
		bool			GenerateHDRCubeMap(const VEC3& pos, const STRING& filename, Scene* pScene);
		// Setup run-time cubemap
		void			SetupCubeMap(Texture* pIEM, Texture* pREM);

		Texture*		GetIrradianceTexture() { return m_pTexIrradiance; }
		Texture*		GetRadianceTexture() { return m_pTexRadiance; }
		bool			IsEnabled() const	{ return m_pTexIrradiance && m_pTexRadiance; }

	private:
		Texture*		m_pTexIrradiance;	// IEM
		Texture*		m_pTexRadiance;		// REM
	};
}


#endif // AmbientCube_h__