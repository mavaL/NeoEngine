#include "stdafx.h"
#include "Scene.h"
#include "Application.h"
#include "Camera.h"
#include "Material.h"
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "SceneManager.h"


#define ADD_TEST_SCENE($setupFunc, $enterFunc)						\
{																	\
	Scene::StrategyFunc setupFunc = $setupFunc;						\
	Scene::StrategyFunc enterFunc = $enterFunc;						\
	Scene* pScene = new Scene(setupFunc, enterFunc);				\
	m_scenes.push_back(pScene);										\
}

void SetupTestScene1(Scene* scene)
{
	Neo::RenderObject* obj=  new Neo::RenderObject;

	Neo::SVertex v[3];
	v[0].pos = VEC3(0, 15, 0);
	v[1].pos = VEC3(20, -15, 0);
	v[2].pos = VEC3(-20, -15, 0);

	v[0].normal = VEC3::NEG_UNIT_Z;
	v[1].normal = VEC3::NEG_UNIT_Z;
	v[2].normal = VEC3::NEG_UNIT_Z;

	v[0].uv = VEC2(0.5f, 0.0f);
	v[1].uv = VEC2(1.0f, 1.0f);
	v[2].uv = VEC2(0.0f, 1.0f);

	DWORD index[3] = { 0,1,2 };

	obj->CreateVertexBuffer(v, 3, true);
	obj->CreateIndexBuffer(index, 3, true);

	scene->AddRenderObject(obj);

	Neo::Material* pMaterial = new Neo::Material;
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"));
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("lion.bmp")));

	g_env.pRenderSystem->AddMaterial("TestMaterial", pMaterial);
	obj->SetMaterial(pMaterial);
}

void EnterTestScene1(Scene* scene)
{
	g_env.pApp->GetCamera()->SetPosition(VEC3(0,0,-200));
	g_env.pApp->GetCamera()->SetMoveSpeed(1.0f);
	g_env.pApp->GetCamera()->SetDirection(VEC3::UNIT_Z);
}


void SetupTestScene2(Scene* scene)
{
	g_env.pSceneMg->CreateSky();
	g_env.pSceneMg->CreateWater();
}

void EnterTestScene2(Scene* scene)
{
	Camera* pCamera = g_env.pApp->GetCamera();
	pCamera->SetPosition(VEC3(0, 100, 0));
	pCamera->SetNearClip(100);
	pCamera->SetFarClip(100000.0f);
	pCamera->SetMoveSpeed(2.0f);
	pCamera->SetDirection(VEC3::UNIT_Z);
}


void Application::_InitAllScene()
{
	//// Test Scene 1: A textured triangle
	ADD_TEST_SCENE(SetupTestScene1, EnterTestScene1);

	//// Test Scene 2: Sky, Terrain, Water
	ADD_TEST_SCENE(SetupTestScene2, EnterTestScene2);
}

