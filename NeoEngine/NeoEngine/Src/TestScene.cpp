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
#include "Terrain.h"
#include "AmbientCube.h"
#include "MaterialManager.h"
#include "ObjMeshLoader.h"
#include "SkinModel.h"
#include "ThirdPersonCharacter.h"
#include "ShadowMapPSSM.h"

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

	Neo::Material* pMaterial = MaterialManager::GetSingleton().NewMaterial("Mtl_01");

	pMaterial->SetTexture(0, new D3D11Texture(GetResPath("White1x1.png")));
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque, eShaderFlag_EnableSSAO);

	pEntity->SetMaterial(pMaterial);

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
	Neo::Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_01");
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
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(1, -1, 1), SColor(0.7f, 0.7f, 0.7f));
	g_env.pSceneMgr->SetShadowDepthBias(0.01f);

	g_env.pSceneMgr->CreateHero(scene, VEC3(0, 15, -20))->GetModel()->SetPosition(VEC3(64, 0, 358));
	g_env.pSceneMgr->CreateSky();
	g_env.pSceneMgr->CreateTerrain();
	
	// Ambient cube
	//bool bOk = g_env.pSceneMgr->GetAmbientCube()->GenerateHDRCubeMap(VEC3(0, 20, 0), GetResPath("tmp_cubemap.dds"), scene);
	//_AST(bOk);
	g_env.pSceneMgr->GetAmbientCube()->SetupCubeMap(
		new Neo::D3D11Texture(GetResPath("sponza_ambientcube_diff.dds"), eTextureType_CubeMap),
		new Neo::D3D11Texture(GetResPath("sponza_ambientcube_spec.dds"), eTextureType_CubeMap));


	Neo::Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_wood");
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("WoodPallet.dds"), eTextureType_2D, 0, true));
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque);

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			Neo::Entity* pCaster = g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("WoodPallet.mesh"));

			scene->AddEntity(pCaster);
			pCaster->SetMaterial(pMaterial);
			pCaster->SetCastShadow(true);
			pCaster->SetReceiveShadow(false);

			VEC3 vPos(VEC3(-100 + i * 40.f, 0, 300 + j * 40.f));
			vPos.y = g_env.pSceneMgr->GetTerrain()->GetHeightAt(vPos);
			pCaster->SetPosition(vPos);

			pCaster->SetScale(1, 1, 3);

			QUATERNION quat(VEC3::UNIT_Z, 90);
			pCaster->SetRotation(quat);
		}
	}
}

void EnterTestScene3(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0,10,0));
	pCamera->SetNearClip(1);
	pCamera->SetFarClip(2500.0f);
	pCamera->SetMoveSpeed(0.5f);
	pCamera->SetDirection(VEC3::UNIT_Z);
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

	Neo::Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_01");
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("White1x1.png")));
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque);
	pEntity->SetMaterial(pMaterial);


	// Shadow caster
	pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_02");
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
}

void EnterTestScene4(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0, 5, 0));
	pCamera->SetNearClip(0.05f);
	pCamera->SetFarClip(500.0f);
	pCamera->SetMoveSpeed(0.25f);
	pCamera->SetDirection(VEC3::UNIT_Z);
}


