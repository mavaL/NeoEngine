#include "stdafx.h"
#include "D3D11RenderTarget.h"
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "SceneManager.h"
#include "Mesh.h"
#include "Camera.h"
#include "Entity.h"
#include "Material.h"

namespace Neo
{
	Mesh* D3D11RenderTarget::m_pQuadMesh = nullptr;
	Entity* D3D11RenderTarget::m_pQuadEntity = nullptr;

	//----------------------------------------------------------------------------------------
	D3D11RenderTarget::D3D11RenderTarget()
		: m_pRenderSystem(g_env.pRenderSystem)
		, m_pRenderTexture(nullptr)
		, m_bHasDepthBuffer(false)
		, m_bUpdateRatioAspect(true)
		, m_pDepthStencil(nullptr)
		, m_sizeRatio(0, 0)
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
				SVertex(VEC3(-1,1,1), VEC2(0,0)),
				SVertex(VEC3(1,1,1), VEC2(1,0)),
				SVertex(VEC3(-1,-1,1), VEC2(0,1)),
				SVertex(VEC3(1,-1,1), VEC2(1,1))
			};
			DWORD index[6] = { 0,1,2, 1,3,2 };

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
	//----------------------------------------------------------------------------------------
	D3D11RenderTarget::~D3D11RenderTarget()
	{
		Destroy();
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::Init(uint32 width, uint32 height, ePixelFormat format, bool bOwnDepthBuffer /*= true*/, bool bUpdateRatioAspect, bool bNoColorBuffer, bool bMips)
	{
		// Setup the viewport
		m_viewport.Width = (float)width;
		m_viewport.Height = (float)height;
		m_viewport.MinDepth = 0.0f;
		m_viewport.MaxDepth = 1.0f;
		m_viewport.TopLeftX = 0;
		m_viewport.TopLeftY = 0;

		const uint32 screenW = m_pRenderSystem->GetWndWidth();
		const uint32 screenH = m_pRenderSystem->GetWndHeight();

		m_sizeRatio.Set(width / (float)screenW, height / (float)screenH);

		m_bHasDepthBuffer = bOwnDepthBuffer;
		m_bUpdateRatioAspect = bUpdateRatioAspect;

		// Create render texture
		if (!bNoColorBuffer)
		{
			uint32 nUsage = eTextureUsage_RenderTarget;
			if (bMips)
			{
				nUsage |= eTextureUsage_AutoGenMips;
			}
			m_pRenderTexture = new D3D11Texture(width, height, nullptr, format, nUsage, bMips);
		}

		// Create depth stencil buffer
		if (m_bHasDepthBuffer)
			_CreateDepthBuffer(width, height);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::Init(uint32 width, uint32 height, uint32 depth, ePixelFormat format, bool bOwnDepthBuffer /*= true*/, bool bUpdateRatioAspect, bool bNoColorBuffer)
	{
		// Setup the viewport
		m_viewport.Width = (float)width;
		m_viewport.Height = (float)height;
		m_viewport.MinDepth = 0.0f;
		m_viewport.MaxDepth = 1.0f;
		m_viewport.TopLeftX = 0;
		m_viewport.TopLeftY = 0;

		const uint32 screenW = m_pRenderSystem->GetWndWidth();
		const uint32 screenH = m_pRenderSystem->GetWndHeight();

		m_sizeRatio.Set(width / (float)screenW, height / (float)screenH);

		m_bHasDepthBuffer = bOwnDepthBuffer;
		m_bUpdateRatioAspect = bUpdateRatioAspect;

		// Create render texture
		if (!bNoColorBuffer)
		{
			m_pRenderTexture = new D3D11Texture(width, height, depth, format, eTextureUsage_RenderTarget, false);
		}

		// Create depth stencil buffer
		if (m_bHasDepthBuffer)
			_CreateDepthBuffer(width, height);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::Destroy()
	{
		SAFE_RELEASE(m_pDepthStencil);
		SAFE_RELEASE(m_pRenderTexture);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::_CreateDepthBuffer( uint32 width, uint32 height )
	{
		m_pDepthStencil = new D3D11Texture(width, height, nullptr, ePF_Depth32, eTextureUsage_Depth, false);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::BeforeRender(bool bClearColor, bool bClearZ, const SColor& clearColor, float fz)
	{
		// Update aspect ratio and viewport
		if (m_bUpdateRatioAspect)
		{
			g_env.pSceneMgr->GetCamera()->SetAspectRatio(m_viewport.Width / m_viewport.Height);
			m_pRenderSystem->GetGlobalCB().matProj = g_env.pSceneMgr->GetCamera()->GetProjMatrix().Transpose();
			m_pRenderSystem->UpdateGlobalCBuffer();
		}		

		m_pRenderSystem->SetViewport(m_viewport);
		
		D3D11RenderTarget* pRT = this;

		m_pRenderSystem->UnbindTexture(m_pRenderTexture);
		m_pRenderSystem->SetRenderTarget(&pRT, m_pDepthStencil, 1, bClearColor, bClearZ, clearColor);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::AfterRender()
	{
		// Restore
		if (m_bUpdateRatioAspect)
		{
			g_env.pSceneMgr->GetCamera()->SetAspectRatio(m_pRenderSystem->GetWndWidth() / (float)m_pRenderSystem->GetWndHeight());
			m_pRenderSystem->GetGlobalCB().matProj = g_env.pSceneMgr->GetCamera()->GetProjMatrix().Transpose();
			m_pRenderSystem->UpdateGlobalCBuffer();
		}		

		m_pRenderSystem->RestoreViewport();
	}
	//------------------------------------------------------------------------------------
	ID3D11RenderTargetView* D3D11RenderTarget::GetRTV()
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
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::RenderScreenQuad(Material* pMaterial, bool bClearColor, bool bClearZ, const SColor& clearColor, float fz)
	{
		BeforeRender(bClearColor, bClearZ, clearColor, fz);

		// Turn off z buffer
		SStateDepth oldDepthState = m_pRenderSystem->GetCurDepthState();
		SStateDepth depthState = oldDepthState;
		depthState.Desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
		depthState.Desc.DepthEnable = FALSE;
		m_pRenderSystem->SetDepthState(&depthState);

		pMaterial->Activate();
		m_pQuadEntity->Render();	

		AfterRender();

		// Restore render state
		m_pRenderSystem->SetDepthState(&oldDepthState);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::OnWindowResized()
	{
		const uint32 screenW = m_pRenderSystem->GetWndWidth();
		const uint32 screenH = m_pRenderSystem->GetWndHeight();

		const uint32 newWidth = (uint32)(screenW * m_sizeRatio.x);
		const uint32 newHeight = (uint32)(screenH * m_sizeRatio.y);

		// Resize render texture
		m_pRenderTexture->Resize(newWidth, newHeight);
		m_pDepthStencil->Resize(newWidth, newHeight);
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::SetActiveSlice(uint32 i)
	{
		_AST(m_pRenderTexture->GetTextureType() == eTextureType_3D);
		m_iActiveSlice = i;
	}
	//------------------------------------------------------------------------------------
	void D3D11RenderTarget::GenerateMips()
	{
		_AST(m_pRenderTexture->GetUsage() & eTextureUsage_AutoGenMips);

		m_pRenderSystem->GetDeviceContext()->GenerateMips(m_pRenderTexture->GetSRV());
	}

}
