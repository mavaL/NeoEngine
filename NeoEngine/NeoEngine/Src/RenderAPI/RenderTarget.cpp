#include "stdafx.h"
#include "RenderTarget.h"
#include "Mesh.h"
#include "Entity.h"
#include "RenderSystem.h"
#include "Renderer.h"
#include "Camera.h"
#include "SceneManager.h"
#include "Texture.h"

namespace Neo
{
	Mesh* RenderTarget::m_pQuadMesh = nullptr;
	Entity* RenderTarget::m_pQuadEntity = nullptr;
	//------------------------------------------------------------------------------------
	RenderTarget::RenderTarget()
		: m_pRenderTexture(nullptr)
		, m_pRenderSystem(g_env.pRenderer->GetRenderSys())
		, m_nUsage(0)
		, m_pDepthStencil(nullptr)
		, m_iActiveSlice(0)
	{
		// Create screen quad
		static bool bCreate = false;
		if (!bCreate)
		{
			m_pQuadMesh = new Mesh;
			SubMesh* pSubMesh = new SubMesh;

			SVertex v[4] =
			{
				SVertex(VEC3(-1, 1, 1), VEC2(0, 0)),
				SVertex(VEC3(1, 1, 1), VEC2(1, 0)),
				SVertex(VEC3(-1, -1, 1), VEC2(0, 1)),
				SVertex(VEC3(1, -1, 1), VEC2(1, 1))
			};
			DWORD index[6] = { 0, 1, 2, 1, 3, 2 };

			// Store index to frustum far corner
			v[0].normal.x = 0;
			v[1].normal.x = 1;
			v[2].normal.x = 2;
			v[3].normal.x = 3;

			pSubMesh->InitVertData(eVertexType_General, v, ARRAYSIZE(v), true);
			pSubMesh->InitIndexData(index, ARRAYSIZE(index), true);

			m_pQuadMesh->AddSubMesh(pSubMesh);

			m_pQuadEntity = new Entity(m_pQuadMesh);

			m_pQuadEntity->SetCastShadow(false);
			m_pQuadEntity->SetReceiveShadow(false);

			bCreate = true;
		}
	}
	//------------------------------------------------------------------------------------
	RenderTarget::~RenderTarget()
	{

	}
	//------------------------------------------------------------------------------------
	void RenderTarget::BeforeRender(bool bClearColor, bool bClearZ, const SColor& clearColor, float fz)
	{
		// Update aspect ratio and viewport
		if (m_nUsage & eRenderTargetUsage_AutoUpdateRatioAspect)
		{
			g_env.pSceneMgr->GetCamera()->SetAspectRatio(m_viewport.Width / m_viewport.Height);
			g_env.pRenderer->GetGlobalCB().matProj = g_env.pSceneMgr->GetCamera()->GetProjMatrix().Transpose();
			g_env.pRenderer->UpdateGlobalCBuffer();
		}

		m_pRenderSystem->SetViewport(&m_viewport);

		RenderTarget* pRT = this;

		g_env.pRenderer->UnbindTexture(m_pRenderTexture);
		m_pRenderSystem->SetRenderTarget(&pRT, m_pDepthStencil, 1, bClearColor, bClearZ, clearColor);
	}
	//------------------------------------------------------------------------------------
	void RenderTarget::AfterRender()
	{
		// Restore
		if (m_nUsage & eRenderTargetUsage_AutoUpdateRatioAspect)
		{
			g_env.pSceneMgr->GetCamera()->SetAspectRatio(g_env.pRenderer->GetWndWidth() / (float)g_env.pRenderer->GetWndHeight());
			g_env.pRenderer->GetGlobalCB().matProj = g_env.pSceneMgr->GetCamera()->GetProjMatrix().Transpose();
			g_env.pRenderer->UpdateGlobalCBuffer();
		}

		g_env.pRenderer->RestoreViewport();
	}
	//------------------------------------------------------------------------------------
	void RenderTarget::SetActiveSlice(uint32 i)
	{
		_AST(m_pRenderTexture->GetTextureType() == eTextureType_3D);
		m_iActiveSlice = i;
	}
	//------------------------------------------------------------------------------------
	void* RenderTarget::GetRTV()
	{
		if (m_pRenderTexture)
		{
			if (m_pRenderTexture->GetTextureType() == eTextureType_3D)
			{
				return m_pRenderTexture->GetRTV(m_iActiveSlice);
			}
			else
			{
				return m_pRenderTexture->GetRTV();
			}
		}
		return nullptr;
	}

}