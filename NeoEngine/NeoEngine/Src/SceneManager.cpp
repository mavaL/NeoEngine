#include "stdafx.h"
#include "SceneManager.h"
#include "Water.h"
#include "Sky.h"
#include "Terrain.h"
#include "RenderObject.h"
#include "Scene.h"
#include "MeshLoader.h"
#include "D3D11RenderTarget.h"
#include "D3D11Texture.h"
#include "D3D11RenderSystem.h"
#include "Material.h"
#include "SSAO.h"


namespace Neo
{

	SceneManager::SceneManager()
	:m_pRenderSystem(g_env.pRenderSystem)
	,m_pTerrain(nullptr)
	,m_pWater(nullptr)
	,m_pSky(nullptr)
	,m_pMeshLoader(new MeshLoader)
	,m_debugRT(eDebugRT_None)
	,m_pSSAO(new SSAO)
	{
		m_pDebugRTMesh = new RenderObject;

		SVertex v[4] = 
		{
			SVertex(VEC3(0.5f,1.0f,0), VEC2(0,0)),
			SVertex(VEC3(1.0f,1.0f,0), VEC2(1,0)),
			SVertex(VEC3(0.5f,0.4f,0), VEC2(0,1)),
			SVertex(VEC3(1.0f,0.4f,0), VEC2(1,1))
		};
		DWORD index[6] = { 0,1,2, 1,3,2 };

		m_pDebugRTMesh->CreateVertexBuffer(v, ARRAYSIZE(v), true);
		m_pDebugRTMesh->CreateIndexBuffer(index, ARRAYSIZE(index), true);

		m_pDebugRTMaterial = new Material;
		m_pDebugRTMaterial->InitShader(GetResPath("DebugRT.hlsl"), GetResPath("DebugRT.hlsl"), false);

		m_pDebugRTMesh->SetMaterial(m_pDebugRTMaterial);
	}
	//-------------------------------------------------------------------------------
	SceneManager::~SceneManager()
	{
		ClearScene();
		SAFE_DELETE(m_pDebugRTMesh);
		SAFE_DELETE(m_pMeshLoader);
		SAFE_DELETE(m_pSSAO);
		SAFE_RELEASE(m_pDebugRTMaterial);
	}
	//-------------------------------------------------------------------------------
	void SceneManager::CreateSky()
	{
		m_pSky = new Sky;
	}
	//-------------------------------------------------------------------------------
	void SceneManager::CreateTerrain()
	{
		m_pTerrain = new Terrain(GetResPath("terrain.raw"));
	}
	//-------------------------------------------------------------------------------
	void SceneManager::CreateWater(float waterHeight)
	{
		m_pWater = new Water(waterHeight);
	}
	//-------------------------------------------------------------------------------
	void SceneManager::RenderPipline(uint32 phaseFlag, Material* pMaterial)
	{
		//================================================================================
		/// Render sky
		//================================================================================
		if (m_pSky && phaseFlag&eRenderPhase_Sky)
		{
			m_pSky->Render();
		}

		//================================================================================
		/// Render terrain
		//================================================================================
		if (m_pTerrain && phaseFlag&eRenderPhase_Terrain)
		{
			m_pTerrain->Render();
		}

		//================================================================================
		/// Render SSAO map
		//================================================================================
		if (phaseFlag & eRenderPhase_SSAO)
		{
			m_pSSAO->Update();

			// Make use of early-Z
			D3D11_DEPTH_STENCIL_DESC& depthDesc = m_pRenderSystem->GetDepthStencilDesc();
			depthDesc.DepthFunc = D3D11_COMPARISON_EQUAL;
			depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
			m_pRenderSystem->SetDepthStencelState(depthDesc);
		}

		//================================================================================
		/// Render solids
		//================================================================================
		if (phaseFlag & eRenderPhase_Solid)
		{
			for (size_t i=0; i<m_renderList_Solid.size(); ++i)
			{
				m_renderList_Solid[i]->Render(pMaterial);
			}
		}

		if (phaseFlag & eRenderPhase_SSAO)
		{
			D3D11_DEPTH_STENCIL_DESC& depthDesc = m_pRenderSystem->GetDepthStencilDesc();
			depthDesc.DepthFunc = D3D11_COMPARISON_LESS;
			depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
			m_pRenderSystem->SetDepthStencelState(depthDesc);
		}	
		
		//================================================================================
		/// Render water
		//================================================================================
		if (m_pWater && phaseFlag&eRenderPhase_Water)
		{
			m_pWater->Render();
		}

		//================================================================================
		/// Render UI
		//================================================================================
		if (phaseFlag & eRenderPhase_UI)
		{
			D3D11_DEPTH_STENCIL_DESC& depthDesc = m_pRenderSystem->GetDepthStencilDesc();
			depthDesc.DepthEnable = FALSE;
			depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
			m_pRenderSystem->SetDepthStencelState(depthDesc);

			char szBuf[64];
			sprintf_s(szBuf, sizeof(szBuf), "lastFPS : %f", g_env.pFrameStat->lastFPS);
			m_pRenderSystem->DrawText(szBuf, IPOINT(10,10), Neo::SColor::YELLOW);

			// Debug RT
			if (m_debugRT == eDebugRT_SSAO)
			{
				MAT44 matWorld = MAT44::IDENTITY;

				m_pDebugRTMesh->SetWorldMatrix(matWorld);
				m_pDebugRTMaterial->SetTexture(0, m_pSSAO->GetSSAOMap());
				m_pDebugRTMesh->Render();

				matWorld.SetTranslation(VEC4(0,-0.66f,0,1));
				m_pDebugRTMesh->SetWorldMatrix(matWorld);
				m_pDebugRTMaterial->SetTexture(0, m_pSSAO->GetBlurHMap());
				m_pDebugRTMesh->Render();

				matWorld.SetTranslation(VEC4(0,-0.66f*2,0,1));
				m_pDebugRTMesh->SetWorldMatrix(matWorld);
				m_pDebugRTMaterial->SetTexture(0, m_pSSAO->GetBlurVMap());
				m_pDebugRTMesh->Render();
			}

			depthDesc.DepthEnable = TRUE;
			depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
			m_pRenderSystem->SetDepthStencelState(depthDesc);
		}
	}
	//-------------------------------------------------------------------------------
	void SceneManager::Update()
	{
		if (m_pWater)
			m_pWater->Update();

		if (m_pSky)
			m_pSky->Update();

		for (size_t i=0; i<m_renderList_Solid.size(); ++i)
		{
			m_renderList_Solid[i]->OnFrameMove();
		}
	}
	//------------------------------------------------------------------------------------
	void SceneManager::ClearScene()
	{
		SAFE_DELETE(m_pTerrain);
		SAFE_DELETE(m_pWater);
		SAFE_DELETE(m_pSky);

		m_renderList_Solid.clear();
	}
	//------------------------------------------------------------------------------------
	RenderObject* SceneManager::LoadMesh( const STRING& filename )
	{
		return MeshLoader::LoadMesh(filename);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::EnableDebugRT( eDebugRT type )
	{
		m_debugRT = type;
	}
}