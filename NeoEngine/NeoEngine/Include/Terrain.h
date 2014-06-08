/********************************************************************
	created:	2:12:2013   22:18
	filename	Terrain.h
	author:		maval

	purpose:	地形系统.
				这是第一版,实现方式基本来自<<D3D11龙书>>第19章.
*********************************************************************/
#ifndef Terrain_h__
#define Terrain_h__

#include "Prerequiestity.h"
#include "MathDef.h"
#include "AABB.h"

namespace Neo
{
	class Terrain
	{
	public:
		Terrain(const STRING& heightmapName);
		~Terrain();

	public:
		void		Render(Material* pMaterial = nullptr);
		Material*	GetShadowMaterial() { return m_pShadowMaterial; }
		const AABB&	GetTerrainAABB() const { return m_terrainAABB; }

	private:
		// Init height map
		void		_InitHeightMap(const STRING& filename, uint32 width, uint32 height);
		// Init the mesh which is the least tessellated level
		void		_InitMesh();
		// Init material
		void		_InitMaterial();
		// Init constant buffer
		void		_InitConstantBuf();

		void		_SmoothHeightMap(std::vector<float>& vecData);

		// Patch y-bounds for GPU frustum culling
		void		_CalcAllPatchBoundY();
		void		_CalcPatchBoundY(uint32 i, uint32 j);
		// Create density map from height map
		void		_CreateDensityMap();
		// Compute ans store aabb of terrain
		void		_CalcAABB();

		__declspec(align(16))
		struct cBufferTerrain
		{
			PLANE	m_frustumPlane[4];

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

			VEC2	invTexSize;
			float	terrainCellSpace;
		};

		D3D11RenderSystem*	m_pRenderSystem;
		Mesh*				m_pMesh;
		Entity*				m_pEntity;
		AABB				m_terrainAABB;
		D3D11Texture*		m_pHeightMap;
		D3D11Texture*		m_pLayerTexArray;
		D3D11Texture*		m_pBlendMap;
		D3D11Texture*		m_pDensityMap;
		cBufferTerrain		m_cBuffer;
		ID3D11Buffer*		m_pCB;
		std::vector<float>	m_heightData;
		std::vector<VEC2>	m_patchBoundY;
		Material*			m_pShadowMaterial;
	};
}

#endif // Terrain_h__