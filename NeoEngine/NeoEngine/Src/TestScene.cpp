#include "stdafx.h"
#include "Scene.h"
#include "Camera.h"
#include "Material.h"
#include "RenderSystem.h"
#include "Texture.h"
#include "SceneManager.h"
#include "SSAO.h"
#include "Entity.h"
#include "Mesh.h"
#include "ShadowMap.h"
#include "AmbientCube.h"
#include "MaterialManager.h"
#include "ObjMeshLoader.h"
#include "MeshLoader.h"
#include "SkinModel.h"
#include "ThirdPersonCharacter.h"
#include "ShadowMapPSSM.h"
#include "Renderer.h"
#include "Terrain/Terrain.h"
#include "Terrain/TerrainGroup.h"

using namespace Neo;


#define ADD_TEST_SCENE($setupFunc, $enterFunc)						\
{																	\
	Scene::StrategyFunc setupFunc = $setupFunc;						\
	Scene::StrategyFunc enterFunc = $enterFunc;						\
	Scene* pScene = new Scene(setupFunc, enterFunc);				\
	m_scenes.push_back(pScene);										\
}


void SetupTestScene2(Scene* scene)
{
	Neo::Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_01");
	pMaterial->SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("lion.bmp")));
	pMaterial->InitShader(("Opaque"), eShader_Opaque, eShaderFlag_EnableClipPlane);

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
}


void SetupTestScene3(Scene* scene)
{
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(1, -1, 1), SColor(0.7f, 0.7f, 0.7f));
	g_env.pSceneMgr->SetShadowMapSize(1024);

	//g_env.pSceneMgr->CreateHero(scene, VEC3(0, 15, -20))->GetModel()->SetPosition(VEC3(64, 0, 358));
	//g_env.pSceneMgr->CreateSky();
	
	// Ambient cube
	//bool bOk = g_env.pSceneMgr->GetAmbientCube()->GenerateHDRCubeMap(VEC3(0, 20, 0), GetResPath("tmp_cubemap.dds"), scene);
	//_AST(bOk);

	//Texture* pTexIrradiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_diff.dds"), eTextureType_CubeMap);
	//Texture* pTexRadiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_spec.dds"), eTextureType_CubeMap);

	//g_env.pSceneMgr->GetAmbientCube()->SetupCubeMap(pTexIrradiance, pTexRadiance);

	//// Some wood pallets
	//Neo::Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_wood");
	//pMaterial->SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("WoodPallet.dds"), eTextureType_2D, 0, true));
	//pMaterial->InitShader(("Opaque"), eShader_Opaque);

	//for (int i = 0; i < 5; ++i)
	//{
	//	for (int j = 0; j < 5; ++j)
	//	{
	//		Neo::Entity* pCaster = g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("WoodPallet.mesh"));

	//		scene->AddEntity(pCaster);
	//		pCaster->SetMaterial(pMaterial);
	//		pCaster->SetCastShadow(true);
	//		pCaster->SetReceiveShadow(false);

	//		VEC3 vPos(VEC3(-100 + i * 40.f, 0, 300 + j * 40.f));
	//		vPos.y = g_env.pSceneMgr->GetTerrain()->GetHeightAt(vPos);
	//		pCaster->SetPosition(vPos);

	//		pCaster->SetScale(1, 1, 3);

	//		QUATERNION quat(VEC3::UNIT_Z, 90);
	//		pCaster->SetRotation(quat);
	//	}
	//}

