#include "stdafx.h"
#include "Water.h"
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "D3D11RenderTarget.h"
#include "Mesh.h"
#include "Entity.h"
#include "Material.h"
#include "Camera.h"
#include "SceneManager.h"


namespace Neo
{
	//------------------------------------------------------------------------------------
	Water::Water(float waterHeight)
	:m_waterMesh(nullptr)
	,m_pEntity(nullptr)
	,m_pRenderSystem(g_env.pRenderSystem)
	,m_pCB_VS(nullptr)
	,m_pCB_PS(nullptr)
	,m_pCB_Depth(nullptr)
	,m_pRefracMaterial(nullptr)
	,m_pWaterDepthMaterial(nullptr)
	,m_pFinalComposeMaterial(nullptr)
	,m_pTexSceneWithRefracMask(nullptr)
	,m_pRT_Reflection(nullptr)
	,m_pRT_Depth(nullptr)
	{
		_InitMaterial();
		_InitWaterMesh(waterHeight);
		_InitConstantBuffer();
	}
	//------------------------------------------------------------------------------------
	Water::~Water()
	{
		SAFE_RELEASE(m_pCB_VS);
		SAFE_RELEASE(m_pCB_PS);
		SAFE_RELEASE(m_pCB_Depth);
		SAFE_RELEASE(m_pRefracMaterial);
		SAFE_RELEASE(m_pWaterDepthMaterial);
		SAFE_RELEASE(m_pFinalComposeMaterial);
		SAFE_RELEASE(m_pTexSceneWithRefracMask);
		SAFE_RELEASE(m_pRT_Reflection);
		SAFE_RELEASE(m_pRT_Depth);
		SAFE_DELETE(m_waterMesh);
		SAFE_DELETE(m_pEntity);
	}
	//------------------------------------------------------------------------------------
	void Water::_InitMaterial()
	{
		const uint32 screenW = m_pRenderSystem->GetWndWidth();
		const uint32 screenH = m_pRenderSystem->GetWndHeight();

		// Reflection map
		//m_pRT_Reflection = m_pRenderSystem->CreateRenderTarget();
		//m_pRT_Reflection->Init(screenW / 2, screenH / 2, ePF_A8B8G8R8);
		//m_pRT_Reflection->SetRenderPhase(eRenderPhase_Geometry & ~eRenderPhase_Water);

		//// Scene map (alpha channel uses for refraction mask)
		//m_pTexSceneWithRefracMask = new D3D11Texture(screenW, screenH, nullptr, ePF_A8B8G8R8, 
		//	eTextureUsage_WriteOnly | eTextureUsage_RecreateOnWndResized, false);

		//// Water depth map
		//m_pRT_Depth = m_pRenderSystem->CreateRenderTarget();
		//m_pRT_Depth->Init(screenW / 2, screenH / 2, ePF_A8B8G8R8);

		//// TODO: terrain gets water-shore transition
		//m_pRT_Depth->SetRenderPhase(eRenderPhase_Opaque /*| eRenderPhase_Terrain*/);

		// Create material
		m_pRefracMaterial = new Material;
		m_pRefracMaterial->InitShader(GetResPath("Water_RefractionMask.hlsl"), GetResPath("Water_RefractionMask.hlsl"), eShader_Transparent);

		m_pWaterDepthMaterial = new Material;
		m_pWaterDepthMaterial->InitShader(GetResPath("Water_Depth.hlsl"), GetResPath("Water_Depth.hlsl"), eShader_Transparent);

		m_pFinalComposeMaterial = new Material;
		m_pFinalComposeMaterial->InitShader(GetResPath("Water_Final.hlsl"), GetResPath("Water_Final.hlsl"), eShader_Transparent);

		// Noise map
		m_pFinalComposeMaterial->SetTexture(0, new D3D11Texture(GetResPath("waves2.dds")));
		// Reflection map
		m_pFinalComposeMaterial->SetTexture(1, m_pRT_Reflection->GetRenderTexture());
		// Refraction mask map
		m_pFinalComposeMaterial->SetTexture(2, m_pTexSceneWithRefracMask);
		// Water depth map
		m_pFinalComposeMaterial->SetTexture(3, m_pRT_Depth->GetRenderTexture());

		for (int i=1; i<=3; ++i)
		{
			D3D11_SAMPLER_DESC& sampler = m_pFinalComposeMaterial->GetSamplerStateDesc(i);
			sampler.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
			sampler.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			m_pFinalComposeMaterial->SetSamplerStateDesc(i, sampler);
		}
	}
	//------------------------------------------------------------------------------------
	void Water::_InitWaterMesh(float waterHeight)
	{
		m_waterPlane.Set(VEC3::UNIT_Y, waterHeight);

		// Construct terrain likely grids
		const int vertsPerSide = 151, cellSpace = 200;
		const float dimension = (vertsPerSide - 1.0f) * cellSpace;
		const float halfDim = dimension / 2;
		float uvInc = 1.0f / (vertsPerSide - 1);

		int nVerts = vertsPerSide * vertsPerSide;
		int nIndex = (vertsPerSide - 1) * (vertsPerSide - 1) * 2 * 3;

		SVertex* vert = new SVertex[nVerts];
		DWORD* pIndices = new DWORD[nIndex];

		if(!vert || !pIndices)
			throw std::exception("Error!Not enough memory!");

		float posZ = -halfDim;
		for (int z=0; z<vertsPerSide; ++z)
		{
			float posX = -halfDim;
			for (int x=0; x<vertsPerSide; ++x)
			{
				int idx = z*vertsPerSide+x;

				vert[idx].pos.Set(posX, m_waterPlane.d, posZ);
				vert[idx].uv.Set(x*uvInc, z*uvInc);

				posX += cellSpace;
			}
			posZ += cellSpace;
		}

		int idx = 0;
		for (int z=0; z<vertsPerSide-1; ++z)
		{
			for (int x=0; x<vertsPerSide-1; ++x)
			{
				pIndices[idx + 0] = z		* vertsPerSide + x;
				pIndices[idx + 1] = (z + 1) * vertsPerSide + x;
				pIndices[idx + 2] = (z + 1) * vertsPerSide + x + 1;
				pIndices[idx + 3] = (z + 1) * vertsPerSide + x + 1;
				pIndices[idx + 4] = z		* vertsPerSide + x + 1;
				pIndices[idx + 5] = z		* vertsPerSide + x;

				idx += 6;
			}
		}

		m_waterMesh = new Mesh;
		SubMesh* pSubMesh = new SubMesh;

		m_waterMesh->AddSubMesh(pSubMesh);

		pSubMesh->InitVertData(eVertexType_General, vert, nVerts, true);
		pSubMesh->InitIndexData(pIndices, nIndex, true);

		SAFE_DELETE_ARRAY(vert);
		SAFE_DELETE_ARRAY(pIndices);

		m_pEntity = new Entity(m_waterMesh);

		m_pEntity->SetCastShadow(false);
		m_pEntity->SetReceiveShadow(false);
	}
	//-------------------------------------------------------------------------------
	void Water::_InitConstantBuffer()
	{
		HRESULT hr = S_OK;
		D3D11_BUFFER_DESC bd;
		ZeroMemory( &bd, sizeof(bd) );

		bd.Usage = D3D11_USAGE_DEFAULT;
		bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.ByteWidth = sizeof(cBufferVSFinal);
		V(m_pRenderSystem->GetDevice()->CreateBuffer( &bd, NULL, &m_pCB_VS ));

		m_constantBufVS.texScale	=	VEC2(25, 26);
		m_constantBufVS.bumpSpeed	=	VEC2(0.015f, 0.005f);
		m_constantBufVS.BumpScale	=	0.2f;
		m_constantBufVS.waveFreq	=	0.028f;
		m_constantBufVS.waveAmp		=	1.8f;

		bd.ByteWidth = sizeof(cBufferPSFinal);
		V(m_pRenderSystem->GetDevice()->CreateBuffer( &bd, NULL, &m_pCB_PS ));

		m_constantBufPS.deepColor	=	VEC4(0.0f, 0.3f, 0.5f, 1.0f);
		m_constantBufPS.shallowColor =	VEC4(0.0f, 1.0f, 1.0f, 1.0f);
		m_constantBufPS.reflectionColor = VEC4(0.95f, 1.0f, 1.0f, 1.0f);
		m_constantBufPS.reflectionAmount =	0.2f;
		m_constantBufPS.reflectionBlur	=	0.0f;
		m_constantBufPS.waterAmount		=	0.3f;
		m_constantBufPS.fresnelPower	=	5.0f;
		m_constantBufPS.fresnelBias		=	0.328f;
		m_constantBufPS.refractionAmount =	0.075f;

		bd.ByteWidth = sizeof(cBufferDepth);
		V(m_pRenderSystem->GetDevice()->CreateBuffer( &bd, NULL, &m_pCB_Depth ));

		m_constantBufDepth.waterPlaneHeight	= m_waterPlane.d;
		m_constantBufDepth.depthLimit = 1.0f / 90.0f;
	}
	//-------------------------------------------------------------------------------
	void Water::Update()
	{
		// Camera pos in object space
		MAT44 invWorld = m_pEntity->GetWorldMatrix().Inverse();

		m_constantBufVS.viewPt = g_env.pSceneMgr->GetCamera()->GetPos();
		Common::Transform_Vec3_By_Mat44(m_constantBufVS.viewPt, invWorld, true);
	}
	//------------------------------------------------------------------------------------
	void Water::Render()
	{
		_RenderRefraction();

		_RenderReflection();

		_RenderWaterDepth();

		_FinalCompose();
	}
	//------------------------------------------------------------------------------------
	void Water::_RenderRefraction()
	{
		D3D11_DEPTH_STENCIL_DESC& depthDesc = m_pRenderSystem->GetDepthStencilDesc();
		D3D11_BLEND_DESC& blendDesc = m_pRenderSystem->GetBlendStateDesc();

		// Shut off z-write and color output
		depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
		blendDesc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALPHA;

		m_pRenderSystem->SetDepthStencelState(depthDesc);
		m_pRenderSystem->SetBlendStateDesc(blendDesc);

		// Render
		m_waterMesh->SetMaterial(m_pRefracMaterial);
		m_pEntity->Render();

		m_pRenderSystem->CopyFrameBufferToTexture(m_pTexSceneWithRefracMask);

		// Restore render state
		depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
		blendDesc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;

		m_pRenderSystem->SetDepthStencelState(depthDesc);
		m_pRenderSystem->SetBlendStateDesc(blendDesc);
	}
	//------------------------------------------------------------------------------------
	void Water::_RenderReflection()
	{
		// Reflect view matrix
		//const MAT44 matView = g_env.pSceneMgr->GetCamera()->GetViewMatrix();
		//const MAT44 matReflecView = Common::BuildReflectMatrix(m_waterPlane) * matView;
		//m_pRenderSystem->SetTransform(eTransform_View, matReflecView, true);

		//// Set clip plane
		//m_pRenderSystem->EnableClipPlane(true, &m_waterPlane);

		//// Render
		//m_pRT_Reflection->Update();

		//// Restore render state
		//m_pRenderSystem->SetTransform(eTransform_View, matView, true);
		//m_pRenderSystem->EnableClipPlane(false, nullptr);
	}
	//------------------------------------------------------------------------------------
	void Water::_RenderWaterDepth()
	{
		ID3D11DeviceContext* pContext = m_pRenderSystem->GetDeviceContext();

		pContext->UpdateSubresource( m_pCB_Depth, 0, NULL, &m_constantBufDepth, 0, 0 );
		pContext->VSSetConstantBuffers( 1, 1, &m_pCB_Depth );
		pContext->PSSetConstantBuffers( 1, 1, &m_pCB_Depth );

//		m_pRT_Depth->Update(m_pWaterDepthMaterial);
	}
	//------------------------------------------------------------------------------------
	void Water::_FinalCompose()
	{
		ID3D11DeviceContext* pContext = m_pRenderSystem->GetDeviceContext();

		pContext->UpdateSubresource( m_pCB_VS, 0, NULL, &m_constantBufVS, 0, 0 );
		pContext->VSSetConstantBuffers( 1, 1, &m_pCB_VS );

		pContext->UpdateSubresource( m_pCB_PS, 0, NULL, &m_constantBufPS, 0, 0 );
		pContext->PSSetConstantBuffers( 2, 1, &m_pCB_PS );

		m_waterMesh->SetMaterial(m_pFinalComposeMaterial);
		m_pEntity->Render();
	}
}