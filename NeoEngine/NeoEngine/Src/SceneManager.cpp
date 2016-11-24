#include "stdafx.h"
#include "SceneManager.h"
#include "Camera.h"
#include "Water.h"
#include "Sky.h"
#include "Scene.h"
#include "MeshLoader.h"
#include "ObjMeshLoader.h"
#include "RenderTarget.h"
#include "Texture.h"
#include "RenderSystem.h"
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
#include "Buffer.h"
#include "Renderer.h"
#include "Octree.h"
#include "Terrain/TerrainGroup.h"
#include "Decal.h"


namespace Neo
{
	bool g_bTiled = false;

	//------------------------------------------------------------------------------------
	SceneManager::SceneManager()
	: m_pRenderSystem(g_env.pRenderer->GetRenderSys())
	, m_camera(nullptr)
	, m_pCurScene(nullptr)
	, m_pWater(nullptr)
	, m_pSky(nullptr)
	, m_pMeshLoader(new MeshLoader)
	, m_debugRT(eDebugRT_None)
	, m_pShadowMap(new ShadowMap)
	, m_pRT_Compose(nullptr)
	, m_pRT_Depth(nullptr)
	, m_pTBDR(nullptr)
	, m_pAmbientCube(nullptr)
	, m_pTexEnvBRDF(nullptr)
	, m_pMtlCompose(nullptr)
	, m_pMtlLinearizeDepth(nullptr)
	, m_pMtlFinalScene(nullptr)
	, m_pHero(nullptr)
	, m_nShadowMapSize(0)
	, m_pDebugRTMaterial(nullptr)
	, m_pOctree(nullptr)
	, m_pTerrainOptions(nullptr)
	, m_pTerrain(nullptr)
	{
		
	}
	//------------------------------------------------------------------------------------
	bool SceneManager::Init()
	{
		const uint32 nScreenWidth = g_env.pRenderer->GetWndWidth();
		const uint32 nScreenHeight = g_env.pRenderer->GetWndHeight();

		AABB aabb;
		aabb.Merge(VEC3(-10000.0f, -10000.0f, -10000.0f));
		aabb.Merge(VEC3(10000.0f, 10000.0f, 10000.0f));

		m_pTexEnvBRDF = m_pRenderSystem->LoadTexture(GetResPath("EnvironmentBRDF.dds"));

		m_pRT_Normal = g_env.pRenderer->CreateRenderTarget(nScreenWidth, nScreenHeight, 1, ePF_A8R8G8B8, 0);
		m_pRT_Albedo = g_env.pRenderer->CreateRenderTarget(nScreenWidth, nScreenHeight, 1, ePF_A8R8G8B8, 0);
		m_pRT_Specular = g_env.pRenderer->CreateRenderTarget(nScreenWidth, nScreenHeight, 1, ePF_A8R8G8B8, 0);
		m_pRT_Compose = g_env.pRenderer->CreateRenderTarget(nScreenWidth, nScreenHeight, 1, ePF_A16R16G16B16F, 0);
		m_pRT_Depth = g_env.pRenderer->CreateRenderTarget(nScreenWidth, nScreenHeight, 1, ePF_R32F, 0);

		m_camera = new Camera;
		m_camera->SetAspectRatio(nScreenWidth / (float)nScreenHeight);

		m_pSSAO = new SSAO;
		m_pTBDR = new TileBasedDeferredRenderer;
		m_pAmbientCube = new AmbientCube;

		SetShadowMapSize(512);

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

			//m_pDebugRTMaterial = MaterialManager::GetSingleton().NewMaterial("Mtl_DebugRT");
			//m_pDebugRTMaterial->AddRef();
			//m_pDebugRTMaterial->InitShader(("DebugRT"), eShader_UI);

			//m_pDebugRTMesh->SetMaterial(m_pDebugRTMaterial);
		}

		{
			m_pMtlLinearizeDepth = MaterialManager::GetSingleton().NewMaterial("Mtl_LinearDepth");
			m_pMtlLinearizeDepth->AddRef();

			m_pMtlLinearizeDepth->SetTexture(0, m_pRenderSystem->GetDepthBuffer());

			SSamplerDesc samPoint;
			samPoint.Filter = SF_MIN_MAG_MIP_POINT;
			m_pMtlLinearizeDepth->SetSamplerStateDesc(0, samPoint);

			m_pMtlLinearizeDepth->InitShader(("LinearizeDepth"), eShader_PostProcess, 0, 0, "VS", "LinearizeDepthPS");
		}

