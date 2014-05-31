#include "stdafx.h"
#include "Terrain.h"
#include "RenderObject.h"
#include "Material.h"
#include "D3D11Texture.h"
#include "D3D11RenderSystem.h"
#include "SceneManager.h"
#include "Camera.h"
#include "ShadowMap.h"


namespace Neo
{
	static const uint32		HEIGHT_MAP_SIZE	=	2049;
	static const uint32		CELLS_PER_PATCH	=	64;
	static const float		CELL_SPACE		=	0.5f;
	static const float		HEIGHT_SCALE	=	50;

	//------------------------------------------------------------------------------------
	Terrain::Terrain(const STRING& heightmapName)
	:m_pMesh(new RenderObject)
	,m_pRenderSystem(g_env.pRenderSystem)
	,m_pShadowMaterial(nullptr)
	{
		_InitHeightMap(heightmapName, HEIGHT_MAP_SIZE, HEIGHT_MAP_SIZE);
		_CreateDensityMap();
		_CalcAllPatchBoundY();
		_InitMesh();
		_CalcAABB();
		_InitMaterial();

		m_cBuffer.minTessDist = 20;
		m_cBuffer.maxTessDist = 500;
		m_cBuffer.minTess = 0;
		m_cBuffer.maxTess = 6;
		m_cBuffer.invTexSize.Set(1.0f/HEIGHT_MAP_SIZE, 1.0f/HEIGHT_MAP_SIZE);
		m_cBuffer.terrainCellSpace = CELL_SPACE;
		m_cBuffer.shadowMapTexelSize = 1.0f / ShadowMap::SHADOW_MAP_SIZE;

		D3D11_BUFFER_DESC bd;
		ZeroMemory( &bd, sizeof(bd) );
		bd.Usage = D3D11_USAGE_DEFAULT;
		bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.ByteWidth = sizeof(cBufferTerrain);

		HRESULT hr = S_OK;
		V(m_pRenderSystem->GetDevice()->CreateBuffer( &bd, NULL, &m_pCB ));
	}
	//------------------------------------------------------------------------------------
	Terrain::~Terrain()
	{
		SAFE_RELEASE(m_pCB);
		SAFE_RELEASE(m_pHeightMap);
		SAFE_RELEASE(m_pLayerTexArray);
		SAFE_RELEASE(m_pBlendMap);
		SAFE_RELEASE(m_pDensityMap);
		SAFE_RELEASE(m_pShadowMaterial);
		SAFE_DELETE(m_pMesh);
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

		m_pHeightMap = new D3D11Texture(HEIGHT_MAP_SIZE, HEIGHT_MAP_SIZE, (char*)&vecHeightData[0],
			ePF_R16F, eTextureUsage_DomainShader | eTextureUsage_WriteOnly, false);
	}
	//------------------------------------------------------------------------------------
	void Terrain::_CreateDensityMap()
	{
		// Create density map same desc as height map
		m_pDensityMap = new D3D11Texture(m_pHeightMap->GetWidth(), m_pHeightMap->GetHeight(), 
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
 
 		int nVerts = vertsPerSide * vertsPerSide;
 		int nIndex = patchPerSide * patchPerSide * 4;
 
 		SVertex* vert = new SVertex[nVerts];
 		DWORD* pIndices = new DWORD[nIndex];
 
 		if(!vert || !pIndices)
 			throw std::exception("Error!Not enough memory!");
 
 		float posZ = -halfDim;
 		for (int z=0; z<vertsPerSide; ++z)
 		{
 			float posX = -halfDim;
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
				vert[leftTopIdx].color.b = bound.x;
				vert[leftTopIdx].color.g = bound.y;
 
 				idx += 4;
 			}
 		}
 		m_pMesh->CreateVertexBuffer(vert, nVerts, true);
 		m_pMesh->CreateIndexBuffer(pIndices, nIndex, true);
 		SAFE_DELETE_ARRAY(vert);
 		SAFE_DELETE_ARRAY(pIndices);
	}
	//------------------------------------------------------------------------------------
	void Terrain::_InitMaterial()
	{
		Material* pMaterial = new Material;
		pMaterial->InitShader(GetResPath("Terrain.hlsl"), GetResPath("Terrain.hlsl"), true);

		D3D_SHADER_MACRO macro[] = { "GPU_FRUSTUM_CLIP", "", 0, 0 };
		// Turn GPU frustum clipping on
		pMaterial->InitTessellationShader(GetResPath("Terrain.hlsl"), macro);

		// Init shadow material
		m_pShadowMaterial = new Material;
		m_pShadowMaterial->InitShader(GetResPath("Terrain.hlsl"), GetResPath("Terrain_Depth.hlsl"), false);
		// Turn GPU frustum clipping off
		m_pShadowMaterial->InitTessellationShader(GetResPath("Terrain.hlsl"));

		// Create layer texture array
		StringVector vecTexNames;
// 		vecTexNames.push_back(GetResPath("darkdirt.dds"));
// 		vecTexNames.push_back(GetResPath("dirt_grayrocky.dds"));
// 		vecTexNames.push_back(GetResPath("lightdirt.dds"));
// 		vecTexNames.push_back(GetResPath("terrain\\detail\\rock_stone_011_2.dds"));
// 		vecTexNames.push_back(GetResPath("Snow.dds"));
		vecTexNames.push_back(GetResPath("dirt_grayrocky.dds"));
		vecTexNames.push_back(GetResPath("dirt_grayrocky.dds"));
		vecTexNames.push_back(GetResPath("dirt_grayrocky.dds"));
		vecTexNames.push_back(GetResPath("dirt_grayrocky.dds"));
		vecTexNames.push_back(GetResPath("dirt_grayrocky.dds"));

		m_pLayerTexArray = new D3D11Texture(vecTexNames);

		// Load layer blend map
		m_pBlendMap = new D3D11Texture(GetResPath("blend.dds"));

		// Setup texture stages
		pMaterial->SetTexture(0, m_pHeightMap);
		pMaterial->SetTexture(1, m_pLayerTexArray);
		pMaterial->SetTexture(2, m_pBlendMap);

		D3D11Texture* pNormalMap = new D3D11Texture(GetResPath("dirt_grayrocky_ddn.dds"));
		pMaterial->SetTexture(3, pNormalMap);
		pNormalMap->Release();

		pMaterial->SetTexture(4, g_env.pSceneMgr->GetShadowMap()->GetShadowTexture());

		{
			D3D11_SAMPLER_DESC& samDesc = pMaterial->GetSamplerStateDesc(0);
			samDesc.Filter = D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT;
			samDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
			samDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			pMaterial->SetSamplerStateDesc(0, samDesc);
		}
		
		{
			D3D11_SAMPLER_DESC& samDesc = pMaterial->GetSamplerStateDesc(1);
			samDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
			samDesc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
			samDesc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;

			pMaterial->SetSamplerStateDesc(1, samDesc);
			pMaterial->SetSamplerStateDesc(2, samDesc);
			pMaterial->SetSamplerStateDesc(3, samDesc);
		}

		{
			D3D11_SAMPLER_DESC& samDesc = pMaterial->GetSamplerStateDesc(4);
			samDesc.Filter = D3D11_FILTER_COMPARISON_ANISOTROPIC;
			samDesc.ComparisonFunc = D3D11_COMPARISON_LESS;
			samDesc.MaxAnisotropy = 16;
			samDesc.AddressU = D3D11_TEXTURE_ADDRESS_BORDER;
			samDesc.AddressV = D3D11_TEXTURE_ADDRESS_BORDER;
			samDesc.BorderColor[0] = samDesc.BorderColor[1] = samDesc.BorderColor[2] = samDesc.BorderColor[3] = 1;

			pMaterial->SetSamplerStateDesc(4, samDesc);
		}

		m_pMesh->SetMaterial(pMaterial);
		pMaterial->Release();
	}
	//------------------------------------------------------------------------------------
	void Terrain::Render(Material* pMaterial)
	{
		ID3D11DeviceContext* pContext = m_pRenderSystem->GetDeviceContext();
		D3D11_RASTERIZER_DESC& desc = m_pRenderSystem->GetRasterizeDesc();

		// Update constants
		Camera* pCam = g_env.pSceneMgr->GetCamera();
		const MAT44 matViewProj = pCam->GetViewMatrix() * pCam->GetProjMatrix();

		PLANE frustumPlane[6];
		m_pRenderSystem->ExtractFrustumWorldPlanes(frustumPlane, matViewProj);

		memcpy(&m_cBuffer.m_frustumPlane[0], frustumPlane, sizeof(PLANE) * 4);

		pContext->UpdateSubresource( m_pCB, 0, NULL, &m_cBuffer, 0, 0 );
		pContext->VSSetConstantBuffers( 1, 1, &m_pCB );
		pContext->PSSetConstantBuffers( 1, 1, &m_pCB );
		pContext->HSSetConstantBuffers( 1, 1, &m_pCB );
		pContext->DSSetConstantBuffers( 1, 1, &m_pCB );

		// Shut off z-buffer
		desc.CullMode = D3D11_CULL_NONE;
		m_pRenderSystem->SetRasterizeDesc(desc);

		m_pMesh->Render(pMaterial);

		m_pMesh->GetMaterial()->TurnOffTessellation();

		desc.CullMode = D3D11_CULL_BACK;
		m_pRenderSystem->SetRasterizeDesc(desc);
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

		float fMin = FLT_MAX;
		float fMax = FLT_MIN;

		for (uint32 x=0; x<vertsPerSide; ++x)
		{
			for (uint32 y=0; y<vertsPerSide; ++y)
			{
				float h = m_heightData[curIdx + y];

				fMin = min(fMin, h);
				fMax = max(fMax, h);
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
		vMin.x = vMin.z = -fHalfDim;
		vMax.x = vMax.z = fHalfDim;
		vMin.y = FLT_MAX;
		vMax.y = FLT_MIN;

		for (size_t i=0; i<m_patchBoundY.size(); ++i)
		{
			vMin.y = min(vMin.y, m_patchBoundY[i].x);
			vMax.y = max(vMax.y, m_patchBoundY[i].y);
		}

		m_terrainAABB.SetNull();
		m_terrainAABB.Merge(vMin);
		m_terrainAABB.Merge(vMax);
	}
}