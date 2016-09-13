#include "stdafx.h"
#include "Terrain.h"
#include "Material.h"
#include "Texture.h"
#include "RenderSystem.h"
#include "SceneManager.h"
#include "Camera.h"
#include "ShadowMap.h"
#include "Mesh.h"
#include "Entity.h"
#include "MaterialManager.h"
#include "Renderer.h"


namespace Neo
{
	static const uint32		HEIGHT_MAP_SIZE	=	2049;
	static const uint32		CELLS_PER_PATCH	=	64;
	static const float		CELL_SPACE		=	0.5f;
	static const float		HEIGHT_SCALE	=	50;

	//------------------------------------------------------------------------------------
	Terrain::Terrain(const STRING& heightmapName)
	:m_pMesh(nullptr)
	,m_pEntity(nullptr)
	,m_pRenderSystem(g_env.pRenderer->GetRenderSys())
	{
		_InitHeightMap(heightmapName, HEIGHT_MAP_SIZE, HEIGHT_MAP_SIZE);
		_CreateDensityMap();
		_CalcAllPatchBoundY();
		_InitMesh();
		_CalcAABB();
		_InitMaterial();

		cBufferTerrain& cb = g_env.pRenderer->GetTerrainCB();
		
		cb.minTessDist = 20;
		cb.maxTessDist = 500;
		cb.minTess = 0;
		cb.maxTess = 6;
		cb.invTexSize.Set(1.0f / HEIGHT_MAP_SIZE, 1.0f / HEIGHT_MAP_SIZE);
		cb.terrainCellSpace = CELL_SPACE;
	}
	//------------------------------------------------------------------------------------
	Terrain::~Terrain()
	{
		SAFE_RELEASE(m_pHeightMap);
		SAFE_RELEASE(m_pLayerTexArray);
		SAFE_RELEASE(m_pBlendMap);
		SAFE_RELEASE(m_pDensityMap);
		SAFE_DELETE(m_pMesh);
		SAFE_DELETE(m_pEntity);
	}
	//------------------------------------------------------------------------------------
	void Terrain::_InitHeightMap(const STRING& filename, uint32 width, uint32 height)
	{
		std::ifstream file;
		file.open(filename.c_str(), std::ios_base::binary);

		uint32 nCount = width * height;
		std::vector<uint8> vecSrcData(nCount);
		file.read((char*)&vecSrcData[0], nCount);
		file.close();

		// Height scale
		m_heightData.resize(nCount);
		std::transform(vecSrcData.begin(), vecSrcData.end(), m_heightData.begin(), [=](uint8 data)
		{ 
			return data / 255.0f * HEIGHT_SCALE;
		});

		// Smooth
		_SmoothHeightMap(m_heightData);
		_SmoothHeightMap(m_heightData);

		// Convert to half-float
		std::vector<HALF> vecHeightData(nCount);
		std::transform(m_heightData.begin(), m_heightData.end(), vecHeightData.begin(), XMConvertFloatToHalf);

		m_pHeightMap = m_pRenderSystem->CreateTextureManual(HEIGHT_MAP_SIZE, HEIGHT_MAP_SIZE, (char*)&vecHeightData[0],
			ePF_R16F, eTextureUsage_DomainShader | eTextureUsage_WriteOnly, false);
	}
	//------------------------------------------------------------------------------------
	void Terrain::_CreateDensityMap()
	{
		// Create density map same desc as height map
		m_pDensityMap = m_pRenderSystem->CreateTextureManual(m_pHeightMap->GetWidth(), m_pHeightMap->GetHeight(),
			nullptr, m_pHeightMap->GetFormat(), eTextureUsage_HullShader | eTextureUsage_ReadWrite, false);

		for (uint32 i=0; i<HEIGHT_MAP_SIZE; ++i)
		{
			for (uint32 j=0; j<HEIGHT_MAP_SIZE; ++j)
			{

			}
		}
	}
	//------------------------------------------------------------------------------------
	void Terrain::_InitMesh()
	{
 		const uint32 patchPerSide = (HEIGHT_MAP_SIZE - 1) / CELLS_PER_PATCH;
 		const uint32 vertsPerSide = patchPerSide + 1;
 		const float dimension = (HEIGHT_MAP_SIZE - 1.0f) * CELL_SPACE;
 		const float halfDim = dimension / 2;	
 		float uvInc = 1.0f / patchPerSide;

		m_vOrigin.Set(-halfDim, -halfDim);
		m_vDimension.Set(dimension, dimension);
 
 		int nVerts = vertsPerSide * vertsPerSide;
 		int nIndex = patchPerSide * patchPerSide * 4;
 
 		SVertex* vert = new SVertex[nVerts];
 		DWORD* pIndices = new DWORD[nIndex];
 
 		if(!vert || !pIndices)
 			throw std::exception("Error!Not enough memory!");
 
		float posZ = m_vOrigin.y;
 		for (int z=0; z<vertsPerSide; ++z)
 		{
			float posX = m_vOrigin.x;
 			for (int x=0; x<vertsPerSide; ++x)
 			{
 				int idx = z*vertsPerSide+x;
 
 				vert[idx].pos.Set(posX, 0, posZ);
 				vert[idx].uv.Set(x*uvInc, z*uvInc);
 
 				posX += CELL_SPACE * CELLS_PER_PATCH;
 			}
 			posZ += CELL_SPACE * CELLS_PER_PATCH;
 		}
 
 		int idx = 0;
 		for (int z=0; z<patchPerSide; ++z)
 		{
 			for (int x=0; x<patchPerSide; ++x)
 			{
 				pIndices[idx + 0] = z		* vertsPerSide + x;
 				pIndices[idx + 1] = z		* vertsPerSide + x + 1;
 				pIndices[idx + 2] = (z + 1) * vertsPerSide + x;
 				pIndices[idx + 3] = (z + 1) * vertsPerSide + x + 1;

				// Store y-bound
				const uint32 leftTopIdx = z * vertsPerSide + x;
				const VEC2& bound = m_patchBoundY[z * patchPerSide + x];
				vert[leftTopIdx].color.r = bound.x;
				vert[leftTopIdx].color.g = bound.y;
 
 				idx += 4;
 			}
 		}		m_pMesh = new Mesh;
		SubMesh* pSubMesh = new SubMesh;
 		pSubMesh->InitVertData(eVertexType_General, vert, nVerts, true);
 		pSubMesh->InitIndexData(pIndices, nIndex, true);		m_pMesh->AddSubMesh(pSubMesh);		m_pMesh->SetPrimitiveType(ePrimitive_4_Control_Point_PatchList);		m_pEntity = new Entity(m_pMesh, false);		m_pEntity->SetCastShadow(false);
 		SAFE_DELETE_ARRAY(vert);
 		SAFE_DELETE_ARRAY(pIndices);
	}
	//------------------------------------------------------------------------------------
	void Terrain::_InitMaterial()
	{
		Material* pMaterial = MaterialManager::GetSingleton().NewMaterial("Mtl_Terrain");

		// Create layer texture array
		StringVector vecTexNames;
		vecTexNames.push_back(GetResPath("darkdirt.dds"));
		vecTexNames.push_back(GetResPath("dirt_grayrocky.dds"));
		vecTexNames.push_back(GetResPath("lightdirt.dds"));
		vecTexNames.push_back(GetResPath("grass.dds"));
		vecTexNames.push_back(GetResPath("Snow.dds"));

		m_pLayerTexArray = g_env.pRenderer->GetRenderSys()->CreateTextureArray(vecTexNames, true);

		// Load layer blend map
		m_pBlendMap = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("blend.dds"));