		{
			m_pMtlCompose = MaterialManager::GetSingleton().NewMaterial("Mtl_DeferredShadingCompose");
			m_pMtlCompose->AddRef();

			SSamplerDesc samPoint;
			samPoint.Filter = SF_MIN_MAG_MIP_POINT;
			m_pMtlCompose->SetSamplerStateDesc(0, samPoint);
			m_pMtlCompose->SetSamplerStateDesc(3, samPoint);

			samPoint.Filter = SF_MIN_MAG_MIP_LINEAR;
			m_pMtlCompose->SetSamplerStateDesc(1, samPoint);
			m_pMtlCompose->SetSamplerStateDesc(7, samPoint);
			m_pMtlCompose->SetSamplerStateDesc(10, samPoint);
			m_pMtlCompose->SetSamplerStateDesc(11, samPoint);

#if USE_ESM
			samPoint.Filter = SF_MIN_MAG_MIP_LINEAR;
#else
			samPoint.Filter = SF_MIN_MAG_MIP_POINT;
#endif
			samPoint.AddressU = eTextureAddressMode_CLAMP;
			samPoint.AddressV = eTextureAddressMode_CLAMP;
			m_pMtlCompose->SetSamplerStateDesc(2, samPoint);
			m_pMtlCompose->SetSamplerStateDesc(4, samPoint);
			m_pMtlCompose->SetSamplerStateDesc(5, samPoint);
			m_pMtlCompose->SetSamplerStateDesc(6, samPoint);
		}

		{
			m_pMtlFinalScene = MaterialManager::GetSingleton().NewMaterial("Mtl_HDRFinalScene");
			m_pMtlFinalScene->AddRef();

			m_pMtlFinalScene->SetTexture(0, m_pRT_Compose->GetRenderTexture());

			SSamplerDesc samPoint;
			samPoint.Filter = SF_MIN_MAG_MIP_POINT;
			m_pMtlFinalScene->SetSamplerStateDesc(0, samPoint);

			D3D_SHADER_MACRO mac = { "TBDR", "" };
			m_pMtlFinalScene->InitShader(("HDR"), eShader_PostProcess, 0, g_bTiled ? &mac : nullptr);
		}

