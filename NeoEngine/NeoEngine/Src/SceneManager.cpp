#include "stdafx.h"
#include "SceneManager.h"
#include "Camera.h"
#include "Water.h"
#include "Sky.h"
#include "Terrain.h"
#include "Scene.h"
#include "MeshLoader.h"
#include "ObjMeshLoader.h"
#include "D3D11RenderTarget.h"
#include "D3D11Texture.h"
#include "D3D11RenderSystem.h"
#include "Material.h"
#include "SSAO.h"
#include "ShadowMap.h"
#include "Mesh.h"
#include "TiledRenderer.h"
#include "StructuredBuffer.h"

#include "AmbientCube.h"
#include "MaterialManager.h"
#include "SkinModel.h"
#include "ThirdPersonCharacter.h"
#include "ShadowMapPSSM.h"


namespace Neo
{
	bool g_bTiled = false;

	//------------------------------------------------------------------------------------
	SceneManager::SceneManager()
	: m_pRenderSystem(g_env.pRenderSystem)
	, m_camera(nullptr)
	, m_pCurScene(nullptr)
	, m_pTerrain(nullptr)
	, m_pWater(nullptr)
	, m_pSky(nullptr)
	, m_pMeshLoader(new MeshLoader)
	, m_debugRT(eDebugRT_None)
	, m_pShadowMap(new ShadowMap)
	, m_renderFlag(eRenderPhase_All)
	, m_pRT_Compose(nullptr)
	, m_pRT_Depth(nullptr)
	, m_pTBDR(nullptr)
	, m_pAmbientCube(nullptr)
	, m_pTexEnvBRDF(nullptr)
	, m_pMtlCompose(nullptr)
	, m_pMtlLinearizeDepth(nullptr)
	, m_pMtlFinalScene(nullptr)
	, m_pHero(nullptr)
	{
		
	}
	//------------------------------------------------------------------------------------
	bool SceneManager::Init()
	{
		const uint32 nScreenWidth = m_pRenderSystem->GetWndWidth();
		const uint32 nScreenHeight = m_pRenderSystem->GetWndHeight();

		m_pTexEnvBRDF = new D3D11Texture(GetResPath("EnvironmentBRDF.dds"));

		m_pRT_Normal = m_pRenderSystem->CreateRenderTarget();
		m_pRT_Albedo = m_pRenderSystem->CreateRenderTarget();
		m_pRT_Specular = m_pRenderSystem->CreateRenderTarget();
		m_pRT_Compose = m_pRenderSystem->CreateRenderTarget();
		m_pRT_Depth = m_pRenderSystem->CreateRenderTarget();

		m_pRT_Normal->Init(nScreenWidth, nScreenHeight, ePF_A8R8G8B8, false);
		m_pRT_Albedo->Init(nScreenWidth, nScreenHeight, ePF_A8R8G8B8, false);
		m_pRT_Specular->Init(nScreenWidth, nScreenHeight, ePF_A8R8G8B8, false);
		m_pRT_Compose->Init(nScreenWidth, nScreenHeight, ePF_A16R16G16B16F, false);
		m_pRT_Depth->Init(nScreenWidth, nScreenHeight, ePF_R32F, false);

		m_camera = new Camera;
		m_camera->SetAspectRatio(nScreenWidth / (float)nScreenHeight);

		m_pSSAO = new SSAO;
		m_pTBDR = new TileBasedDeferredRenderer;
		m_pAmbientCube = new AmbientCube;

		{
			m_pDebugRTMesh = new Mesh;
			SubMesh* pSubMesh = new SubMesh;

			SVertex v[4] = 
			{
				SVertex(VEC3(0.5f,1.0f,0), VEC2(0,0)),
				SVertex(VEC3(1.0f,1.0f,0), VEC2(1,0)),
				SVertex(VEC3(0.5f,0.4f,0), VEC2(0,1)),
				SVertex(VEC3(1.0f,0.4f,0), VEC2(1,1))
			};
			DWORD index[6] = { 0,1,2, 1,3,2 };

			pSubMesh->InitVertData(eVertexType_General, v, ARRAYSIZE(v), true);
			pSubMesh->InitIndexData(index, ARRAYSIZE(index), true);

			m_pDebugRTMesh->AddSubMesh(pSubMesh);

			m_pDebugRTMaterial = MaterialManager::GetSingleton().NewMaterial("Mtl_DebugRT");
			m_pDebugRTMaterial->AddRef();
			m_pDebugRTMaterial->InitShader(GetResPath("DebugRT.hlsl"), GetResPath("DebugRT.hlsl"), eShader_UI);

			m_pDebugRTMesh->SetMaterial(m_pDebugRTMaterial);
		}

		{
			m_pMtlLinearizeDepth = MaterialManager::GetSingleton().NewMaterial("Mtl_LinearDepth");
			m_pMtlLinearizeDepth->AddRef();

			m_pMtlLinearizeDepth->SetTexture(0, m_pRenderSystem->GetDepthTexture());

			D3D11_SAMPLER_DESC samPoint = CD3D11_SAMPLER_DESC(CD3D11_DEFAULT());
			samPoint.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
			m_pMtlLinearizeDepth->SetSamplerStateDesc(0, samPoint);

			m_pMtlLinearizeDepth->InitShader(GetResPath("DeferredShading.hlsl"), GetResPath("DeferredShading.hlsl"), eShader_PostProcess,
				0, 0, "VS", "LinearizeDepthPS");
		}

		{
			m_pMtlCompose = MaterialManager::GetSingleton().NewMaterial("Mtl_DeferredShadingCompose");
			m_pMtlCompose->AddRef();

			m_pMtlCompose->SetTexture(0, m_pRT_Albedo->GetRenderTexture());
			m_pMtlCompose->SetTexture(1, m_pRT_Normal->GetRenderTexture());
			m_pMtlCompose->SetTexture(2, m_pRT_Specular->GetRenderTexture());
			m_pMtlCompose->SetTexture(3, m_pRT_Depth->GetRenderTexture());
#if USE_PSSM
			m_pMtlCompose->SetTexture(4, m_pShadowMap->GetPSSM()->GetShadowTexture(0));
			m_pMtlCompose->SetTexture(5, m_pShadowMap->GetPSSM()->GetShadowTexture(1));
			m_pMtlCompose->SetTexture(6, m_pShadowMap->GetPSSM()->GetShadowTexture(2));
#else
			m_pMtlCompose->SetTexture(4, m_pShadowMap->GetShadowTexture());
#endif
			m_pMtlCompose->SetTexture(7, m_pTexEnvBRDF);

			D3D11_SAMPLER_DESC samPoint = CD3D11_SAMPLER_DESC(CD3D11_DEFAULT());
			samPoint.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
			samPoint.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
			samPoint.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
			samPoint.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
			m_pMtlCompose->SetSamplerStateDesc(0, samPoint);

			samPoint.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
			m_pMtlCompose->SetSamplerStateDesc(1, samPoint);

			samPoint.Filter = D3D11_FILTER_COMPARISON_MIN_MAG_MIP_POINT;
			samPoint.ComparisonFunc = D3D11_COMPARISON_LESS;
			samPoint.AddressU = D3D11_TEXTURE_ADDRESS_BORDER;
			samPoint.AddressV = D3D11_TEXTURE_ADDRESS_BORDER;
			samPoint.BorderColor[0] = samPoint.BorderColor[1] = samPoint.BorderColor[2] = samPoint.BorderColor[3] = 1;
			m_pMtlCompose->SetSamplerStateDesc(2, samPoint);

			D3D_SHADER_MACRO macro = { "AMBIENT_CUBE", "" };

			m_pMtlCompose->InitShader(GetResPath("DeferredShading.hlsl"), GetResPath("DeferredShading.hlsl"), eShader_PostProcess,
				0, &macro, "VS", "ComposePS");
		}

		{
			m_pMtlFinalScene = MaterialManager::GetSingleton().NewMaterial("Mtl_HDRFinalScene");
			m_pMtlFinalScene->AddRef();

			m_pMtlFinalScene->SetTexture(0, m_pRT_Compose->GetRenderTexture());

			D3D11_SAMPLER_DESC samPoint = CD3D11_SAMPLER_DESC(CD3D11_DEFAULT());
			samPoint.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
			m_pMtlFinalScene->SetSamplerStateDesc(0, samPoint);

			D3D_SHADER_MACRO mac = { "TBDR", "" };
			m_pMtlFinalScene->InitShader(GetResPath("HDR.hlsl"), GetResPath("HDR.hlsl"), eShader_PostProcess, 0, g_bTiled ? &mac : nullptr);
		}

		return true;
	}
	//-------------------------------------------------------------------------------
	SceneManager::~SceneManager()
	{
		ClearScene();

		std::for_each(m_scenes.begin(), m_scenes.end(), std::default_delete<Scene>());
		m_scenes.clear();

		SAFE_DELETE(m_pHero);
		SAFE_DELETE(m_pAmbientCube);
		SAFE_DELETE(m_pShadowMap);
		SAFE_DELETE(m_camera);
		SAFE_DELETE(m_pDebugRTMesh);
		SAFE_DELETE(m_pMeshLoader);
		SAFE_DELETE(m_pSSAO);
		SAFE_DELETE(m_pTBDR);
		SAFE_RELEASE(m_pTexEnvBRDF);
		SAFE_RELEASE(m_pRT_Normal);
		SAFE_RELEASE(m_pRT_Albedo);
		SAFE_RELEASE(m_pRT_Specular);
		SAFE_RELEASE(m_pRT_Compose);
		SAFE_RELEASE(m_pRT_Depth);
		SAFE_RELEASE(m_pDebugRTMaterial);
		SAFE_RELEASE(m_pMtlCompose);
		SAFE_RELEASE(m_pMtlLinearizeDepth);
		SAFE_RELEASE(m_pMtlFinalScene);
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
	ThirdPersonCharacter* SceneManager::CreateHero(Scene* pScene, const VEC3& vCamPos)
	{
		SkinModel* pSkinModel = static_cast<SkinModel*>(g_env.pSceneMgr->CreateEntity(eEntity_SkinModel, GetResPath("sinbad\\sinbad.mesh")));
		pSkinModel->SetCastShadow(true);
		pSkinModel->SetScale(0.4f);

		pScene->AddEntity(pSkinModel);

		Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_sinbad", eVertexType_SkinModel, pSkinModel->GetMesh()->GetSubMeshCount());

		STRING strTexNames[] = { "sinbad\\sinbad_body.dds", "sinbad\\sinbad_body.dds",
			"sinbad\\sinbad_clothes.dds", "sinbad\\sinbad_body.dds", "sinbad\\sinbad_sword.dds",
			"sinbad\\sinbad_clothes.dds", "sinbad\\sinbad_clothes.dds" };

		VEC4 vSpecGloss[] = {
			VEC4(0.2f, 0.2f, 0.2f, 0.8f),			// Eyes
			VEC4(0.03f, 0.03f, 0.03f, 0.3f),		// Body
			VEC4(1.0f, 0.715f, 0.288f, 0.9f),		// Gold
			VEC4(0.03f, 0.03f, 0.03f, 0.4f),		// Teeth
			VEC4(0.1f, 0.1f, 0.1f, 0.5f),			// Sheaths
			VEC4(0.57f, 0.57f, 0.57f, 0.8f),		// Spikes
			VEC4(0.03f, 0.03f, 0.03f, 0.2f),		// Clothes
		};

		for (uint32 i = 0; i < pSkinModel->GetMesh()->GetSubMeshCount(); ++i)
		{
			pMaterial->GetSubMaterial(i).SetTexture(0, new Neo::D3D11Texture(GetResPath(strTexNames[i]), eTextureType_2D, 0, true));
			pMaterial->GetSubMaterial(i).glossiness = vSpecGloss[i].w;
			pMaterial->GetSubMaterial(i).specular = vSpecGloss[i].vec3;
		}

		pMaterial->InitShader(GetResPath("SkinModel.hlsl"), GetResPath("SkinModel.hlsl"), eShader_Opaque);
		pSkinModel->SetMaterial(pMaterial);
		pSkinModel->ShowBones(false);

		ThirdPersonCharacter* pCharacter = new ThirdPersonCharacter;
		pCharacter->Init(pSkinModel, m_camera, vCamPos);
		m_pHero = pCharacter;

		return pCharacter;
	}
	//-------------------------------------------------------------------------------
	void SceneManager::Update(float fDeltaTime)
	{
		if (!m_pCurScene)
		{
			return;
		}

		if (m_pHero)
		{
			m_pHero->Update(fDeltaTime);
		}

		if(m_pShadowMap)
			m_pShadowMap->Update();

		if (m_pWater)
			m_pWater->Update();

		if (m_pSky)
			m_pSky->Update();

		m_pCurScene->Update(fDeltaTime);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::Render(Material* pMaterial)
	{
		RenderPipline(m_renderFlag, pMaterial);

		static bool bInitTestCases = false;
		if (!bInitTestCases)
		{
			_InitAllScene();
			ToggleScene();
			bInitTestCases = true;
		}
	}
	//-------------------------------------------------------------------------------
	void SceneManager::RenderPipline(uint32 phaseFlag, Material* pMaterial)
	{
		if (!m_pCurScene)
		{
			return;
		}

		//================================================================================
		/// Shadow map phase
		//================================================================================
		if (m_pShadowMap)
		{
			m_curRenderPhase = eRenderPhase_ShadowMap;
			m_pShadowMap->Render();
		}

		//================================================================================
		/// GBuffer phase
		//================================================================================
		_RenderGBuffer(phaseFlag);

		//================================================================================
		/// Linearize depth pass
		//================================================================================
		_LinearizeDepth();

		//================================================================================
		/// GBuffer composition phase
		//================================================================================
		if (g_bTiled)
		{
			m_curRenderPhase = eRenderPhase_TiledCS;

			m_pTBDR->Render();
		} 
		else
		{
			_CompositionPass();
		}

		// Restore depth buffer, as some forward objects may need it.
		m_pRenderSystem->SetRenderTarget(&m_pRT_Compose, m_pRenderSystem->GetDepthTexture(), 1, false, false);

		// Sky
		if (m_pSky)
		{
			m_pSky->Render();
		}
		
		//================================================================================
		/// Render water
		//================================================================================
		if (m_pWater)
		{
			m_pWater->Render();
		}

		//================================================================================
		/// HDR final scene phase
		//================================================================================
		_HDRFinalScenePass();

		//================================================================================
		/// Render UI
		//================================================================================
		if (phaseFlag & eRenderPhase_UI)
		{
			SStateDepth oldDepthState = m_pRenderSystem->GetCurDepthState();
			SStateDepth depthState = oldDepthState;
			depthState.Desc.DepthEnable = FALSE;
			depthState.Desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
			m_pRenderSystem->SetDepthState(&depthState);

			auto& lstEntity = m_pCurScene->GetEntityList();
			for (uint32 i = 0; i < lstEntity.size(); ++i)
			{
				lstEntity[i]->DebugRender();
			}

			char szBuf[512];
			sprintf_s(szBuf, sizeof(szBuf), "lastFPS : %.2f", g_env.pFrameStat->lastFPS);
			m_pRenderSystem->DrawText(szBuf, IPOINT(10,10), Neo::SColor::YELLOW);

			const VEC3& vCamPos = m_camera->GetPos();
			sprintf_s(szBuf, sizeof(szBuf), "CamPos : (%.2f, %.2f, %.2f)", vCamPos.x, vCamPos.y, vCamPos.z);
			m_pRenderSystem->DrawText(szBuf, IPOINT(10, 25), Neo::SColor::YELLOW);

			// Debug RT
			if (m_debugRT == eDebugRT_SSAO)
			{
				m_pDebugRTMesh->Render();
			}
			else if (m_debugRT == eDebugRT_ShadowMap)
			{
				m_pDebugRTMesh->Render();
			}

			m_pRenderSystem->SetDepthState(&oldDepthState);
		}
	}
	//------------------------------------------------------------------------------------
	void SceneManager::_RenderGBuffer(uint32 phaseFlag)
	{
		m_curRenderPhase = eRenderPhase_GBuffer;

		m_pRenderSystem->UnbindTexture(m_pRT_Normal->GetRenderTexture());
		m_pRenderSystem->UnbindTexture(m_pRT_Albedo->GetRenderTexture());
		m_pRenderSystem->UnbindTexture(m_pRT_Specular->GetRenderTexture());

		D3D11RenderTarget* pRTs[3] = { m_pRT_Normal, m_pRT_Albedo, m_pRT_Specular };
		m_pRenderSystem->SetRenderTarget(pRTs, m_pRenderSystem->GetDepthTexture(), 3);

		// Terrain
		if (m_pTerrain)
		{
			m_pTerrain->Render();
		}

		m_pCurScene->RenderOpaque();

		m_pRenderSystem->SetRenderTarget(nullptr, m_pRenderSystem->GetDepthTexture(), 3, false, false);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::_LinearizeDepth()
	{
		m_curRenderPhase = eRenderPhase_None;

		m_pRT_Depth->RenderScreenQuad(m_pMtlLinearizeDepth, false, false);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::_CompositionPass()
	{
		m_curRenderPhase = eRenderPhase_Compose;

		m_pMtlCompose->SetTexture(10, m_pAmbientCube->GetIrradianceTexture());
		m_pMtlCompose->SetTexture(11, m_pAmbientCube->GetRadianceTexture());

		m_pRT_Compose->RenderScreenQuad(m_pMtlCompose, false, false);

		m_pRenderSystem->SetActiveTexture(3, nullptr);
		m_pRenderSystem->SetActiveTexture(4, nullptr);
		m_pRenderSystem->SetActiveTexture(5, nullptr);
		m_pRenderSystem->SetActiveTexture(6, nullptr);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::_HDRFinalScenePass()
	{
		m_curRenderPhase = eRenderPhase_FinalScene;

		m_pRenderSystem->SetRenderTarget(nullptr, nullptr, 1, false, false);

		D3D11_VIEWPORT vp = CD3D11_VIEWPORT(0.0f, 0.0f, m_pRenderSystem->GetWndWidth(), m_pRenderSystem->GetWndHeight());
		m_pRenderSystem->SetViewport(vp);

		m_pMtlFinalScene->Activate();

		ID3D11DeviceContext* pDeviceContext = g_env.pRenderSystem->GetDeviceContext();
		if (g_bTiled)
		{
			ID3D11ShaderResourceView* pLitBufferSRV = m_pTBDR->GetLitBuffer()->GetShaderResource();

			pDeviceContext->PSSetShaderResources(0, 1, &pLitBufferSRV);
		}

		D3D11RenderTarget::m_pQuadEntity->Render();

		if (g_bTiled)
		{
			ID3D11ShaderResourceView* pNull = nullptr;
			pDeviceContext->PSSetShaderResources(0, 1, &pNull);
		}
	}
	//------------------------------------------------------------------------------------
	void SceneManager::ClearScene()
	{
		SAFE_DELETE(m_pTerrain);
		SAFE_DELETE(m_pWater);
		SAFE_DELETE(m_pSky);
	}
	//------------------------------------------------------------------------------------
	Entity* SceneManager::CreateEntity(eEntity type, const STRING& meshname)
	{
		auto iter = m_meshes.find(meshname);

		if (iter == m_meshes.end())
		{
			Mesh* mesh = nullptr;
			SkeletonAnim* skel = nullptr;

			if (meshname.find(".obj") != STRING::npos)
			{
				mesh = ObjMeshLoader::LoadMesh(meshname, false, false);
			}
			else
			{
				mesh = MeshLoader::LoadMesh(meshname, false, &skel);

				if (skel)
				{
					m_skeletons.insert(std::make_pair(mesh, skel));
				}
			}

			iter = m_meshes.insert(std::make_pair(meshname, mesh)).first;
		}
		
		Mesh* mesh = iter->second;
		_AST(mesh);

		Entity* pEntity = nullptr;

		switch (type)
		{
		case eEntity_StaticModel:	
			pEntity = new Entity(mesh); 
			break;

		case eEntity_SkinModel:	
			{
				auto iterSkel = m_skeletons.find(mesh);
				_AST(iterSkel != m_skeletons.end());

				pEntity = new SkinModel(mesh, iterSkel->second);
			}
			break;

		default: _AST(0); return nullptr;
		}

		return pEntity;
	}
	//------------------------------------------------------------------------------------
	void SceneManager::EnableDebugRT( eDebugRT type )
	{
		m_debugRT = type;

		switch (type)
		{
		case eDebugRT_ShadowMap:
			m_pDebugRTMaterial->SetTexture(0, m_pShadowMap->GetShadowTexture());
			break;

		case eDebugRT_SSAO:
			m_pDebugRTMaterial->SetTexture(0, m_pSSAO->GetSSAOMap());
			break;

		case eDebugRT_None:
			m_pDebugRTMaterial->SetTexture(0, nullptr);
			break;

		default: assert(0); break;
		}
		
	}
	//----------------------------------------------------------------------------------------
	void SceneManager::ToggleScene()
	{
		EnableDebugRT(eDebugRT_None);

		static int curScene = -1;
		++curScene;
		if(curScene == m_scenes.size())
			curScene = 0;

		m_pCurScene = m_scenes[curScene];
		m_pCurScene->Enter();
	}
	//------------------------------------------------------------------------------------
	void SceneManager::SetupSunLight( const VEC3& dir, const SColor& color )
	{
		m_sunLight.lightDir = dir;
		m_sunLight.lightDir.Normalize();
		m_sunLight.lightColor = color;
	}
	//------------------------------------------------------------------------------------
	Mesh* SceneManager::CreateCubeMesh( const VEC3& minPt, const VEC3& maxPt )
	{
		SVertex vert[24];

		// front side
		vert[0].pos.Set(minPt.x, minPt.y, maxPt.z);
		vert[0].uv.Set(0, 1);
		vert[1].pos.Set(maxPt.x, minPt.y, maxPt.z);
		vert[1].uv.Set(1, 1);
		vert[2].pos.Set(maxPt.x, maxPt.y, maxPt.z);
		vert[2].uv.Set(1, 0);
		vert[3].pos.Set(minPt.x, maxPt.y, maxPt.z);
		vert[3].uv.Set(0, 0);

		vert[0].normal = vert[1].normal = vert[2].normal = vert[3].normal = VEC3::UNIT_Z;

		// back side
		vert[4].pos.Set(maxPt.x, minPt.y, minPt.z);
		vert[4].uv.Set(0, 1);
		vert[5].pos.Set(minPt.x, minPt.y, minPt.z);
		vert[5].uv.Set(1, 1);
		vert[6].pos.Set(minPt.x, maxPt.y, minPt.z);
		vert[6].uv.Set(1, 0);
		vert[7].pos.Set(maxPt.x, maxPt.y, minPt.z);
		vert[7].uv.Set(0, 0);

		vert[4].normal = vert[5].normal = vert[6].normal = vert[7].normal = VEC3::NEG_UNIT_Z;

		// left side
		vert[8].pos.Set(minPt.x, minPt.y, minPt.z);
		vert[9].pos.Set(minPt.x, minPt.y, maxPt.z);
		vert[10].pos.Set(minPt.x, maxPt.y, maxPt.z);
		vert[11].pos.Set(minPt.x, maxPt.y, minPt.z);
		vert[8].uv.Set(0, 1);
		vert[9].uv.Set(1, 1);
		vert[10].uv.Set(1, 0);
		vert[11].uv.Set(0, 0);

		vert[8].normal = vert[9].normal = vert[10].normal = vert[11].normal = VEC3::NEG_UNIT_X;

		// right side
		vert[12].pos.Set(maxPt.x, minPt.y, maxPt.z);
		vert[13].pos.Set(maxPt.x, minPt.y, minPt.z);
		vert[14].pos.Set(maxPt.x, maxPt.y, minPt.z);
		vert[15].pos.Set(maxPt.x, maxPt.y, maxPt.z);
		vert[12].uv.Set(0, 1);
		vert[13].uv.Set(1, 1);
		vert[14].uv.Set(1, 0);
		vert[15].uv.Set(0, 0);

		vert[12].normal = vert[13].normal = vert[14].normal = vert[15].normal = VEC3::UNIT_X;

		// up side
		vert[16].pos.Set(minPt.x, maxPt.y, maxPt.z);
		vert[17].pos.Set(maxPt.x, maxPt.y, maxPt.z);
		vert[18].pos.Set(maxPt.x, maxPt.y, minPt.z);
		vert[19].pos.Set(minPt.x, maxPt.y, minPt.z);
		vert[16].uv.Set(0, 1);
		vert[17].uv.Set(1, 1);
		vert[18].uv.Set(1, 0);
		vert[19].uv.Set(0, 0);

		vert[16].normal = vert[17].normal = vert[18].normal = vert[19].normal = VEC3::UNIT_Y;

		// down side
		vert[20].pos.Set(minPt.x, minPt.y, minPt.z);
		vert[21].pos.Set(maxPt.x, minPt.y, minPt.z);
		vert[22].pos.Set(maxPt.x, minPt.y, maxPt.z);
		vert[23].pos.Set(minPt.x, minPt.y, maxPt.z);
		vert[20].uv.Set(0, 1);
		vert[21].uv.Set(1, 1);
		vert[22].uv.Set(1, 0);
		vert[23].uv.Set(0, 0);

		vert[20].normal = vert[21].normal = vert[22].normal = vert[23].normal = VEC3::NEG_UNIT_Y;

		DWORD faces[6*2*3] = {
			// front
			0,1,2,
			0,2,3,

			// back
			4,5,6,
			4,6,7,

			// left
			8,9,10,
			8,10,11,

			// right
			12,13,14,
			12,14,15,

			// up
			16,17,18,
			16,18,19,

			// down
			20,21,22,
			20,22,23
		};

		Mesh* pCube =  new Mesh;
		SubMesh* pSubmesh = new SubMesh;

		pSubmesh->InitVertData(eVertexType_General, vert, 24, true);
		pSubmesh->InitIndexData(faces, 6*2*3, true);

		pCube->AddSubMesh(pSubmesh);

		return pCube;
	}
	//------------------------------------------------------------------------------------
	Mesh* SceneManager::CreateFrustumMesh( const VEC3& minBottom, const VEC3& maxBottom, const VEC3& minTop, const VEC3& maxTop )
	{
		Neo::SVertex vert[24];

		// front side
		vert[0].pos.Set(minBottom.x, minBottom.y, maxBottom.z);
		vert[0].uv.Set(0, 1);
		vert[1].pos.Set(maxBottom.x, minBottom.y, maxBottom.z);
		vert[1].uv.Set(1, 1);
		vert[2].pos.Set(maxTop.x, minTop.y, maxTop.z);
		vert[2].uv.Set(1, 0);
		vert[3].pos.Set(minTop.x, minTop.y, maxTop.z);
		vert[3].uv.Set(0, 0);

		// back side
		vert[4].pos.Set(maxBottom.x, minBottom.y, minBottom.z);
		vert[4].uv.Set(0, 1);
		vert[5].pos.Set(minBottom.x, minBottom.y, minBottom.z);
		vert[5].uv.Set(1, 1);
		vert[6].pos.Set(minTop.x, minTop.y, minTop.z);
		vert[6].uv.Set(1, 0);
		vert[7].pos.Set(maxTop.x, minTop.y, minTop.z);
		vert[7].uv.Set(0, 0);

		// left side
		vert[8].pos.Set(minBottom.x, minBottom.y, minBottom.z);
		vert[9].pos.Set(minBottom.x, minBottom.y, maxBottom.z);
		vert[10].pos.Set(minTop.x, minTop.y, maxTop.z);
		vert[11].pos.Set(minTop.x, minTop.y, minTop.z);
		vert[8].uv.Set(0, 1);
		vert[9].uv.Set(1, 1);
		vert[10].uv.Set(1, 0);
		vert[11].uv.Set(0, 0);

		// right side
		vert[12].pos.Set(maxBottom.x, minBottom.y, maxBottom.z);
		vert[13].pos.Set(maxBottom.x, minBottom.y, minBottom.z);
		vert[14].pos.Set(maxTop.x, minTop.y, minTop.z);
		vert[15].pos.Set(maxTop.x, minTop.y, maxTop.z);
		vert[12].uv.Set(0, 1);
		vert[13].uv.Set(1, 1);
		vert[14].uv.Set(1, 0);
		vert[15].uv.Set(0, 0);

		// up side
		vert[16].pos.Set(minTop.x, minTop.y, maxTop.z);
		vert[17].pos.Set(maxTop.x, minTop.y, maxTop.z);
		vert[18].pos.Set(maxTop.x, minTop.y, minTop.z);
		vert[19].pos.Set(minTop.x, minTop.y, minTop.z);
		vert[16].uv.Set(0, 1);
		vert[17].uv.Set(1, 1);
		vert[18].uv.Set(1, 0);
		vert[19].uv.Set(0, 0);

		// down side
		vert[20].pos.Set(minBottom.x, minBottom.y, minBottom.z);
		vert[21].pos.Set(maxBottom.x, minBottom.y, minBottom.z);
		vert[22].pos.Set(maxBottom.x, minBottom.y, maxBottom.z);
		vert[23].pos.Set(minBottom.x, minBottom.y, maxBottom.z);
		vert[20].uv.Set(0, 1);
		vert[21].uv.Set(1, 1);
		vert[22].uv.Set(1, 0);
		vert[23].uv.Set(0, 0);

		DWORD faces[6*2*3] = {
			// front
			0,1,2,
			0,2,3,

			// back
			4,5,6,
			4,6,7,

			// left
			8,9,10,
			8,10,11,

			// right
			12,13,14,
			12,14,15,

			// up
			16,17,18,
			16,18,19,

			// down
			20,21,22,
			20,22,23
		};

		Mesh* pMesh =  new Mesh;
		SubMesh* pSubmesh = new SubMesh;

		pSubmesh->InitVertData(eVertexType_General, vert, 24, true);
		pSubmesh->InitIndexData(faces, 6*2*3, true);

		pMesh->AddSubMesh(pSubmesh);

		return pMesh;
	}
	//------------------------------------------------------------------------------------
	Mesh* SceneManager::CreatePlaneMesh(float w, float h, float fUvMultiplier)
	{
		float halfW = w / 2;
		float halfH = h / 2;

		SVertex vert[4] =
		{
			SVertex(VEC3(-halfW	,0, +halfH)	, VEC2(0,0)							, VEC3::UNIT_Y),
			SVertex(VEC3(+halfW, 0, +halfH)	, VEC2(fUvMultiplier, 0)			, VEC3::UNIT_Y),
			SVertex(VEC3(+halfW, 0, -halfH)	, VEC2(fUvMultiplier, fUvMultiplier), VEC3::UNIT_Y),
			SVertex(VEC3(-halfW, 0, -halfH)	, VEC2(0, fUvMultiplier)			, VEC3::UNIT_Y),
		};

		DWORD dwIndex[6] = {0,1,3,1,2,3};

		Mesh* pMesh =  new Mesh;
		SubMesh* pSubmesh = new SubMesh;

		pSubmesh->InitVertData(eVertexType_General, vert, 4, true);
		pSubmesh->InitIndexData(dwIndex, 6, true);

		pMesh->AddSubMesh(pSubmesh);

		return pMesh;
	}
	//------------------------------------------------------------------------------------
	void SceneManager::AddPointLight(const SPointLight& light)
	{
		m_vecPointLights.push_back(light);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::SetShadowDepthBias(float fBias)
	{
		m_pRenderSystem->GetGlobalCB().shadowDepthBias = fBias;
	}
	//------------------------------------------------------------------------------------
	bool SceneManager::LoadSponzaScene(Scene* pScene)
	{
		WIN32_FIND_DATAA f;
		HANDLE h;
		BOOL bNext = true;

		// Load materials
		bool bOk = ObjMeshLoader::LoadMtlFile("sponza\\sponza.mtl");

		if (!bOk)
		{
			return false;
		}

		// Load all .mesh
		h = ::FindFirstFileA(GetResPath("sponza\\*.mesh").c_str(), &f);
		while (h != INVALID_HANDLE_VALUE && bNext)
		{
			STRING filename("sponza\\");
			filename += f.cFileName;

			Mesh* pMesh = MeshLoader::LoadMesh(GetResPath(filename), true);
			Entity* pEntity = new Entity(pMesh);
			pEntity->SetCastShadow(false);

			pScene->AddEntity(pEntity);

			bNext = ::FindNextFileA(h, &f);
		}

		::FindClose(h);

		return true;
	}
	//------------------------------------------------------------------------------------
	void SceneManager::SetEnableAmbientCube(bool bEnable)
	{
		D3D_SHADER_MACRO macro = {"AMBIENT_CUBE", ""};

		m_pMtlCompose->InitShader(GetResPath("DeferredShading.hlsl"), GetResPath("DeferredShading.hlsl"), eShader_PostProcess,
			0, bEnable ? &macro : nullptr, "VS", "ComposePS");
	}

}