		// Setup texture stages
		pMaterial->SetTexture(0, m_pHeightMap);
		pMaterial->SetTexture(1, m_pLayerTexArray);
		pMaterial->SetTexture(2, m_pBlendMap);

		//D3D11Texture* pNormalMap = new D3D11Texture(GetResPath("dirt_grayrocky_ddn.dds"));
		//pMaterial->SetTexture(3, pNormalMap);

		pMaterial->SetCullMode(eCull_NONE);

		// Turn GPU frustum clipping on
		D3D_SHADER_MACRO macro[] = { "GPU_FRUSTUM_CLIP", "" };

		pMaterial->InitShader(GetResPath("Terrain.hlsl"), eShader_Opaque, 0, macro);
		pMaterial->InitTessellationShader(GetResPath("Terrain.hlsl"), 0, macro);


		{
			SSamplerDesc& samDesc = pMaterial->GetSamplerStateDesc(0);
			samDesc.Filter = SF_MIN_MAG_LINEAR_MIP_POINT;
			samDesc.AddressU = eTextureAddressMode_CLAMP;
			samDesc.AddressV = eTextureAddressMode_CLAMP;

			pMaterial->SetSamplerStateDesc(0, samDesc, false, false, true);
		}
		
		{
			SSamplerDesc& samDesc = pMaterial->GetSamplerStateDesc(1);
			samDesc.Filter = SF_MIN_MAG_MIP_LINEAR;
			samDesc.AddressU = eTextureAddressMode_WRAP;
			samDesc.AddressV = eTextureAddressMode_WRAP;

			pMaterial->SetSamplerStateDesc(1, samDesc, false, false, true);
		}

