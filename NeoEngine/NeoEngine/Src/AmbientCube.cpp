#include "stdafx.h"
#include "AmbientCube.h"
#include "Texture.h"
#include "D3D11/D3D11RenderSystem.h"
#include "SceneManager.h"
#include "Scene.h"
#include "Camera.h"
#include "Sky.h"
#include "Renderer.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	AmbientCube::AmbientCube()
		: m_pTexIrradiance(nullptr)
		, m_pTexRadiance(nullptr)
	{
	}
	//------------------------------------------------------------------------------------
	AmbientCube::~AmbientCube()
	{
	}
	//------------------------------------------------------------------------------------
	bool AmbientCube::GenerateHDRCubeMap(const VEC3& pos, const STRING& filename, Scene* pScene)
	{
		const uint32 ENV_MAP_SIZE = 256;
		ID3D11DeviceContext* pDeviceContext = g_pRenderSys->GetDeviceContext();
		ID3D11Device* pDevice = g_pRenderSys->GetDevice();
		ID3D11Texture2D* pCubeMap = nullptr;
		ID3D11Texture2D* pDepthTex = nullptr;
		ID3D11DepthStencilView* pDSV = nullptr;
		HRESULT hr = S_OK;

		// Create cube texture
		{
			CD3D11_TEXTURE2D_DESC desc(DXGI_FORMAT_R16G16B16A16_FLOAT, ENV_MAP_SIZE, ENV_MAP_SIZE);
			desc.ArraySize = 6;
			desc.MipLevels = 1;
			desc.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;
			desc.MiscFlags |= D3D11_RESOURCE_MISC_TEXTURECUBE;

			V(pDevice->CreateTexture2D(&desc, nullptr, &pCubeMap));
		}

		{
			CD3D11_TEXTURE2D_DESC desc(DXGI_FORMAT_R32_TYPELESS, ENV_MAP_SIZE, ENV_MAP_SIZE);
			desc.Usage = D3D11_USAGE_DEFAULT;
			desc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			V(pDevice->CreateTexture2D(&desc, nullptr, &pDepthTex));

			D3D11_DEPTH_STENCIL_VIEW_DESC descDSV;
			ZeroMemory(&descDSV, sizeof(descDSV));
			descDSV.Format = DXGI_FORMAT_D32_FLOAT;
			descDSV.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
			descDSV.Flags = 0;
			descDSV.Texture2D.MipSlice = 0;

			HRESULT hr = S_OK;
			V(pDevice->CreateDepthStencilView(pDepthTex, &descDSV, &pDSV));
		}

		// Setup camera for cube map rendering
		Camera* pSceneCam = g_env.pSceneMgr->GetCamera();
		Camera camCube(pSceneCam->GetNearClip(), pSceneCam->GetFarClip(), 90, 1, false);
		camCube._BuildProjMatrix();
		camCube.SetPosition(pos);
		VEC3 vLookDirection[6] = { VEC3::UNIT_X, VEC3::NEG_UNIT_X, VEC3::UNIT_Y, VEC3::NEG_UNIT_Y, VEC3::UNIT_Z, VEC3::NEG_UNIT_Z };
		VEC3 vUp[6] = { VEC3::UNIT_Y, VEC3::UNIT_Y, VEC3::NEG_UNIT_Z, VEC3::UNIT_Z, VEC3::UNIT_Y, VEC3::UNIT_Y };
		g_env.pSceneMgr->SetCamera(&camCube);

		g_env.pSceneMgr->SetCurRenderPhase(eRenderPhase_Forward);

		// Viewport
		D3D11_VIEWPORT vp = { 0, 0, ENV_MAP_SIZE, ENV_MAP_SIZE, 0, 1 };
		pDeviceContext->RSSetViewports(1, &vp);

		// For each face
		for (int i = 0; i < 6; ++i)
		{
			ID3D11RenderTargetView* pRTV = nullptr;
			D3D11_RENDER_TARGET_VIEW_DESC descRTV;
			descRTV.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2DARRAY;
			descRTV.Format = DXGI_FORMAT_R16G16B16A16_FLOAT;
			descRTV.Texture2DArray.MipSlice = 0;
			descRTV.Texture2DArray.ArraySize = 1;
			descRTV.Texture2DArray.FirstArraySlice = i;

			V(pDevice->CreateRenderTargetView(pCubeMap, &descRTV, &pRTV));

			pDeviceContext->OMSetRenderTargets(1, &pRTV, pDSV);

			FLOAT color[4] = { 0 };
			pDeviceContext->ClearRenderTargetView(pRTV, color);
			pDeviceContext->ClearDepthStencilView(pDSV, D3D11_CLEAR_DEPTH, 1.0f, 0);

			camCube.SetUp(vUp[i]);
			camCube.SetDirection(vLookDirection[i]);
			camCube._BuildViewMatrix();
			g_env.pRenderer->Update(0);

			pScene->RenderOpaque();

			Sky* pSky = g_env.pSceneMgr->GetSky();

			if (pSky)
			{
				pSky->Render();
			}
		}

		g_pRenderSys->SwapBuffer();
		V(D3DX11SaveTextureToFileA(pDeviceContext, pCubeMap, D3DX11_IFF_DDS, filename.c_str()));

		// Restore
		g_env.pSceneMgr->SetCurRenderPhase(eRenderPhase_None);
		g_env.pSceneMgr->SetCamera(pSceneCam);
		g_pRenderSys->SetRenderTarget(nullptr, g_pRenderSys->GetDepthBuffer(), 1, false, false);
		g_env.pRenderer->RestoreViewport();
		SAFE_RELEASE(pCubeMap);

		return true;
	}
	//------------------------------------------------------------------------------------
	void AmbientCube::SetupCubeMap(Texture* pIEM, Texture* pREM)
	{
		m_pTexIrradiance = pIEM;
		m_pTexRadiance = pREM;

		pIEM->AddRef();
		pREM->AddRef();
	}
}

