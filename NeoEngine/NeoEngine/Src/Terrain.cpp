#include "stdafx.h"
#include "Terrain.h"
#include "RenderObject.h"
#include "Material.h"
#include "D3D11Texture.h"
#include "D3D11RenderSystem.h"


namespace Neo
{
	static const uint32		HEIGHT_MAP_SIZE	=	2049;
	static const uint32		CELLS_PER_PATCH	=	64;
	static const float		CELL_SPACE		=	0.5f;

	//------------------------------------------------------------------------------------
	Terrain::Terrain(const STRING& heightmapName)
	:m_pMesh(new RenderObject)
	,m_pRenderSystem(g_env.pRenderSystem)
	{
		_LoadHeightMap(heightmapName, HEIGHT_MAP_SIZE, HEIGHT_MAP_SIZE);
		_InitMesh();
		_InitMaterial();

		m_cBuffer.minTessDist = 20;
		m_cBuffer.maxTessDist = 500;
		m_cBuffer.minTess = 0;
		m_cBuffer.maxTess = 6;

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
		SAFE_DELETE(m_pMesh);
	}
	//------------------------------------------------------------------------------------
	void Terrain::_LoadHeightMap(const STRING& filename, uint32 width, uint32 height)
	{
		std::ifstream file(filename.c_str());
		if(file.fail())
			throw std::exception("Failed to load terrain height map!");

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
		pMaterial->InitShader(GetResPath("Terrain.hlsl"), GetResPath("Terrain.hlsl"), false);
		pMaterial->SetTexture(0, new D3D11Texture(GetResPath("lion.bmp")));
		pMaterial->InitTessellationShader(GetResPath("Terrain.hlsl"));

		m_pMesh->SetMaterial(pMaterial);
		pMaterial->Release();
	}
	//------------------------------------------------------------------------------------
	void Terrain::Render()
	{
		ID3D11DeviceContext* pContext = m_pRenderSystem->GetDeviceContext();

		D3D11_RASTERIZER_DESC& desc = m_pRenderSystem->GetRasterizeDesc();

		// Shut off z-buffer
		desc.CullMode = D3D11_CULL_NONE;
		m_pRenderSystem->SetRasterizeDesc(desc);

		pContext->UpdateSubresource( m_pCB, 0, NULL, &m_cBuffer, 0, 0 );
		pContext->VSSetConstantBuffers( 1, 1, &m_pCB );
		pContext->PSSetConstantBuffers( 1, 1, &m_pCB );
		pContext->HSSetConstantBuffers( 1, 1, &m_pCB );
		pContext->DSSetConstantBuffers( 1, 1, &m_pCB );

		m_pMesh->Render();

		m_pMesh->GetMaterial()->TurnOffTessellation();

		desc.CullMode = D3D11_CULL_BACK;
		m_pRenderSystem->SetRasterizeDesc(desc);
	}
}