void SetupTestScene6(Scene* scene)
{
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(1, -1, 2), SColor(0.6f, 0.6f, 0.6f));
	g_env.pSceneMgr->SetShadowDepthBias(0.01f);

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

	SVertex vert[4] =
	{
		SVertex(VEC3(-halfW, 0, +halfH), VEC2(0, 0)),
		SVertex(VEC3(+halfW, 0, +halfH), VEC2(1, 0)),
		SVertex(VEC3(+halfW, 0, -halfH), VEC2(1, 1)),
		SVertex(VEC3(-halfW, 0, -halfH), VEC2(0, 1)),
	};

	DWORD dwIndex[6] = { 0, 1, 3, 1, 2, 3 };

	Mesh* pMesh = new Mesh;
	SubMesh* pSubmesh = new SubMesh;

	pSubmesh->InitVertData(eVertexType_NormalMap, vert, 4, true);
	pSubmesh->InitIndexData(dwIndex, 6, true);
	pSubmesh->BuildTangents();

	pMesh->AddSubMesh(pSubmesh);

	Neo::Entity* pEntity = new Neo::Entity(pMesh);
	pEntity->SetCastShadow(false);
	scene->AddEntity(pEntity);


	Neo::Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_floor", eVertexType_NormalMap);
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("White1x1.png")));
	pMaterial->SetTexture(1, new Neo::D3D11Texture(GetResPath("floor_bump.png")));

	D3D11_SAMPLER_DESC& samDesc = pMaterial->GetSamplerStateDesc(0);
	pMaterial->SetSamplerStateDesc(0, samDesc);

	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque);

	pEntity->SetMaterial(pMaterial);

	// Ambient cube
	bool bOk = g_env.pSceneMgr->GetAmbientCube()->GenerateHDRCubeMap(VEC3(0, 10, 0), GetResPath("tmp_cubemap.dds"), scene);
	_AST(bOk);
	g_env.pSceneMgr->GetAmbientCube()->SetupCubeMap(
		new Neo::D3D11Texture(GetResPath("sponza_ambientcube_diff.dds"), eTextureType_CubeMap), 
		new Neo::D3D11Texture(GetResPath("sponza_ambientcube_spec.dds"), eTextureType_CubeMap));

	// Another test sphere entity
	pEntity = g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("sphere_group.obj"));
	pEntity->SetPosition(VEC3(0, 2, 0));
	scene->AddEntity(pEntity);

	pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_sphere", eVertexType_General, 10);

	for (int i = 0; i < 10; ++i)
	{
		pMaterial->GetSubMaterial(i).SetTexture(0, new Neo::D3D11Texture(GetResPath("Black1x1.png")));
		pMaterial->GetSubMaterial(i).glossiness = i / 9.0f;
		pMaterial->GetSubMaterial(i).specular.Set(1,1,1);
	}

	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque);
	pEntity->SetMaterial(pMaterial);
}

void EnterTestScene6(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0, 5, 0));
	pCamera->SetNearClip(0.5f);
	pCamera->SetFarClip(500.0f);
	pCamera->SetMoveSpeed(0.1f);
	pCamera->SetDirection(VEC3::UNIT_Z);
}


void SetupTestScene7(Scene* scene)
{
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(1, -1, 2), SColor(0.7f,0.7f,0.7f));
	g_env.pSceneMgr->SetShadowDepthBias(0.01f);

	// Sponza scene
	//bool bOk = g_env.pSceneMgr->LoadSponzaScene(scene);
	//_AST(bOk);

	// Ambient cube
	//bOk = g_env.pSceneMgr->GetAmbientCube()->GenerateHDRCubeMap(VEC3(0, 5, 0), GetResPath("tmp_cubemap.dds"), scene);
	//_AST(bOk);

	g_env.pSceneMgr->GetAmbientCube()->SetupCubeMap(
		new Neo::D3D11Texture(GetResPath("sponza_ambientcube_diff.dds"), eTextureType_CubeMap),
		new Neo::D3D11Texture(GetResPath("sponza_ambientcube_spec.dds"), eTextureType_CubeMap));

	// Another test sphere entity
	{
		Entity* pEntity = g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("sphere_group.obj"));

		pEntity->SetScale(0.5f);
		pEntity->SetPosition(VEC3(-2, 0.5f, 0));
		QUATERNION rot;
		rot.FromAxisAngle(VEC3::UNIT_Y, 90);
		pEntity->SetRotation(rot);

		scene->AddEntity(pEntity);

		Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_01", eVertexType_General, 10);

		for (int i = 0; i < 10; ++i)
		{
			pMaterial->GetSubMaterial(i).SetTexture(0, new Neo::D3D11Texture(GetResPath("Black1x1.png")));
			pMaterial->GetSubMaterial(i).glossiness = i / 9.0f;
			pMaterial->GetSubMaterial(i).specular.Set(1, 1, 1);
		}

		pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), eShader_Opaque);
		pEntity->SetMaterial(pMaterial);
	}

	g_env.pSceneMgr->CreateHero(scene, VEC3(0, 15, -20));
}

void EnterTestScene7(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetNearClip(0.5f);
	pCamera->SetFarClip(500.0f);
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
		ADD_TEST_SCENE(SetupTestScene3, EnterTestScene3);

		//// Test Scene 4: Shadow testing
		//ADD_TEST_SCENE(SetupTestScene4, EnterTestScene4);

		//// Test Scene 5: Vegetation
		//ADD_TEST_SCENE(SetupTestScene5, EnterTestScene5);

		//// Test Scene 6: Full HDR and physically-based deferred shading
		//ADD_TEST_SCENE(SetupTestScene6, EnterTestScene6);

		//// Test Scene 7: Sponza
		//ADD_TEST_SCENE(SetupTestScene7, EnterTestScene7);
	}
}