		return true;
	}
	//-------------------------------------------------------------------------------
	SceneManager::~SceneManager()
	{
		ClearScene();

		std::for_each(m_scenes.begin(), m_scenes.end(), std::default_delete<Scene>());
		m_scenes.clear();

		SAFE_DELETE(m_pTerrain);
		SAFE_DELETE(m_pTerrainOptions);
		SAFE_DELETE(m_pOctree);
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
	void SceneManager::SetTerrain(TerrainGroup* p)
	{
		m_pTerrain = p;
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
			Texture* pTexDiff = m_pRenderSystem->LoadTexture(GetResPath(strTexNames[i]), eTextureType_2D, 0, true);

			pMaterial->GetSubMaterial(i).SetTexture(0, pTexDiff);
			pMaterial->GetSubMaterial(i).glossiness = vSpecGloss[i].w;
			pMaterial->GetSubMaterial(i).specular = vSpecGloss[i].vec3;
		}

		pMaterial->InitShader(("SkinModel"), eShader_Opaque);
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

		if (m_pTerrain)
		{
			m_pTerrain->UpdateLod();
		}

		m_pOctree->Update();

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
		RenderPipline(eRenderPhase_All, pMaterial);

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
		_RenderGBuffer();

		//================================================================================
		/// Linearize depth pass
		//================================================================================
		_LinearizeDepth();

		//================================================================================
		/// Decal pass, render into g-buffer, here because it needs scene depth
		//================================================================================
		_DecalPass();

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
		m_pRenderSystem->SetRenderTarget(&m_pRT_Compose, m_pRenderSystem->GetDepthBuffer(), 1, false, false);

		// Sky
		if (m_pSky)
		{
			m_pSky->Render();
		}

		//================================================================================
		/// Forward objects
		//================================================================================
		m_curRenderPhase = eRenderPhase_Forward;

		_RenderForwardObjs();
		
		
		//================================================================================
		/// Render water
		//================================================================================
		if (m_pWater)
		{
			m_curRenderPhase = eRenderPhase_Transparent;
			m_pWater->Render();
		}

		//================================================================================
		/// HDR final scene phase
		//================================================================================
		_HDRFinalScenePass();

		//================================================================================
		/// Render UI
		//================================================================================
		_UIPass(phaseFlag);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::_RenderGBuffer()
	{
		m_curRenderPhase = eRenderPhase_GBuffer;

		g_env.pRenderer->UnbindTexture(m_pRT_Normal->GetRenderTexture());
		g_env.pRenderer->UnbindTexture(m_pRT_Albedo->GetRenderTexture());
		g_env.pRenderer->UnbindTexture(m_pRT_Specular->GetRenderTexture());

		RenderTarget* pRTs[3] = { m_pRT_Normal, m_pRT_Albedo, m_pRT_Specular };
		m_pRenderSystem->SetRenderTarget(pRTs, m_pRenderSystem->GetDepthBuffer(), 3);

		m_pCurScene->RenderOpaque();

		if (m_pTerrain)
		{
			m_pTerrain->Render();
		}

		m_pCurScene->RenderInstanced();

		m_pRenderSystem->SetRenderTarget(nullptr, m_pRenderSystem->GetDepthBuffer(), 3, false, false);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::_DecalPass()
	{
		if (m_decals.empty())
		{
			return;
		}

		eRenderPhase old = m_curRenderPhase;
		m_curRenderPhase = eRenderPhase_GBuffer;

		g_env.pRenderer->UnbindTexture(m_pRT_Normal->GetRenderTexture());
		g_env.pRenderer->UnbindTexture(m_pRT_Albedo->GetRenderTexture());
		g_env.pRenderer->UnbindTexture(m_pRT_Specular->GetRenderTexture());

		RenderTarget* pRTs[3] = { m_pRT_Normal, m_pRT_Albedo, m_pRT_Specular };
		m_pRenderSystem->SetRenderTarget(pRTs, m_pRenderSystem->GetDepthBuffer(), 3, false, false);

		// Turn-off depth write.
		SStateDepth oldDepthState = g_env.pRenderer->GetCurDepthState();
		SStateDepth depthState = oldDepthState;
		depthState.Desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
		depthState.Desc.DepthEnable = true;
		g_env.pRenderer->SetDepthState(&depthState);

		// Turn-on alpha blending
		SStateBlend oldBlendState = g_env.pRenderer->GetCurBlendState();
		SStateBlend blendState = oldBlendState;
		blendState.Desc.RenderTarget[0].BlendEnable = true;
		blendState.Desc.RenderTarget[0].SrcBlend = eBlend_SRC_ALPHA;
		blendState.Desc.RenderTarget[0].DestBlend = eBlend_INV_SRC_ALPHA;
		g_env.pRenderer->SetBlendState(&blendState);

		for (uint32 i = 0; i < m_decals.size(); ++i)
		{
			m_decals[i]->Render();
		}

		g_env.pRenderer->SetDepthState(&oldDepthState);
		g_env.pRenderer->SetBlendState(&oldBlendState);
		m_pRenderSystem->SetRenderTarget(nullptr, m_pRenderSystem->GetDepthBuffer(), 3, false, false);
		m_curRenderPhase = old;
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

		static bool bInit = false;
		if (!bInit)
		{
			D3D_SHADER_MACRO macro = { "AMBIENT_CUBE", "" };
			m_pMtlCompose->InitShader(("Compose"), eShader_PostProcess, 0, m_pAmbientCube->IsEnabled() ? &macro : nullptr, "VS", "ComposePS");
			bInit = true;
		}

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
		m_pMtlCompose->SetTexture(10, m_pAmbientCube->GetIrradianceTexture());
		m_pMtlCompose->SetTexture(11, m_pAmbientCube->GetRadianceTexture());

		m_pRT_Compose->RenderScreenQuad(m_pMtlCompose, false, false);

		g_env.pRenderer->SetActiveTexture(3, nullptr);
		g_env.pRenderer->SetActiveTexture(4, nullptr);
		g_env.pRenderer->SetActiveTexture(5, nullptr);
		g_env.pRenderer->SetActiveTexture(6, nullptr);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::_RenderForwardObjs()
	{
		EntityList& sceneObjs = m_pCurScene->GetEntityList();
		for (size_t i = 0; i < sceneObjs.size(); ++i)
		{
			Entity* pEntity = sceneObjs[i];
			const eShader shader = pEntity->GetMaterial()->GetShaderType();

			if (shader == eShader_Forward)
			{
				pEntity->Render();
			}
			else if (shader == eShader_Fur)
			{
				// TODO: material sorting
				_FurPass(pEntity);
			}
		}
	}
	//------------------------------------------------------------------------------------
	_declspec(align(16))
	struct cBufferFur
	{
		VEC4	vCombParams;
		VEC4	vModelCamPos;
		VEC4	vModelLightDir;
		float	fFinMaxOpacity;
		float	shellIncrement;
		float	shellTexTiling;
		int		iShell;
	};

	void SceneManager::_FurPass(Entity* pEntity)
	{
		static ConstantBuffer* pCB_Fur = nullptr;
		if (!pCB_Fur)
		{
			pCB_Fur = m_pRenderSystem->CreateConstantBuffer(sizeof(cBufferFur), 10);
		}

		cBufferFur cbFur;
		VEC3 vCombDir(1.0f, -0.3f, 0.0f);
		vCombDir.Normalize();
		cbFur.vCombParams.Set(vCombDir.x, vCombDir.y, vCombDir.z, 0);
		
		FurCustomRenderData* pFurData = (FurCustomRenderData*)pEntity->GetCustomRenderData();
		cbFur.shellIncrement = pFurData->shellIncrement;
		cbFur.fFinMaxOpacity = pFurData->fFinMaxOpacity;
		cbFur.shellTexTiling = pFurData->shellTexTiling;

		MAT44 matInvWorld = pEntity->GetWorldMatrix().Inverse();
		cbFur.vModelCamPos = Common::Transform_Vec3_By_Mat44(m_camera->GetPos(), matInvWorld, true);
		cbFur.vModelLightDir = Common::Transform_Vec3_By_Mat44(-m_sunLight.lightDir, matInvWorld, false);

		// Enable alpha blend
		SStateBlend blendState = g_env.pRenderer->GetCurBlendState();
		bool old = blendState.Desc.RenderTarget[0].BlendEnable;

		blendState.Desc.RenderTarget[0].BlendEnable = true;
		blendState.Desc.RenderTarget[0].SrcBlend = eBlend_SRC_ALPHA;
		blendState.Desc.RenderTarget[0].DestBlend = eBlend_INV_SRC_ALPHA;

		g_env.pRenderer->SetBlendState(&blendState);

		// Turn off depth write
		SStateDepth depthState = g_env.pRenderer->GetCurDepthState();
		auto oldDepth = depthState.Desc.DepthWriteMask;
		depthState.Desc.DepthWriteMask = false;

		g_env.pRenderer->SetDepthState(&depthState);

		// Render fins
		if (pFurData->bRenderFins)
		{
			pEntity->GetMaterial()->SetActivePass(0, true);

			// No culling for the fins..
			eCullMode oldCull = pEntity->GetMaterial()->GetCullMode();
			pEntity->GetMaterial()->SetCullMode(eCull_NONE);

			pEntity->GetMesh()->SetPrimitiveType(ePrimitive_LineList_Adj);

			pCB_Fur->UpdateBuf(&cbFur);
			pCB_Fur->Apply(10, false, false, true);

			pEntity->Render();

			pEntity->GetMaterial()->TurnOffGeometryShader();
			pEntity->GetMaterial()->SetCullMode(oldCull);
			pEntity->GetMesh()->SetPrimitiveType(ePrimitive_TriangleList);
		}

		// Render shells
		if (pFurData->bRenderShells)
		{
			pEntity->GetMaterial()->SetActivePass(1);

			for (int iShell = 1; iShell <= FUR_SHELL_LAYER; ++iShell)
			{
				cbFur.iShell = iShell;
				pCB_Fur->UpdateBuf(&cbFur);
				pCB_Fur->Apply(10, true, true);

				pEntity->Render();
			}
		}

		blendState.Desc.RenderTarget[0].BlendEnable = old;
		depthState.Desc.DepthWriteMask = oldDepth;
		g_env.pRenderer->SetBlendState(&blendState);
		g_env.pRenderer->SetDepthState(&depthState);
	}
	//------------------------------------------------------------------------------------
	void SceneManager::_HDRFinalScenePass()
	{
		m_curRenderPhase = eRenderPhase_FinalScene;

		m_pRenderSystem->SetRenderTarget(nullptr, nullptr, 1, false, false);

		SViewport vp = { 0.0f, 0.0f, (float)g_env.pRenderer->GetWndWidth(), (float)g_env.pRenderer->GetWndHeight(), 0, 1 };
		m_pRenderSystem->SetViewport(&vp);

		m_pMtlFinalScene->Activate();

		//ID3D11DeviceContext* pDeviceContext = g_env.pRenderSystem->GetDeviceContext();
		//if (g_bTiled)
		//{
		//	ID3D11ShaderResourceView* pLitBufferSRV = m_pTBDR->GetLitBuffer()->GetShaderResource();

		//	pDeviceContext->PSSetShaderResources(0, 1, &pLitBufferSRV);
		//}

		RenderTarget::m_pQuadEntity->Render();

		//if (g_bTiled)
		//{
		//	ID3D11ShaderResourceView* pNull = nullptr;
		//	pDeviceContext->PSSetShaderResources(0, 1, &pNull);
		//}
	}
	//------------------------------------------------------------------------------------
	void SceneManager::_UIPass(uint32 nFlag)
	{
		if (nFlag & eRenderPhase_UI)
		{
			SStateDepth oldDepthState = g_env.pRenderer->GetCurDepthState();
			SStateDepth depthState = oldDepthState;
			depthState.Desc.DepthEnable = false;
			depthState.Desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
			g_env.pRenderer->SetDepthState(&depthState);

			auto& lstEntity = m_pCurScene->GetEntityList();
			for (uint32 i = 0; i < lstEntity.size(); ++i)
			{
				lstEntity[i]->DebugRender();
			}

			char szBuf[512];
			sprintf_s(szBuf, sizeof(szBuf), "lastFPS : %.2f", g_env.pFrameStat->lastFPS);
			g_env.pRenderer->DrawText(szBuf, IPOINT(10, 10), Neo::SColor::YELLOW);

			const VEC3& vCamPos = m_camera->GetPos();
			sprintf_s(szBuf, sizeof(szBuf), "CamPos : (%.2f, %.2f, %.2f)", vCamPos.x, vCamPos.y, vCamPos.z);
			g_env.pRenderer->DrawText(szBuf, IPOINT(10, 25), Neo::SColor::YELLOW);

			sprintf_s(szBuf, sizeof(szBuf), "LightDir : (%.2f, %.2f, %.2f)", m_sunLight.lightDir.x, m_sunLight.lightDir.y, m_sunLight.lightDir.z);
			g_env.pRenderer->DrawText(szBuf, IPOINT(10, 40), Neo::SColor::YELLOW);

			const uint32 nShadowCasters0 = m_pShadowMap->GetPSSM()->GetShadowCasterNum(0);
			const uint32 nShadowCasters1 = m_pShadowMap->GetPSSM()->GetShadowCasterNum(1);
			const uint32 nShadowCasters2 = m_pShadowMap->GetPSSM()->GetShadowCasterNum(2);
			sprintf_s(szBuf, sizeof(szBuf), "CasterIn Cascade0: %d, Cascade1: %d, Cascade2: %d", nShadowCasters0, nShadowCasters1, nShadowCasters2);
			g_env.pRenderer->DrawText(szBuf, IPOINT(10, 55), Neo::SColor::YELLOW);

			sprintf_s(szBuf, sizeof(szBuf), "Total Objects: %d, Culled Objects: %d, Frustum Cull Performs: %d", 
				m_pOctree->m_nTotalObjs, m_pOctree->m_nCulledObjs, m_pOctree->m_nFrustumCullNum);
			g_env.pRenderer->DrawText(szBuf, IPOINT(10, 70), Neo::SColor::YELLOW);

			if (m_pHero)
			{
				g_env.pRenderer->DrawText(m_strHeroStateChange, IPOINT(10, 100), Neo::SColor::YELLOW);
			}

			// Debug RT
			if (m_debugRT == eDebugRT_SSAO)
			{
				m_pDebugRTMesh->Render();
			}
			else if (m_debugRT == eDebugRT_ShadowMap)
			{
				m_pDebugRTMesh->Render();
			}

			g_env.pRenderer->SetDepthState(&oldDepthState);
		}
	}
	//------------------------------------------------------------------------------------
	void SceneManager::ClearScene()
	{
		SAFE_DELETE(m_pWater);
		SAFE_DELETE(m_pSky);
	}
	//------------------------------------------------------------------------------------
	Entity* SceneManager::CreateEntity(eEntity type, const STRING& meshname)
	{
		Mesh* mesh = nullptr;
		auto iter = m_meshes.find(meshname);

		if (iter == m_meshes.end())
		{
			mesh = LoadMeshFromFile(meshname, meshname);
		}
		else
		{
			mesh = iter->second;
		}
		
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
	Decal* SceneManager::CreateDecal(const VEC3& pos, float size, const QUATERNION& rot)
	{
		Decal* pDecal = new Decal(pos, size, rot);
		m_decals.push_back(pDecal);
		return pDecal;
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
		//EnableDebugRT(eDebugRT_None);

		static int curScene = -1;
		++curScene;
		if(curScene == m_scenes.size())
			curScene = 0;

		m_pCurScene = m_scenes[curScene];
		m_pCurScene->Enter();

		AABB aabb;
		aabb.Merge(VEC3(-10000.0f, -10000.0f, -10000.0f));
		aabb.Merge(VEC3(10000.0f, 10000.0f, 10000.0f));

		SAFE_DELETE(m_pOctree);
		m_pOctree = new Octree(aabb);

		const EntityList& lstEntity = m_pCurScene->GetEntityList();
		for (uint32 i = 0; i < lstEntity.size(); ++i)
		{
			m_pOctree->Insert(lstEntity[i]);
		}
	}
	//------------------------------------------------------------------------------------
	void SceneManager::SetupSunLight( const VEC3& dir, const SColor& color )
	{
		m_sunLight.lightDir = dir;
		m_sunLight.lightDir.Normalize();
		m_sunLight.lightColor = color;
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
	void SceneManager::SetTerrainOptions(TerrainGlobalOptions* p)
	{
		SAFE_DELETE(m_pTerrainOptions);
		m_pTerrainOptions = p;
	}
	//------------------------------------------------------------------------------------
	void SceneManager::SetShadowDepthBias(float fBias)
	{
		g_env.pRenderer->GetGlobalCB().shadowDepthBias = fBias;
	}
	//------------------------------------------------------------------------------------
	float SceneManager::GetShadowDepthBias() const
	{
		return g_env.pRenderer->GetGlobalCB().shadowDepthBias;
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
	void SceneManager::SetShadowMapSize(uint32 nSize)
	{
		if (nSize != m_nShadowMapSize)
		{
			m_pShadowMap->SetShadowMapSize(nSize);
			m_nShadowMapSize = nSize;
		}
	}
	//------------------------------------------------------------------------------------
	uint32 SceneManager::GetShadowMapSize() const
	{
		return m_nShadowMapSize;
	}
	//------------------------------------------------------------------------------------
	Mesh* SceneManager::LoadMeshFromFile(const STRING& meshname, const STRING& filename)
	{
		Mesh* mesh = nullptr;
		SkeletonAnim* skel = nullptr;

		if (filename.find(".obj") != STRING::npos)
		{
			mesh = ObjMeshLoader::LoadMesh(filename, false, false);
		}
		else
		{
			mesh = MeshLoader::LoadMesh(filename, false, &skel);

			if (skel)
			{
				m_skeletons.insert(std::make_pair(mesh, skel));
			}
		}

		m_meshes.insert(std::make_pair(meshname, mesh));

		return mesh;
	}

}