#define TERRAIN_FILE_PREFIX STRING("testTerrain")
#define TERRAIN_FILE_SUFFIX STRING("dat")
#define TERRAIN_WORLD_SIZE 12000.0f
#define TERRAIN_SIZE 513

	Neo::TerrainGlobalOptions* pTerrainOptions = new Neo::TerrainGlobalOptions;
	g_env.pSceneMgr->SetTerrainOptions(pTerrainOptions);

	Neo::TerrainGroup* pTerrainGroup = new Neo::TerrainGroup(Terrain::ALIGN_X_Z, TERRAIN_SIZE, TERRAIN_WORLD_SIZE);
	pTerrainGroup->setFilenameConvention(TERRAIN_FILE_PREFIX, TERRAIN_FILE_SUFFIX);

	const VEC3 vTerrainPos(1000, 0, 5000);
	pTerrainGroup->setOrigin(vTerrainPos);

	pTerrainOptions->setMaxPixelError(8);
	pTerrainOptions->setCompositeMapDistance(3000);
	pTerrainOptions->setLightMapDirection(g_env.pSceneMgr->GetSunLight().lightDir);
	pTerrainOptions->setCompositeMapAmbient(SColor::BLACK);
	pTerrainOptions->setCompositeMapDiffuse(SColor::BLACK);

	// Configure default import settings for if we use imported image
	Terrain::ImportData& defaultimp = pTerrainGroup->getDefaultImportSettings();
	defaultimp.terrainSize = TERRAIN_SIZE;
	defaultimp.worldSize = TERRAIN_WORLD_SIZE;
	defaultimp.inputScale = 600;
	defaultimp.minBatchSize = 33;
	defaultimp.maxBatchSize = 65;
	// textures
	defaultimp.layerList.resize(3);
	defaultimp.layerList[0].worldSize = 100;
	defaultimp.layerList[0].textureNames.push_back(GetResPath("terrain/dirt_grayrocky_diffusespecular.dds"));
	defaultimp.layerList[0].textureNames.push_back(GetResPath("terrain/dirt_grayrocky_normalheight.dds"));
	defaultimp.layerList[1].worldSize = 30;
	defaultimp.layerList[1].textureNames.push_back(GetResPath("terrain/grass_green-01_diffusespecular.dds"));
	defaultimp.layerList[1].textureNames.push_back(GetResPath("terrain/grass_green-01_normalheight.dds"));
	defaultimp.layerList[2].worldSize = 200;
	defaultimp.layerList[2].textureNames.push_back(GetResPath("terrain/growth_weirdfungus-03_diffusespecular.dds"));
	defaultimp.layerList[2].textureNames.push_back(GetResPath("terrain/growth_weirdfungus-03_normalheight.dds"));

	pTerrainGroup->defineTerrain(x, y, &img);

	// sync load since we want everything in place when we start
	pTerrainGroup->loadAllTerrains(true);
	pTerrainGroup->freeTemporaryResources();

	g_env.pSceneMgr->SetTerrain(pTerrainGroup);
}

void EnterTestScene3(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(1000, 0, 5000) + VEC3(1683, 50, 2116));
	pCamera->SetDirection(VEC3::UNIT_Z);
	pCamera->SetNearClip(1);
	pCamera->SetFarClip(10000.0f);
	pCamera->SetMoveSpeed(0.2f);
}

void SetupTestScene4(Scene* scene)
{
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(-0.22f, -0.37f, 0.90f), SColor(0.7f, 0.7f, 0.7f));
	g_env.pSceneMgr->SetShadowMapSize(512);

	// Ambient cube
	Texture* pTexIrradiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_diff.dds"), eTextureType_CubeMap);
	Texture* pTexRadiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_spec.dds"), eTextureType_CubeMap);

	g_env.pSceneMgr->GetAmbientCube()->SetupCubeMap(pTexIrradiance, pTexRadiance);

	// Shadow receiver
	Neo::Mesh* pMesh = SceneManager::CreatePlaneMesh(25.0f, 25.0f);
	Neo::Entity* pEntity = new Neo::Entity(pMesh);

	scene->AddEntity(pEntity);
	pEntity->SetCastShadow(false);

	Neo::Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_01");
	pMaterial->SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("White1x1.dds")));
	pMaterial->InitShader(("Opaque"), eShader_Opaque);
	pEntity->SetMaterial(pMaterial);


	// Shadow caster
	pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_02");
	pMaterial->SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("White1x1.dds")));
	pMaterial->GetSubMaterial(0).specular.Set(0.9f, 0.9f, 0.9f);
	pMaterial->GetSubMaterial(0).glossiness = 0.7f;
	pMaterial->InitShader(("Opaque"), eShader_Opaque);

	Neo::Entity* pCaster = g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("dragon.mesh"));

	pCaster->SetScale(10);
	pCaster->SetPosition(VEC3(0,-0.5f,0));
	scene->AddEntity(pCaster);
	pCaster->SetMaterial(pMaterial);
	pCaster->SetCastShadow(true);
	pCaster->SetReceiveShadow(false);
}