		m_pMesh->SetMaterial(pMaterial);
	}
	//------------------------------------------------------------------------------------
	void Terrain::Render()
	{
		// Update constants
		Camera* pCam = g_env.pSceneMgr->GetCamera();
		cBufferTerrain& cb = g_env.pRenderer->GetTerrainCB();

		cb.m_frustumPlane[0] = pCam->GetFrustumPlane(0);
		cb.m_frustumPlane[1] = pCam->GetFrustumPlane(1);
		cb.m_frustumPlane[2] = pCam->GetFrustumPlane(2);
		cb.m_frustumPlane[3] = pCam->GetFrustumPlane(3);

		g_env.pRenderer->UpdateTerrainCBuffer();
		g_env.pRenderer->UpdateGlobalCBuffer(true, false);

		m_pEntity->Render();

		m_pMesh->GetMaterial()->TurnOffTessellation();
	}
	//------------------------------------------------------------------------------------
	static float Average(std::vector<float>& vecData, int i, int j)
	{
		POINT filter[9] = 
		{
			{-1,-1}, {0,-1}, {1,-1},
			{-1,0},	 {0,0},  {1,0},
			{-1,1},  {0,1},  {1,1}
		};

		float fSum = 0, fCnt = 0;

		for (int ii=0; ii<9; ++ii)
		{
			int ix = i + filter[ii].x;
			int iy= j + filter[ii].y;

			if (ix < 0 || ix >= HEIGHT_MAP_SIZE ||
				iy < 0 || iy >= HEIGHT_MAP_SIZE)
				continue;

			fSum += vecData[ix*HEIGHT_MAP_SIZE+iy];
			fCnt += 1.0f;
		}

		return fSum / fCnt;
	}
	//------------------------------------------------------------------------------------
	void Terrain::_SmoothHeightMap(std::vector<float>& vecData)
	{
		std::vector<float> tmp(vecData.size());

		for(UINT i = 0; i < HEIGHT_MAP_SIZE; ++i)
		{
			for(UINT j = 0; j < HEIGHT_MAP_SIZE; ++j)
			{
				tmp[i*HEIGHT_MAP_SIZE+j] = Average(vecData, i,j);
			}
		}

		vecData.swap(tmp);
	}
	//------------------------------------------------------------------------------------
	void Terrain::_CalcAllPatchBoundY()
	{
		const uint32 patchPerSide = (HEIGHT_MAP_SIZE - 1) / CELLS_PER_PATCH;

		m_patchBoundY.resize(patchPerSide * patchPerSide);

		for (uint32 i=0; i<patchPerSide; ++i)
		{
			for (uint32 j=0; j<patchPerSide; ++j)
			{
				_CalcPatchBoundY(i, j);
			}
		}
	}
	//------------------------------------------------------------------------------------
	void Terrain::_CalcPatchBoundY(uint32 i, uint32 j)
	{
		const uint32 patchPerSide = (HEIGHT_MAP_SIZE - 1) / CELLS_PER_PATCH;
		const uint32 vertsPerSide = CELLS_PER_PATCH + 1;
		uint32 curIdx = i * HEIGHT_MAP_SIZE * CELLS_PER_PATCH + j * CELLS_PER_PATCH;

		float fMin = std::numeric_limits<float>::max();
		float fMax = std::numeric_limits<float>::min();

		for (uint32 x=0; x<vertsPerSide; ++x)
		{
			for (uint32 y=0; y<vertsPerSide; ++y)
			{
				float h = m_heightData[curIdx + y];

				fMin = Min(fMin, h);
				fMax = Max(fMax, h);
			}

			curIdx += HEIGHT_MAP_SIZE;
		}

		m_patchBoundY[i * patchPerSide + j].x = fMin;
		m_patchBoundY[i * patchPerSide + j].y = fMax;
	}
	//------------------------------------------------------------------------------------
	void Terrain::_CalcAABB()
	{
		const float fHalfDim = (HEIGHT_MAP_SIZE - 1.0f) * CELL_SPACE / 2;
		VEC3 vMin, vMax;
		vMin.x = m_vOrigin.x;
		vMin.z = m_vOrigin.y;
		vMax.x = m_vOrigin.x + m_vDimension.x;
		vMax.z = m_vOrigin.y + m_vDimension.y;
		vMin.y = std::numeric_limits<float>::max();
		vMax.y = std::numeric_limits<float>::min();

		for (size_t i=0; i<m_patchBoundY.size(); ++i)
		{
			vMin.y = Min(vMin.y, m_patchBoundY[i].x);
			vMax.y = Max(vMax.y, m_patchBoundY[i].y);
		}

		m_terrainAABB.SetNull();
		m_terrainAABB.Merge(vMin);
		m_terrainAABB.Merge(vMax);
	}
	//------------------------------------------------------------------------------------
	float Terrain::GetHeightAt(const VEC3& vWorldPos)
	{
		const VEC2 vTerrainPos = WorldPosToTerrainCoord(vWorldPos);

		int x = (int)vTerrainPos.x;
		int y = (int)vTerrainPos.y;

		return m_heightData[y * HEIGHT_MAP_SIZE + x];
	}
	//------------------------------------------------------------------------------------
	VEC2 Terrain::WorldPosToTerrainCoord(const VEC3& vWorldPos)
	{
		VEC2 vTerrainPos(vWorldPos.x, vWorldPos.z);
		vTerrainPos -= m_vOrigin;
		vTerrainPos /= m_vDimension;
		vTerrainPos *= HEIGHT_MAP_SIZE;

		return vTerrainPos;
	}

}