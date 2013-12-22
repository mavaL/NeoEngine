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
	Neo::RenderObject* obj=  g_env.pSceneMg->LoadMesh(GetResPath("skull.mesh"));

	scene->AddRenderObject(obj);

	Neo::Material* pMaterial = new Neo::Material;
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), false, true);	// Enable ssao
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("White1x1.png")));

	g_env.pSceneMg->EnableDebugRT(eDebugRT_SSAO);

	obj->SetMaterial(pMaterial);

	MAT44 mat;
	mat.FromAxisAngle(VEC3::UNIT_Y, 90);
	obj->SetWorldMatrix(mat);
}

void EnterTestScene1(Scene* scene)
{
	g_env.pApp->GetCamera()->SetPosition(VEC3(0,0,-200));
	g_env.pApp->GetCamera()->SetMoveSpeed(0.2f);
	g_env.pApp->GetCamera()->SetDirection(VEC3::UNIT_Z);
}


static Neo::RenderObject*	CreateCube(const VEC3& minPt, const VEC3& maxPt)
{
	Neo::RenderObject* pCube =  new Neo::RenderObject;

	Neo::SVertex vert[24];

	// front side
	vert[0].pos.Set(minPt.x, minPt.y, maxPt.z);
	vert[0].uv.Set(0, 1);
	vert[1].pos.Set(maxPt.x, minPt.y, maxPt.z);
	vert[1].uv.Set(1, 1);
	vert[2].pos.Set(maxPt.x, maxPt.y, maxPt.z);
	vert[2].uv.Set(1, 0);
	vert[3].pos.Set(minPt.x, maxPt.y, maxPt.z);
	vert[3].uv.Set(0, 0);

	// back side
	vert[4].pos.Set(maxPt.x, minPt.y, minPt.z);
	vert[4].uv.Set(0, 1);
	vert[5].pos.Set(minPt.x, minPt.y, minPt.z);
	vert[5].uv.Set(1, 1);
	vert[6].pos.Set(minPt.x, maxPt.y, minPt.z);
	vert[6].uv.Set(1, 0);
	vert[7].pos.Set(maxPt.x, maxPt.y, minPt.z);
	vert[7].uv.Set(0, 0);

	// left side
	vert[8].pos.Set(minPt.x, minPt.y, minPt.z);
	vert[9].pos.Set(minPt.x, minPt.y, maxPt.z);
	vert[10].pos.Set(minPt.x, maxPt.y, maxPt.z);
	vert[11].pos.Set(minPt.x, maxPt.y, minPt.z);
	vert[8].uv.Set(0, 1);
	vert[9].uv.Set(1, 1);
	vert[10].uv.Set(1, 0);
	vert[11].uv.Set(0, 0);

	// right side
	vert[12].pos.Set(maxPt.x, minPt.y, maxPt.z);
	vert[13].pos.Set(maxPt.x, minPt.y, minPt.z);
	vert[14].pos.Set(maxPt.x, maxPt.y, minPt.z);
	vert[15].pos.Set(maxPt.x, maxPt.y, maxPt.z);
	vert[12].uv.Set(0, 1);
	vert[13].uv.Set(1, 1);
	vert[14].uv.Set(1, 0);
	vert[15].uv.Set(0, 0);

	// up side
	vert[16].pos.Set(minPt.x, maxPt.y, maxPt.z);
	vert[17].pos.Set(maxPt.x, maxPt.y, maxPt.z);
	vert[18].pos.Set(maxPt.x, maxPt.y, minPt.z);
	vert[19].pos.Set(minPt.x, maxPt.y, minPt.z);
	vert[16].uv.Set(0, 1);
	vert[17].uv.Set(1, 1);
	vert[18].uv.Set(1, 0);
	vert[19].uv.Set(0, 0);

	// down side
	vert[20].pos.Set(minPt.x, minPt.y, minPt.z);
	vert[21].pos.Set(maxPt.x, minPt.y, minPt.z);
	vert[22].pos.Set(maxPt.x, minPt.y, maxPt.z);
	vert[23].pos.Set(minPt.x, minPt.y, maxPt.z);
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

	pCube->CreateVertexBuffer(vert, 24, true);
	pCube->CreateIndexBuffer(faces, 6*2*3, true);

	return pCube;
}

static Neo::RenderObject*	CreateFrustum(const VEC3& minBottom, const VEC3& maxBottom, const VEC3& minTop, const VEC3& maxTop)
{
	Neo::RenderObject* pFrustum =  new Neo::RenderObject;

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

	pFrustum->CreateVertexBuffer(vert, 24, true);
	pFrustum->CreateIndexBuffer(faces, 6*2*3, true);

	return pFrustum;
}

void SetupTestScene2(Scene* scene)
{
	/// Create a cube to observe reflection
	Neo::RenderObject* pCube =  CreateCube(VEC3(-100,100,-100), VEC3(100,300,100));

	scene->AddRenderObject(pCube);

	Neo::Material* pMaterial = new Neo::Material;
	pMaterial->InitShader(GetResPath("Opaque.hlsl"), GetResPath("Opaque.hlsl"), true);
	pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("lion.bmp")));

	pCube->SetMaterial(pMaterial);

	/// Create another geometry to observe refraction
	Neo::RenderObject* pGeometry =  CreateFrustum(VEC3(-500,-100,-500), VEC3(500,100,500), VEC3(-100,300,-100), VEC3(100,300,100));
	pGeometry->SetMaterial(pMaterial);
	scene->AddRenderObject(pGeometry);

	MAT44 matWorld;
	matWorld.SetTranslation(VEC4(2000, 0, 0, 1));
	pGeometry->SetWorldMatrix(matWorld);

	pMaterial->Release();
}

void EnterTestScene2(Scene* scene)
{
	g_env.pSceneMg->CreateSky();
	g_env.pSceneMg->CreateWater();

	Camera* pCamera = g_env.pApp->GetCamera();
	pCamera->SetPosition(VEC3(0, 100, 0));
	pCamera->SetNearClip(100);
	pCamera->SetFarClip(100000.0f);
	pCamera->SetMoveSpeed(2.0f);
	pCamera->SetDirection(VEC3::UNIT_Z);
}


void SetupTestScene3(Scene* scene)
{
}

void EnterTestScene3(Scene* scene)
{
	g_env.pSceneMg->CreateTerrain();
	//g_env.pSceneMg->CreateWater(5.0f);

	Camera* pCamera = g_env.pApp->GetCamera();
	pCamera->SetPosition(VEC3(0, 10, 0));
	pCamera->SetNearClip(1);
	pCamera->SetFarClip(30000.0f);
	pCamera->SetMoveSpeed(0.1f);
	pCamera->SetDirection(VEC3::UNIT_Z);
}


void Application::_InitAllScene()
{
	//// Test Scene 1: mesh, SSAO post effect
	ADD_TEST_SCENE(SetupTestScene1, EnterTestScene1);

	//// Test Scene 2: Sky, Water
	ADD_TEST_SCENE(SetupTestScene2, EnterTestScene2);

	//// Test Scene 3: Terrain
	ADD_TEST_SCENE(SetupTestScene3, EnterTestScene3);
}

