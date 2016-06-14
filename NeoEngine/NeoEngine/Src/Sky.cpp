#include "stdafx.h"
#include "Sky.h"
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "Material.h"
#include "Camera.h"
#include "SceneManager.h"
#include "Mesh.h"
#include "Entity.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	Sky::Sky()
	:m_pMesh(nullptr)
	,m_pRenderSystem(g_env.pRenderSystem)
	,m_pEntity(nullptr)
	{
		_InitMesh();
	}
	//------------------------------------------------------------------------------------
	Sky::~Sky()
	{
		SAFE_DELETE(m_pMesh);
		SAFE_DELETE(m_pEntity);
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

		m_pMesh = new Mesh;
		SubMesh* pSubMesh = new SubMesh;

		pSubMesh->InitVertData(eVertexType_General, vert, 8, true);
		pSubMesh->InitIndexData(pIndices, 6*2*3, true);

		m_pMesh->AddSubMesh(pSubMesh);

		SAFE_DELETE_ARRAY(vert);
		SAFE_DELETE_ARRAY(pIndices);

		Neo::Material* pMaterial = new Neo::Material;
		pMaterial->SetTexture(0, new Neo::D3D11Texture(GetResPath("Skybox.dds"), eTextureType_CubeMap));
		pMaterial->InitShader(GetResPath("Sky.hlsl"), GetResPath("Sky.hlsl"), eShader_Opaque, eShaderFlag_EnableClipPlane);

		pSubMesh->SetMaterial(pMaterial);
		pMaterial->Release();

		D3D11_SAMPLER_DESC& sampler = pMaterial->GetSamplerStateDesc(0);
		sampler.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
		sampler.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;
		
		pMaterial->SetSamplerStateDesc(0, sampler);

		m_pEntity = new Entity(m_pMesh);

		m_pEntity->SetCastShadow(false);
		m_pEntity->SetReceiveShadow(false);
	}
	//-------------------------------------------------------------------------------
	void Sky::Update()
	{
		// Scale and translate our skybox
		Camera* pCamera = g_env.pSceneMgr->GetCamera();
		float scale = (pCamera->GetFarClip() - pCamera->GetNearClip()) / 2;

		m_pEntity->SetScale(scale);
		m_pEntity->SetPosition(pCamera->GetPos());
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
		m_pEntity->Render();

		// Restore render state
		depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
		depthDesc.DepthEnable = TRUE;
		m_pRenderSystem->SetDepthStencelState(depthDesc);
	}
}