void EnterTestScene4(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(-7.60f, 2.85f, 1.87f));
	pCamera->SetNearClip(0.1f);
	pCamera->SetFarClip(50.0f);
	pCamera->SetMoveSpeed(0.1f);
	pCamera->SetLookAt(VEC3::ZERO);
}

void SetupTestScene5(Scene* scene)
{
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(-2, -1, -2), SColor(0.7f, 0.7f, 0.7f));
	g_env.pSceneMgr->SetShadowMapSize(512);

	// Ambient cube
	Texture* pTexIrradiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_diff.dds"), eTextureType_CubeMap);
	Texture* pTexRadiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_spec.dds"), eTextureType_CubeMap);

	g_env.pSceneMgr->GetAmbientCube()->SetupCubeMap(pTexIrradiance, pTexRadiance);

	// Floor
	Neo::Mesh* pMesh = SceneManager::CreatePlaneMesh(25.0f, 25.0f, 5);
	Neo::Entity* pEntity = new Neo::Entity(pMesh);

	scene->AddEntity(pEntity);
	pEntity->SetCastShadow(false);

	Neo::Material* pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_01");

	SSamplerDesc& sam = pMaterial->GetSamplerStateDesc(0);
	sam.AddressU = eTextureAddressMode_WRAP;
	sam.AddressV = eTextureAddressMode_WRAP;
	pMaterial->SetSamplerStateDesc(0, sam);

	pMaterial->SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("road002_diff.dds"), eTextureType_2D, 0, true));
	pMaterial->InitShader(("Opaque"), eShader_Opaque);
	pEntity->SetMaterial(pMaterial);


	// Fur cat
	StringVector g_furTextureNames;
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture00.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture01.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture02.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture03.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture04.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture05.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture06.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture07.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture08.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture09.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture10.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture11.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture12.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture13.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture14.dds");
	g_furTextureNames.push_back("../../../Res/Fur/FurTexture/FurTexture15.dds");

	StringVector g_furOffsetNames;
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset00.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset01.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset02.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset03.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset04.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset05.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset06.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset07.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset08.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset09.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset10.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset11.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset12.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset13.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset14.dds");
	g_furOffsetNames.push_back("../../../Res/Fur/FurTexture/FurTextureOffset15.dds");

	pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_Fur", eVertexType_NormalMap);
	pMaterial->SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("Fur/catColor.dds"), eTextureType_2D, eTextureUsage_VertexShader | eTextureUsage_GeometryShader, true));
	pMaterial->SetTexture(3, g_env.pRenderer->GetRenderSys()->CreateTextureArray(g_furTextureNames, false));
	pMaterial->SetTexture(4, g_env.pRenderer->GetRenderSys()->CreateTextureArray(g_furOffsetNames, false));
	pMaterial->SetTexture(5, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("Fur/FurTexture/FurTextureFin.dds")));
	pMaterial->SetTexture(6, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("Fur/FurTexture/FurTextureOffsetFin.dds")));

	SSamplerDesc& samDesc = pMaterial->GetSamplerStateDesc(0);
	samDesc.AddressU = eTextureAddressMode_WRAP;
	samDesc.AddressV = eTextureAddressMode_WRAP;
	pMaterial->SetSamplerStateDesc(0, samDesc, true, true);

	pMaterial->InitShader(("Fur"), eShader_Fur, 0, nullptr, "VS_Fins", "PS_Fins", "VS_Shells", "PS_Shells");
	pMaterial->InitGeometryShader(("Fur"));

	{
		pMesh = MeshLoader::LoadMesh(GetResPath("Fur\\cat.mesh"), true);
		// Needed for fin rendering
		pMesh->ConvertToLineAdjIndices();

		Neo::Entity* pCaster = new Neo::Entity(pMesh);
		pCaster->SetScale(0.1f);
		pCaster->SetPosition(VEC3(0, 0.5, 0));
		scene->AddEntity(pCaster);
		pCaster->SetMaterial(pMaterial);
		pCaster->SetCastShadow(true);
		pCaster->SetReceiveShadow(false);

		FurCustomRenderData* pFurData = new FurCustomRenderData;
		pCaster->SetCustomRenderData(pFurData);
	}
	
	{
		pMesh = MeshLoader::LoadMesh(GetResPath("Fur\\knot.mesh"), true);
		pMesh->ConvertToLineAdjIndices();

		Neo::Entity* pCaster = new Neo::Entity(pMesh);
		pCaster->SetScale(0.03f);
		pCaster->SetPosition(VEC3(8, 5, -2));
		scene->AddEntity(pCaster);
		pCaster->SetMaterial(pMaterial);
		pCaster->SetCastShadow(true);
		pCaster->SetReceiveShadow(false);

		FurCustomRenderData* pFurData = new FurCustomRenderData;
		pFurData->shellIncrement = 1.f;
		pCaster->SetCustomRenderData(pFurData);
	}
}

