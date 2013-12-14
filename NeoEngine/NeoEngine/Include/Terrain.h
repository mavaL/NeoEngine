/********************************************************************
	created:	2:12:2013   22:18
	filename	Terrain.h
	author:		maval

	purpose:	地形系统
*********************************************************************/
#ifndef Terrain_h__
#define Terrain_h__

#include "Prerequiestity.h"

namespace Neo
{
	class Terrain
	{
	public:
		Terrain(const STRING& heightmapName);
		~Terrain();

	public:
		void		Render();

	private:
		// Load height map
		void		_LoadHeightMap(const STRING& filename, uint32 width, uint32 height);
		// Init the mesh which is the least tessellated level
		void		_InitMesh();
		// Init material
		void		_InitMaterial();

		__declspec(align(16))
		struct cBufferTerrain
		{
			// When distance is minimum, the tessellation is maximum
			// When distance is maximum, the tessellation is minimum
			float	minTessDist;
			float	maxTessDist;

			// Exponents for power of 2 tessellation.  The tessellation
			// range is [2^(gMinTess), 2^(gMaxTess)].  Since the maximum
			// tessellation is 64, this means gMaxTess can be at most 6
			// since 2^6 = 64.
			float	minTess;
			float	maxTess;
		};

		D3D11RenderSystem*	m_pRenderSystem;
		RenderObject*		m_pMesh;
		cBufferTerrain		m_cBuffer;
		ID3D11Buffer*		m_pCB;
	};
}

#endif // Terrain_h__