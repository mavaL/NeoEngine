#include "stdafx.h"
#include "Scene.h"
#include "Camera.h"
#include "Material.h"
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "SceneManager.h"
#include "SSAO.h"
#include "Entity.h"
#include "Mesh.h"

using namespace Neo;


#define ADD_TEST_SCENE($setupFunc, $enterFunc)						\
{																	\
	Scene::StrategyFunc setupFunc = $setupFunc;						\
	Scene::StrategyFunc enterFunc = $enterFunc;						\
	Scene* pScene = new Scene(setupFunc, enterFunc);				\
	m_scenes.push_back(pScene);										\
}

void SetupTestScene1(Scene* scene)
{
	Entity* pEntity =  g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("skull.mesh"));

	QUATERNION quat(VEC3::UNIT_Y, 90);
	pEntity->SetRotation(quat);

	Neo::Material* pMaterial = new Material;

	pMaterial->SetTexture(0, new D3D11Texture(GetResPath("White1x1.png")));
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShaderFlag_EnableSSAO);

	pEntity->SetMaterial(0, pMaterial);
	SAFE_RELEASE(pMaterial);

	scene->AddEntity(pEntity);
}

void EnterTestScene1(Scene* scene)
{
	g_env.pSceneMgr->GetCamera()->SetPosition(VEC3(0,0,-200));
	g_env.pSceneMgr->GetCamera()->SetMoveSpeed(0.5f);
	g_env.pSceneMgr->GetCamera()->SetDirection(VEC3::UNIT_Z);

	g_env.pSceneMgr->EnableDebugRT(eDebugRT_SSAO);
	g_env.pSceneMgr->SetRenderFlag(eRenderPhase_All);
}

void SetupTestScene2(Scene* scene)
{
	Neo::Material* pMaterial = new Neo::Material;
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("lion.bmp")));
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShaderFlag_EnableClipPlane);

	/// Create a cube to observe reflection
	{
		Neo::Mesh* pCube =  SceneManager::CreateCubeMesh(VEC3(-100,100,-100), VEC3(100,300,100));

		Neo::Entity* pEntity = new Neo::Entity(pCube);

		scene->AddEntity(pEntity);

		pEntity->SetMaterial(0, pMaterial);
		pEntity->SetCastShadow(false);
		pEntity->SetReceiveShadow(false);
	}

	/// Create another geometry to observe refraction
	{
		Neo::Mesh* pMesh =  SceneManager::CreateFrustumMesh(VEC3(-500,-100,-500), VEC3(500,100,500), VEC3(-100,300,-100), VEC3(100,300,100));

		Neo::Entity* pEntity = new Neo::Entity(pMesh);

		scene->AddEntity(pEntity);

		pEntity->SetMaterial(0, pMaterial);
		pEntity->SetCastShadow(false);
		pEntity->SetReceiveShadow(false);
		pEntity->SetPosition(VEC3(2000, 0, 0));
	}

	pMaterial->Release();
}

void EnterTestScene2(Scene* scene)
{
 	g_env.pSceneMgr->CreateSky();
 	g_env.pSceneMgr->CreateWater();

	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0, 100, 0));
	pCamera->SetNearClip(100);
	pCamera->SetFarClip(100000.0f);
	pCamera->SetMoveSpeed(2.0f);
	pCamera->SetDirection(VEC3::UNIT_Z);

	g_env.pSceneMgr->SetRenderFlag(eRenderPhase_All & ~eRenderPhase_SSAO);
}


void SetupTestScene3(Scene* scene)
{
}

void EnterTestScene3(Scene* scene)
{
	g_env.pSceneMgr->CreateSky();
	g_env.pSceneMgr->CreateTerrain();
	g_env.pSceneMgr->CreateWater(5.0f);

	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0, 100, 0));
	pCamera->SetNearClip(1);
	pCamera->SetFarClip(1000.0f);
	pCamera->SetMoveSpeed(0.5f);
	pCamera->SetDirection(VEC3::UNIT_Z);

	g_env.pSceneMgr->EnableDebugRT(eDebugRT_ShadowMap);
	g_env.pSceneMgr->SetRenderFlag(eRenderPhase_All & ~eRenderPhase_SSAO);
}

void SetupTestScene4(Scene* scene)
{
	// Shadow receiver
	Neo::Mesh* pMesh = SceneManager::CreatePlaneMesh(200.0f, 200.0f);
	Neo::Entity* pEntity = new Neo::Entity(pMesh);

	scene->AddEntity(pEntity);
	pEntity->SetCastShadow(false);

	Neo::Material* pMaterial = new Neo::Material;
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("White1x1.png")));
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShaderFlag_EnableShadowReceive);
	pEntity->SetMaterial(0, pMaterial);
	pMaterial->Release();


	// Shadow caster
	Neo::Entity* pCaster =  g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("skull.mesh"));

	scene->AddEntity(pCaster);

	pMaterial = new Neo::Material;
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("White1x1.png")));
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"));

	pCaster->SetMaterial(0, pMaterial);
	pCaster->SetReceiveShadow(false);
	pMaterial->Release();
}

void EnterTestScene4(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0, 10, 0));
	pCamera->SetNearClip(1);
	pCamera->SetFarClip(500.0f);
	pCamera->SetMoveSpeed(0.5f);
	pCamera->SetDirection(VEC3::UNIT_Z);

	g_env.pSceneMgr->EnableDebugRT(eDebugRT_ShadowMap);
	g_env.pSceneMgr->SetRenderFlag(eRenderPhase_All & ~eRenderPhase_SSAO);
}

void SetupTestScene5(Scene* scene)
{
	Neo::Entity* pEntity = g_env.pSceneMgr->CreateEntity(eEntity_Tree, GetResPath("Tree\\FanPalm_RT.mesh"));

	scene->AddEntity(pEntity);
}

void EnterTestScene5(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0, 10, 0));
	pCamera->SetNearClip(1);
	pCamera->SetFarClip(500.0f);
	pCamera->SetMoveSpeed(0.1f);
	pCamera->SetDirection(VEC3::UNIT_Z);

	g_env.pSceneMgr->SetRenderFlag(eRenderPhase_All & ~eRenderPhase_SSAO & ~eRenderPhase_ShadowMap);
}

namespace Neo
{
	void SceneManager::_InitAllScene()
	{
		//// Test Scene 1: mesh, SSAO post effect
//		ADD_TEST_SCENE(SetupTestScene1, EnterTestScene1);
// 
// 		//// Test Scene 2: Sky, Water
// 		ADD_TEST_SCENE(SetupTestScene2, EnterTestScene2);
// 
// 		//// Test Scene 3: Terrain
// 		ADD_TEST_SCENE(SetupTestScene3, EnterTestScene3);
// 
// 		//// Test Scene 4: Shadow testing
// 		ADD_TEST_SCENE(SetupTestScene4, EnterTestScene4);

		//// Test Scene 5: Vegetation
		ADD_TEST_SCENE(SetupTestScene5, EnterTestScene5);
	}
}