void EnterTestScene5(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0,5,-15));
	pCamera->SetNearClip(0.1f);
	pCamera->SetFarClip(50.0f);
	pCamera->SetMoveSpeed(0.1f);
	pCamera->SetLookAt(VEC3::ZERO);
}


void SetupTestScene6(Scene* scene)
{
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(1, -1, 2), SColor(0.6f, 0.6f, 0.6f));
	g_env.pSceneMgr->SetShadowDepthBias(0.01f);

	// Add 100 point lights to scene
	//for (int i = 0; i < 10; ++i)
	//{
	//	for (int j = 0; j < 10; ++j)
	//	{
	//		Neo::SPointLight light;
	//		light.color.Set(RandomRange(0.3f, 1.0f, 5), RandomRange(0.3f, 1.0f, 5), RandomRange(0.3f, 1.0f, 5));
	//		light.fRadius = RandomRange(3.0f, 8.0f, 100);
	//		light.vPos.Set(-100+20*i, 1, -100+20*j);
	//		light.fAtten = RandomRange(2.0f, 7.0f, 100);

	//		g_env.pSceneMgr->AddPointLight(light);
	//	}
	//}

	// A plane floor with normal mapping
	float halfW = 200.0f / 2;
	float halfH = 200.0f / 2;

	SVertex vert[4] =
	{
		SVertex(VEC3(-halfW, 0, +halfH), VEC2(0, 0)),
		SVertex(VEC3(+halfW, 0, +halfH), VEC2(10, 0)),
		SVertex(VEC3(+halfW, 0, -halfH), VEC2(10, 10)),
		SVertex(VEC3(-halfW, 0, -halfH), VEC2(0, 10)),
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
	pMaterial->SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("road002_diff.dds"), eTextureType_2D, 0, true));
	pMaterial->SetTexture(1, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("road002_ddn.dds")));

	SSamplerDesc& samDesc = pMaterial->GetSamplerStateDesc(0);
	pMaterial->SetSamplerStateDesc(0, samDesc);

	pMaterial->InitShader(("Opaque"), eShader_Opaque);

	pEntity->SetMaterial(pMaterial);

	// Ambient cube
	//bool bOk = g_env.pSceneMgr->GetAmbientCube()->GenerateHDRCubeMap(VEC3(0, 10, 0), GetResPath("tmp_cubemap.dds"), scene);
	//_AST(bOk);

	Texture* pTexIrradiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_diff.dds"), eTextureType_CubeMap);
	Texture* pTexRadiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_spec.dds"), eTextureType_CubeMap);

	g_env.pSceneMgr->GetAmbientCube()->SetupCubeMap(pTexIrradiance, pTexRadiance);

	// Another test sphere entity
	Neo::Entity* pSpheres = g_env.pSceneMgr->CreateEntity(eEntity_StaticModel, GetResPath("sphere_group.obj"));
	pSpheres->SetPosition(VEC3(0, 2, 0));
	scene->AddEntity(pSpheres);

	pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_sphere", eVertexType_General, 10);

	for (int i = 0; i < 10; ++i)
	{
		pMaterial->GetSubMaterial(i).SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("Black1x1.dds")));
		pMaterial->GetSubMaterial(i).glossiness = i / 9.0f;
		pMaterial->GetSubMaterial(i).specular.Set(1,1,1);
	}

	pMaterial->InitShader(("Opaque"), eShader_Opaque);
	pSpheres->SetMaterial(pMaterial);

	// GGX anisotropic

	Mesh* pSphereMesh = g_env.pSceneMgr->LoadMeshFromFile("sphere_group_anisotropic", GetResPath("sphere_group.obj"));
	pSphereMesh->BuildTangents();

	Neo::Entity* pSpheres2 = new Neo::Entity(pSphereMesh);
	pSpheres2->SetPosition(VEC3(0, 2, 20));
	scene->AddEntity(pSpheres2);

	pMaterial = Neo::MaterialManager::GetSingleton().NewMaterial("Mtl_AnisotropicGGX", eVertexType_NormalMap, 10);

	for (int i = 0; i < 10; ++i)
	{
		pMaterial->GetSubMaterial(i).SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("White1x1.dds")));
		pMaterial->GetSubMaterial(i).glossiness = i / 9.0f;
		pMaterial->GetSubMaterial(i).specular.Set(1, 1, 1);
	}

	pMaterial->InitShader(("Anisotropic"), eShader_Forward);
	pSpheres2->SetMaterial(pMaterial);
}

