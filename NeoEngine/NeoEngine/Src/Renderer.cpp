#include "stdafx.h"
#include "Color.h"
#include "Camera.h"
#include "Renderer.h"
#include "Font.h"
#include "SceneManager.h"
#include "Material.h"
#include "ShadowMap.h"
#include "ShadowMapPSSM.h"
#include "RenderSystem.h"
#include "d3d11/D3D11RenderSystem.h"
#include "OpenGL/GLRenderSystem.h"
#include "Font.h"
#include "Buffer.h"
#include "Texture.h"
#include "RenderTarget.h"


namespace Neo
{
	//----------------------------------------------------------------------------------------
	Renderer::Renderer()
	: m_wndWidth(0)
	, m_wndHeight(0)
	, m_pRenderSys(nullptr)
	, m_pGlobalCBuf(nullptr)
	, m_pMaterialCB(nullptr)
	, m_pSkinCB(nullptr)
	, m_bClipPlaneEnabled(false)
	, m_iCurBlendState(0xffffffff)
	, m_iCurRasterState(0xffffffff)
	, m_iCurDepthState(0xffffffff)
	{
		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
			m_pTexture[i] = nullptr;
	}
	//------------------------------------------------------------------------------------
	Renderer::~Renderer()
	{
		ShutDown();
	}
	//----------------------------------------------------------------------------------------
	bool Renderer::Init( uint32 wndWidth, uint32 wndHeight, HWND hwnd )
	{
		m_wndWidth = wndWidth;
		m_wndHeight = wndHeight;

#if USE_OPENGL
		m_pRenderSys = new GLRenderSystem;
		_AST(((GLRenderSystem*)m_pRenderSys)->Init(wndWidth, wndHeight, hwnd));
#else
		m_pRenderSys = new D3D11RenderSystem;
		_AST(((D3D11RenderSystem*)m_pRenderSys)->Init(wndWidth, wndHeight, hwnd));
#endif

		// Init rasterize state
		SStateRaster rasterState;
		rasterState.Desc.AntialiasedLineEnable = false;
		rasterState.Desc.CullMode = eCull_BACK;
		rasterState.Desc.DepthBias = 0;
		rasterState.Desc.DepthBiasClamp = 0.0f;
		rasterState.Desc.DepthClipEnable = true;
		rasterState.Desc.FillMode = eFill_Solid;
		rasterState.Desc.FrontCounterClockwise = false;
		rasterState.Desc.MultisampleEnable = false;
		rasterState.Desc.ScissorEnable = false;
		rasterState.Desc.SlopeScaledDepthBias = 0.0f;

		SetRasterState(&rasterState);

		m_wireframeRasterState = rasterState;
		m_wireframeRasterState.Desc.FillMode = eFill_Wireframe;

		// Init depth stencil state
		SStateDepth depthState;
		depthState.Desc.DepthFunc = eCompareFunc_LESS_EQUAL;

		SetDepthState(&depthState);

		// Init blend state
		SStateBlend blendState;
		blendState.Desc.AlphaToCoverageEnable = false;
		blendState.Desc.IndependentBlendEnable = false;
		blendState.Desc.RenderTarget[0].BlendEnable = false;
		blendState.Desc.RenderTarget[0].SrcBlend = eBlend_ONE;
		blendState.Desc.RenderTarget[0].DestBlend = eBlend_ZERO;
		blendState.Desc.RenderTarget[0].BlendOp = eBlendOp_ADD;
		blendState.Desc.RenderTarget[0].SrcBlendAlpha = eBlend_ONE;
		blendState.Desc.RenderTarget[0].DestBlendAlpha = eBlend_ZERO;
		blendState.Desc.RenderTarget[0].BlendOpAlpha = eBlendOp_ADD;
		blendState.Desc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;

		SetBlendState(&blendState);

		// Setup the viewport
		m_viewport.Width = (float)wndWidth;
		m_viewport.Height = (float)wndHeight;
		m_viewport.MinDepth = 0.0f;
		m_viewport.MaxDepth = 1.0f;
		m_viewport.TopLeftX = 0;
		m_viewport.TopLeftY = 0;

		SetViewport(&m_viewport);

		// Create constant buffers
		m_pGlobalCBuf = m_pRenderSys->CreateConstantBuffer(sizeof(cBufferGlobal), 1);
		m_pMaterialCB = m_pRenderSys->CreateConstantBuffer(sizeof(cBufferMaterial), 2);
		m_pSkinCB = m_pRenderSys->CreateConstantBuffer(sizeof(cBufferSkin), 3);

		m_pFont = new Font;

		return true;
	}
	//----------------------------------------------------------------------------------------
	void Renderer::ShutDown()
	{
		SAFE_DELETE(m_pFont);

		for(int i=0; i<MAX_TEXTURE_STAGE; ++i)
			SAFE_RELEASE(m_pTexture[i]);

		SAFE_DELETE(m_pGlobalCBuf);
		SAFE_DELETE(m_pMaterialCB);
		SAFE_DELETE(m_pSkinCB);
	}
	//------------------------------------------------------------------------------------
	void Renderer::SetActiveTexture(int stage, Texture* pTexture)
	{
		assert(stage >=0 && stage < MAX_TEXTURE_STAGE);

		if (m_pTexture[stage] == pTexture)
			return;

		Texture* pOldTex = m_pTexture[stage];
		SAFE_RELEASE(m_pTexture[stage]);
		m_pTexture[stage] = pTexture;

		if (pTexture)
		{
			pTexture->AddRef();
		}

		m_pRenderSys->SetTexture(stage, pTexture, pTexture ? pTexture->GetUsage() : pOldTex->GetUsage());
	}
	//------------------------------------------------------------------------------------
	void Renderer::SetActiveSamplerState(int stage, SamplerState* sampler, bool bVS, bool bGS, bool bTessellation)
	{
		_AST(stage >= 0 && stage < MAX_TEXTURE_STAGE);
		m_pRenderSys->SetSamplerState(stage, sampler, bVS, bGS);
	}
	//-------------------------------------------------------------------------------
	void Renderer::Update(float dt)
	{
		static DWORD nFrameCnt = 0;
		static float fFrameTime = 0;

		// Calc FPS
		++nFrameCnt;
		fFrameTime += dt;

		if (fFrameTime >= 1.0f)
		{
			g_env.pFrameStat->lastFPS = nFrameCnt / fFrameTime;
			nFrameCnt = 0;
			fFrameTime = 0;
		}

		// Update cBuffer
		m_cBufferGlobal.time = GetTickCount() / 1000.0f;

		Camera* cam = g_env.pSceneMgr->GetCamera();
		const MAT44& matView = cam->GetViewMatrix();
		const MAT44& matProj = cam->GetProjMatrix();

		m_cBufferGlobal.camPos = cam->GetPos();

		VEC3 vNegLight = g_env.pSceneMgr->GetSunLight().lightDir;
		vNegLight.Neg();
		vNegLight.Normalize();
		m_cBufferGlobal.lightDirection = vNegLight;

		m_cBufferGlobal.lightColor = g_env.pSceneMgr->GetSunLight().lightColor;
		m_cBufferGlobal.ambientColor.Set(0.2f, 0.2f, 0.2f);
		m_cBufferGlobal.nearZ = cam->GetNearClip();
		m_cBufferGlobal.farZ = cam->GetFarClip();
		m_cBufferGlobal.shadowMapTexelSize = 1.0f / g_env.pSceneMgr->GetShadowMapSize();
		m_cBufferGlobal.frameBufferSize[0] = m_wndWidth;
		m_cBufferGlobal.frameBufferSize[1] = m_wndHeight;
		m_cBufferGlobal.frameBufferSize[2] = m_cBufferGlobal.frameBufferSize[3] = 0;
		
		cam->GetFarCorner(m_cBufferGlobal.frustumFarCorner);

#if USE_PSSM
		ShadowMapPSSM* pPSSM = g_env.pSceneMgr->GetShadowMap()->GetPSSM();

		m_cBufferGlobal.matShadow[0] = pPSSM->GetShadowTransform(0).Transpose();
		m_cBufferGlobal.matShadow[1] = pPSSM->GetShadowTransform(1).Transpose();
		m_cBufferGlobal.matShadow[2] = pPSSM->GetShadowTransform(2).Transpose();
#else
		m_cBufferGlobal.matShadow[0] = g_env.pSceneMgr->GetShadowMap()->GetShadowTransform().Transpose();
#endif
		m_cBufferGlobal.matView = matView.Transpose();
		m_cBufferGlobal.matProj = matProj.Transpose();
		m_cBufferGlobal.matInvView = matView.Inverse().Transpose();
		m_cBufferGlobal.matViewProj = m_cBufferGlobal.matProj * m_cBufferGlobal.matView;

		UpdateGlobalCBuffer(true, true, true);
	}
	//------------------------------------------------------------------------------------
	void Renderer::SetViewport( const SViewport* vp )
	{
		m_pRenderSys->SetViewport(vp);
	}
	//------------------------------------------------------------------------------------
	void Renderer::EnableClipPlane( bool bEnable, const PLANE* plane )
	{
		m_bClipPlaneEnabled = bEnable;
		if (m_bClipPlaneEnabled)
		{
			_AST(plane);
			m_cBufferGlobal.clipPlane = *plane;
			UpdateGlobalCBuffer();
		}
	}
	//------------------------------------------------------------------------------------
	void Renderer::UpdateGlobalCBuffer(bool bTessellate, bool bCS, bool bGS)
	{
		m_pGlobalCBuf->UpdateBuf(&m_cBufferGlobal);

		m_pGlobalCBuf->Apply(0, true, true, bGS, bCS, bTessellate);
	}
	//------------------------------------------------------------------------------------
	void Renderer::UpdateMaterialCBuffer(bool bTessellate, bool bCS, bool bGS)
	{
		m_pMaterialCB->UpdateBuf(&m_cBufferMaterial);

		m_pMaterialCB->Apply(1, true, true, bGS, bCS, bTessellate);
	}
	//------------------------------------------------------------------------------------
	void Renderer::UpdateSkinCBuffer()
	{
		m_pSkinCB->UpdateBuf(&m_cBufferSkin);

		m_pSkinCB->Apply(3, true, false, false, false, false);
	}
	//-------------------------------------------------------------------------------
	void Renderer::DrawText( const STRING& text, const IPOINT& pos, const SColor& color )
	{
		m_pFont->DrawText(text, pos, color);
	}
	//-------------------------------------------------------------------------------
	void Renderer::RestoreViewport()
	{
		SetViewport(&m_viewport);	
	}
	//------------------------------------------------------------------------------------
	void Renderer::EnableWireframeMode(bool b)
	{

	}
	//------------------------------------------------------------------------------------
	void Renderer::UnbindTexture(Texture* tex)
	{
		_AST(tex);

		for (int i = 0; i < MAX_TEXTURE_STAGE; ++i)
		{
			if (m_pTexture[i] == tex)
			{
				SetActiveTexture(i, nullptr);
				break;
			}
		}
	}
	//------------------------------------------------------------------------------------
	void Renderer::SetDepthState(SStateDepth* pNewState)
	{
		uint32 i;
		uint64 nHash = SStateDepth::GetHash(pNewState->Desc);
		const uint32 kNumStates = m_depthStates.size();
		for (i = 0; i < kNumStates; i++)
		{
			if (m_depthStates[i].nHashVal == nHash)
				break;
		}
		if (i == kNumStates)
		{
			SStateDepth pState = *pNewState;
			pState.nHashVal = nHash;

			pState.pDeviceState = m_pRenderSys->CreateDepthState(pNewState->Desc);

			m_depthStates.push_back(pState);
		}
		if (i != m_iCurDepthState)
		{
			m_iCurDepthState = i;
			m_pRenderSys->ApplyDepthState(&m_depthStates[i]);
		}
	}
	//------------------------------------------------------------------------------------
	void Renderer::SetBlendState(SStateBlend* pNewState)
	{
		uint32 i;
		uint64 nHash = SStateBlend::GetHash(pNewState->Desc);
		for (i = 0; i < m_blendStates.size(); i++)
		{
			if (m_blendStates[i].nHashVal.SortVal == nHash)
				break;
		}
		if (i == m_blendStates.size())
		{
			SStateBlend pState = *pNewState;
			pState.nHashVal.SortVal = nHash;


			pState.pDeviceState = m_pRenderSys->CreateBlendState(pNewState->Desc);

			m_blendStates.push_back(pState);
		}
		if (i != m_iCurBlendState)
		{
			m_iCurBlendState = i;
			m_pRenderSys->ApplyBlendState(&m_blendStates[i]);
		}
	}
	//------------------------------------------------------------------------------------
	void Renderer::SetRasterState(SStateRaster* pNewState)
	{
		uint32 i;
		uint32 nHash = SStateRaster::GetHash(pNewState->Desc);
		uint64 nValuesHash = SStateRaster::GetValuesHash(pNewState->Desc);
		for (i = 0; i < m_rasterStates.size(); i++)
		{
			if (m_rasterStates[i].nHashVal == nHash && m_rasterStates[i].nValuesHash == nValuesHash)
				break;
		}
		if (i == m_rasterStates.size())
		{
			SStateRaster pState = *pNewState;
			pState.nHashVal = nHash;
			pState.nValuesHash = nValuesHash;

			pState.pDeviceState = m_pRenderSys->CreateRasterState(pNewState->Desc);

			m_rasterStates.push_back(pState);
		}

		if (i != m_iCurRasterState)
		{
			m_iCurRasterState = i;
			m_pRenderSys->ApplyRasterState(&m_rasterStates[i]);
		}
	}
	//------------------------------------------------------------------------------------
	RenderTarget* Renderer::CreateRenderTarget(uint32 nWidth, uint32 nHeight, uint32 nDepth, ePixelFormat format, uint32 usage)
	{
		return m_pRenderSys->CreateRenderTarget(nWidth, nHeight, nDepth, format, usage);
	}
}

