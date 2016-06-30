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
#include "ShadowMap.h"
#include "ShadowMapCSM.h"

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
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque, eShaderFlag_EnableSSAO);

	pEntity->SetMaterial(pMaterial);
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
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque, eShaderFlag_EnableClipPlane);

	/// Create a cube to observe reflection
	{
		Neo::Mesh* pCube =  SceneManager::CreateCubeMesh(VEC3(-100,100,-100), VEC3(100,300,100));

		Neo::Entity* pEntity = new Neo::Entity(pCube);

		scene->AddEntity(pEntity);

		pEntity->SetMaterial(pMaterial);
		pEntity->SetCastShadow(false);
		pEntity->SetReceiveShadow(false);
	}

	/// Create another geometry to observe refraction
	{
		Neo::Mesh* pMesh =  SceneManager::CreateFrustumMesh(VEC3(-500,-100,-500), VEC3(500,100,500), VEC3(-100,300,-100), VEC3(100,300,100));

		Neo::Entity* pEntity = new Neo::Entity(pMesh);

		scene->AddEntity(pEntity);

		pEntity->SetMaterial(pMaterial);
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
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(1, -1, -2), SColor(0.8f, 0.8f, 0.8f));

	// Shadow receiver
	Neo::Mesh* pMesh = SceneManager::CreatePlaneMesh(200.0f, 200.0f);
	Neo::Entity* pEntity = new Neo::Entity(pMesh);

	scene->AddEntity(pEntity);
	pEntity->SetCastShadow(false);

	Neo::Material* pMaterial = new Neo::Material;
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("White1x1.png")));
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque);
	pEntity->SetMaterial(pMaterial);
	pMaterial->Release();


	// Shadow caster
	pMaterial = new Neo::Material;
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("White1x1.png")));
	pMaterial->GetSubMaterial(0).specular.Set(0.9f, 0.9f, 0.9f);
	pMaterial->GetSubMaterial(0).glossiness = 0.9f;
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque);

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			Neo::Entity* pCaster = g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("athene.mesh"));

			scene->AddEntity(pCaster);
			pCaster->SetMaterial(pMaterial);
			pCaster->SetReceiveShadow(false);
			pCaster->SetScale(0.1f);
			pCaster->SetPosition(VEC3(-100 + i * 40.f, 8, -100 + j * 40.f));
		}
	}

	pMaterial->Release();
}

void EnterTestScene4(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0, 5, 0));
	pCamera->SetNearClip(0.05f);
	pCamera->SetFarClip(500.0f);
	pCamera->SetMoveSpeed(0.25f);
	pCamera->SetDirection(VEC3::UNIT_Z);

	g_env.pSceneMgr->GetShadowMap()->GetCSM()->SetCascadePadding(25.0f);
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


void SetupTestScene6(Scene* scene)
{
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(1, -1, 2), SColor(0.6f, 0.6f, 0.6f));

	// Add 100 point lights to scene
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			Neo::SPointLight light;
			light.color.Set(RandomRange(0.3f, 1.0f, 5), RandomRange(0.3f, 1.0f, 5), RandomRange(0.3f, 1.0f, 5));
			light.fRadius = RandomRange(3.0f, 8.0f, 100);
			light.vPos.Set(-100+20*i, 1, -100+20*j);
			light.fAtten = RandomRange(2.0f, 7.0f, 100);

			g_env.pSceneMgr->AddPointLight(light);
		}
	}

	// A plane floor with normal mapping
	float halfW = 200.0f / 2;
	float halfH = 200.0f / 2;

	SVertex_NormalMap vert[4] =
	{
		SVertex_NormalMap(VEC3(-halfW, 0, +halfH), VEC2(0, 0)),
		SVertex_NormalMap(VEC3(+halfW, 0, +halfH), VEC2(10, 0)),
		SVertex_NormalMap(VEC3(+halfW, 0, -halfH), VEC2(10, 10)),
		SVertex_NormalMap(VEC3(-halfW, 0, -halfH), VEC2(0, 10)),
	};

	DWORD dwIndex[6] = { 0, 1, 3, 1, 2, 3 };

	Mesh* pMesh = new Mesh;
	SubMesh* pSubmesh = new SubMesh;

	Mesh::BuildTangentVectors(vert, dwIndex, 6);
	pSubmesh->InitVertData(eVertexType_NormalMap, vert, 4, true);
	pSubmesh->InitIndexData(dwIndex, 6, true);

	pMesh->AddSubMesh(pSubmesh);

	Neo::Entity* pEntity = new Neo::Entity(pMesh);
	scene->AddEntity(pEntity);


	Neo::Material* pMaterial = new Neo::Material(eVertexType_NormalMap);
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("floor_diffuse.png")));
	pMaterial->SetTexture(1, new Neo::D3D11Texture(GetResPath("floor_bump.png")));

	D3D11_SAMPLER_DESC& samDesc = pMaterial->GetSamplerStateDesc(0);
	pMaterial->SetSamplerStateDesc(0, samDesc);

	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque);

	pEntity->SetMaterial(pMaterial);
	pMaterial->Release();

	// Another test sphere entity
	pEntity = g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("sphere_group.obj"));
	scene->AddEntity(pEntity);

	pMaterial = new Neo::Material(eVertexType_General, 10);

	for (int i = 0; i < 10; ++i)
	{
		pMaterial->GetSubMaterial(i).SetTexture(0, new Neo::D3D11Texture(GetResPath("White1x1.png")));
		pMaterial->GetSubMaterial(i).glossiness = i / 9.0f;
		pMaterial->GetSubMaterial(i).specular.Set(1,1,1);
	}

	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque);
	pEntity->SetMaterial(pMaterial);
	pMaterial->Release();
}

void EnterTestScene6(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0, 5, 0));
	pCamera->SetNearClip(0.05f);
	pCamera->SetFarClip(500.0f);
	pCamera->SetMoveSpeed(0.1f);
	pCamera->SetDirection(VEC3::UNIT_Z);
}

namespace Neo
{
	void SceneManager::_InitAllScene()
	{
		//// Test Scene 1: mesh, SSAO post effect
		//ADD_TEST_SCENE(SetupTestScene1, EnterTestScene1);

		////// Test Scene 2: Sky, Water
		//ADD_TEST_SCENE(SetupTestScene2, EnterTestScene2);

		////// Test Scene 3: Terrain
		//ADD_TEST_SCENE(SetupTestScene3, EnterTestScene3);

		//// Test Scene 4: Shadow testing
		ADD_TEST_SCENE(SetupTestScene4, EnterTestScene4);

		//// Test Scene 5: Vegetation
		//ADD_TEST_SCENE(SetupTestScene5, EnterTestScene5);

		//// Test Scene 6: Full HDR and physically-based deferred shading
		//ADD_TEST_SCENE(SetupTestScene6, EnterTestScene6);
	}
}