void EnterTestScene6(Scene* scene)
{
	Neo::Camera* pCamera = g_env.pSceneMgr->GetCamera();
	pCamera->SetPosition(VEC3(0, 5, 0));
	pCamera->SetNearClip(0.5f);
	pCamera->SetFarClip(500.0f);
	pCamera->SetMoveSpeed(0.2f);
	pCamera->SetDirection(VEC3::UNIT_Z);
}


void SetupTestScene7(Scene* scene)
{
	// Sun light
	g_env.pSceneMgr->SetupSunLight(VEC3(1, -1, 2), SColor(0.7f,0.7f,0.7f));
	g_env.pSceneMgr->SetShadowDepthBias(0.01f);

	// Sponza scene
	bool bOk = g_env.pSceneMgr->LoadSponzaScene(scene);
	_AST(bOk);

	// Ambient cube
	//bOk = g_env.pSceneMgr->GetAmbientCube()->GenerateHDRCubeMap(VEC3(0, 5, 0), GetResPath("tmp_cubemap.dds"), scene);
	//_AST(bOk);

	Texture* pTexIrradiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_diff.dds"), eTextureType_CubeMap);
	Texture* pTexRadiance = g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("sponza_ambientcube_spec.dds"), eTextureType_CubeMap);

	g_env.pSceneMgr->GetAmbientCube()->SetupCubeMap(pTexIrradiance, pTexRadiance);

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
			pMaterial->GetSubMaterial(i).SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("Black1x1.dds")));
			pMaterial->GetSubMaterial(i).glossiness = i / 9.0f;
			pMaterial->GetSubMaterial(i).specular.Set(1, 1, 1);
		}

		pMaterial->InitShader(("Opaque"), eShader_Opaque);
		pEntity->SetMaterial(pMaterial);
	}

	//g_env.pSceneMgr->CreateHero(scene, VEC3(0, 15, -20));
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
		////// Test Scene 2: Sky, Water
		//ADD_TEST_SCENE(SetupTestScene2, EnterTestScene2);

		////// Test Scene 3: Terrain
		ADD_TEST_SCENE(SetupTestScene3, EnterTestScene3);

		//// Test Scene 4: Shadow testing
		//ADD_TEST_SCENE(SetupTestScene4, EnterTestScene4);

		// Test Scene 5: Fur and hair rendering
		//ADD_TEST_SCENE(SetupTestScene5, EnterTestScene5);

		//// Test Scene 6: Full HDR and physically-based deferred shading
		//ADD_TEST_SCENE(SetupTestScene6, EnterTestScene6);

		//// Test Scene 7: Sponza
		//ADD_TEST_SCENE(SetupTestScene7, EnterTestScene7);
	}
}


