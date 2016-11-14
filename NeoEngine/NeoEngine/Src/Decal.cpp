#include "stdafx.h"
#include "Decal.h"
#include "Entity.h"
#include "Mesh.h"
#include "MaterialManager.h"
#include "Material.h"
#include "SceneManager.h"
#include "RenderTarget.h"

namespace Neo
{
	Entity* Decal::m_pUnitCube = nullptr;
	//------------------------------------------------------------------------------------
	Decal::Decal(const VEC3& pos, float size)
		: m_vPos(pos)
		, m_fSize(size)
		, m_pMaterial(nullptr)
	{
		if (!m_pUnitCube)
		{
			SVertex vert[8] =
			{
				SVertex(VEC3(-0.5f, -0.5f, +0.5f), VEC2(0, 0)),
				SVertex(VEC3(+0.5f, -0.5f, +0.5f), VEC2(0, 0)),
				SVertex(VEC3(+0.5f, -0.5f, -0.5f), VEC2(0, 0)),
				SVertex(VEC3(-0.5f, -0.5f, -0.5f), VEC2(0, 0)),
				SVertex(VEC3(-0.5f, +0.5f, +0.5f), VEC2(0, 0)),
				SVertex(VEC3(+0.5f, +0.5f, +0.5f), VEC2(0, 0)),
				SVertex(VEC3(+0.5f, +0.5f, -0.5f), VEC2(0, 0)),
				SVertex(VEC3(-0.5f, +0.5f, -0.5f), VEC2(0, 0)),
			};

			DWORD dwIndex[36] = {
				0,2,1,0,3,2,		// bottom
				4,5,7,5,6,7,		// top
				4,7,0,7,3,0,		// left
				6,5,2,5,1,2,		// right
				7,6,3,6,2,3,		// behind
				5,4,1,4,0,1,		// front
			};

			Mesh* pMesh = new Mesh;
			SubMesh* pSubmesh = new SubMesh;

			pSubmesh->InitVertData(eVertexType_General, vert, 8, true);
			pSubmesh->InitIndexData(dwIndex, 36, true);

			pMesh->AddSubMesh(pSubmesh);

			m_pUnitCube = new Entity(pMesh);
			m_pUnitCube->SetCastShadow(false);
		}

		static int iDecal = 0;
		++iDecal;
		char szBuf[64];
		sprintf_s(szBuf, 64, "Mtl_Decal_%d", iDecal);

		m_pMaterial = MaterialManager::GetSingleton().NewMaterial(szBuf);
		m_pMaterial->InitShader("Decal", eShader_Opaque, 0, nullptr, "VS_GBuffer", "PS_GBuffer");

		m_pMaterial->SetTexture(0, g_env.pSceneMgr->GetDepthRT()->GetRenderTexture());

		SSamplerDesc& sam = m_pMaterial->GetSamplerStateDesc(0);
		sam.Filter = SF_MIN_MAG_MIP_POINT;
		m_pMaterial->SetSamplerStateDesc(0, sam);

		sam.Filter = SF_MIN_MAG_MIP_LINEAR;
		m_pMaterial->SetSamplerStateDesc(1, sam);
	}
	//------------------------------------------------------------------------------------
	void Decal::SetTexture(Texture* pTex)
	{
		m_pMaterial->SetTexture(1, pTex);
	}
	//------------------------------------------------------------------------------------
	void Decal::Render()
	{
		m_pUnitCube->SetPosition(m_vPos);
		m_pUnitCube->SetScale(m_fSize);
		m_pUnitCube->SetMaterial(m_pMaterial);

		m_pUnitCube->Render();
	}
}

