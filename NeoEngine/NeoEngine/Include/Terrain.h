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
		void		Render();
		const AABB&	GetTerrainAABB() const { return m_terrainAABB; }
		float		GetHeightAt(const VEC3& vWorldPos);
		VEC2		WorldPosToTerrainCoord(const VEC3& vWorldPos);

	private:
		// Init height map
		void		_InitHeightMap(const STRING& filename, uint32 width, uint32 height);
		// Init the mesh which is the least tessellated level
		void		_InitMesh();
		// Init material
		void		_InitMaterial();

		void		_SmoothHeightMap(std::vector<float>& vecData);

		// Patch y-bounds for GPU frustum culling
		void		_CalcAllPatchBoundY();
		void		_CalcPatchBoundY(uint32 i, uint32 j);
		// Create density map from height map
		void		_CreateDensityMap();
		// Compute ans store aabb of terrain
		void		_CalcAABB();


		RenderSystem*		m_pRenderSystem;
		Mesh*				m_pMesh;
		Entity*				m_pEntity;
		AABB				m_terrainAABB;
		Texture*			m_pHeightMap;
		Texture*			m_pLayerTexArray;
		Texture*			m_pBlendMap;
		Texture*			m_pDensityMap;
		std::vector<float>	m_heightData;
		std::vector<VEC2>	m_patchBoundY;
		VEC2				m_vOrigin;
		VEC2				m_vDimension;
	};
}

#endif // Terrain_h__