#include "stdafx.h"
#include "Sky.h"
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "RenderObject.h"
#include "Material.h"
#include "Application.h"
#include "Camera.h"


namespace Neo
{
	//------------------------------------------------------------------------------------
	Sky::Sky()
	:m_pSkyBox(new RenderObject)
	,m_pMaterial(nullptr)
	,m_pRenderSystem(g_env.pRenderSystem)
	{
		_InitMesh();
	}
	//------------------------------------------------------------------------------------
	Sky::~Sky()
	{
		SAFE_RELEASE(m_pMaterial);
		SAFE_DELETE(m_pSkyBox);
	}
	//------------------------------------------------------------------------------------
	void Sky::_InitMesh()
	{
		SVertex* vert = new SVertex[8];
		DWORD* pIndices = new DWORD[6*2*3];

		if(!vert || !pIndices)
			throw std::exception("Error!Not enough memory!");

		vert[0].pos.Set(-1, -1, -1);
		vert[1].pos.Set( 1, -1, -1);
		vert[2].pos.Set( 1, -1, 1);
		vert[3].pos.Set(-1, -1, 1);
		vert[4].pos.Set(-1, 1, -1);
		vert[5].pos.Set( 1, 1, -1);
		vert[6].pos.Set( 1, 1, 1);
		vert[7].pos.Set(-1, 1, 1);

		pIndices[0] = 0; pIndices[1] = 2; pIndices[2] = 1;
		pIndices[3] = 0; pIndices[4] = 3; pIndices[5] = 2;
		pIndices[6] = 5; pIndices[7] = 7; pIndices[8] = 4;
		pIndices[9] = 5; pIndices[10] = 6; pIndices[11] = 7;
		pIndices[12] = 3; pIndices[13] = 6; pIndices[14] = 2;
		pIndices[15] = 3; pIndices[16] = 7; pIndices[17] = 6;
		pIndices[18] = 1; pIndices[19] = 4; pIndices[20] = 0;
		pIndices[21] = 1; pIndices[22] = 5; pIndices[23] = 4;
		pIndices[24] = 0; pIndices[25] = 7; pIndices[26] = 3;
		pIndices[27] = 0; pIndices[28] = 4; pIndices[29] = 7;
		pIndices[30] = 2; pIndices[31] = 5; pIndices[32] = 1;
		pIndices[33] = 2; pIndices[34] = 6; pIndices[35] = 5;

		m_pSkyBox->CreateVertexBuffer(vert, 8, true);
		m_pSkyBox->CreateIndexBuffer(pIndices, 6*2*3, true);

		SAFE_DELETE_ARRAY(vert);
		SAFE_DELETE_ARRAY(pIndices);

		Neo::Material* pMaterial = new Neo::Material;
		pMaterial->InitShader(GetResPath("Sky.hlsl"), GetResPath("Sky.hlsl"));
		pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("Skybox.dds"), eTextureType_CubeMap));

		m_pSkyBox->SetMaterial(pMaterial);

		//mat.TextureLayer[0].TextureWrapU = video::ETC_CLAMP_TO_EDGE;
		//mat.TextureLayer[0].TextureWrapV = video::ETC_CLAMP_TO_EDGE;
	}
	//-------------------------------------------------------------------------------
	void Sky::Update()
	{
		// Scale and translate our skybox
		Camera* pCamera = g_env.pApp->GetCamera();
		float scale = (pCamera->GetFarClip() - pCamera->GetNearClip()) / 2;

		MAT44 matWorld;
		matWorld.SetScale(VEC3(scale,scale,scale));
		matWorld.SetTranslation(pCamera->GetPos());

		m_pSkyBox->SetWorldMatrix(matWorld);
	}
	//------------------------------------------------------------------------------------
	void Sky::Render()
	{
		D3D11_DEPTH_STENCIL_DESC& depthDesc = m_pRenderSystem->GetDepthStencilDesc();

		// Shut off z-buffer
		depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
		depthDesc.DepthEnable = FALSE;
		m_pRenderSystem->SetDepthStencelState(depthDesc);

		// Render
		m_pSkyBox->Render();

		// Restore render state
		depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
		depthDesc.DepthEnable = TRUE;
		m_pRenderSystem->SetDepthStencelState(depthDesc);
	}
}