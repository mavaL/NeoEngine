#include "stdafx.h"
#include "Water.h"
#include "D3D11RenderSystem.h"
#include "D3D11Texture.h"
#include "D3D11RenderTarget.h"
#include "RenderObject.h"
#include "Material.h"
#include "Application.h"
#include "Camera.h"


namespace Neo
{
	//------------------------------------------------------------------------------------
	Water::Water()
	:m_waterMesh(new RenderObject)
	,m_pRenderSystem(g_env.pRenderSystem)
	{
		_InitMaterial();
		_InitWaterMesh();
		_InitConstantBuffer();
	}
	//------------------------------------------------------------------------------------
	Water::~Water()
	{
		SAFE_RELEASE(m_pCB_VS);
		SAFE_RELEASE(m_pCB_PS);
		SAFE_RELEASE(m_pRefracMaterial);
		SAFE_RELEASE(m_pWaterDepthMaterial);
		SAFE_RELEASE(m_pFinalComposeMaterial);
		SAFE_RELEASE(m_pTexRefracMask);
		SAFE_RELEASE(m_pRT_Reflection);
		SAFE_RELEASE(m_pRT_Depth);
		SAFE_DELETE(m_waterMesh);
	}
	//------------------------------------------------------------------------------------
	void Water::_InitMaterial()
	{
		//TODO: Reflection RT
		// 	video::ITexture* texReflection = driver->addTexture(driver->getScreenSize(), "WaterReflectionRT", 
		// 		video::ePF_A8R8G8B8, video::eTextureUsage_RenderTarget);
		// 	_IRR_DEBUG_BREAK_IF(!texReflection && "Failed to create RT!");
		// 
		// 	m_pRT_Reflection = driver->addRenderTarget(texReflection);
		// 	m_pRT_Reflection->grab();
		// 	m_pRT_Reflection->setRenderPhase(ESNRP_Terrain|ESNRP_SOLID);

		// Scene map (alpha channel uses for refraction mask)
		m_pTexRefracMask = m_pRenderSystem->CreateManualTexture(
			"WaterSceneTex", SCREEN_WIDTH, SCREEN_HEIGHT, ePF_A8B8G8R8, eTextureUsage_WriteOnly);
		m_pTexRefracMask->AddRef();

		// Water depth map
		D3D11Texture* texDepth = m_pRenderSystem->CreateManualTexture(
			"WaterDepthRT", SCREEN_WIDTH, SCREEN_HEIGHT, ePF_A8B8G8R8, eTextureUsage_RenderTarget);

		m_pRT_Depth = new D3D11RenderTarget(texDepth);

		// Create material
		m_pRefracMaterial = new Material;
		m_pRefracMaterial->InitShader(GetResPath("Water_RefractionMask.hlsl"), GetResPath("Water_RefractionMask.hlsl"));

		m_pWaterDepthMaterial = new Material;
		m_pWaterDepthMaterial->InitShader(GetResPath("Water_Depth.hlsl"), GetResPath("Water_Depth.hlsl"));

		m_pFinalComposeMaterial = new Material;
		m_pFinalComposeMaterial->InitShader(GetResPath("Water_Final.hlsl"), GetResPath("Water_Final.hlsl"));

		// Normal map
		m_pFinalComposeMaterial->SetTexture(0, new D3D11Texture(GetResPath("waves2.dds")));
		// Reflection map
		m_pFinalComposeMaterial->SetTexture(1, new D3D11Texture(GetResPath("Snow.dds"), eTextureType_CubeMap));
		// Refraction mask map
		m_pFinalComposeMaterial->SetTexture(2, m_pTexRefracMask);
		// Water depth map
		//m_pFinalComposeMaterial->SetTexture(3, m_pRT_Depth->GetRenderTexture());

		// 		getMaterial(0).TextureLayer[1].TextureWrapU = video::ETC_CLAMP;
		// 		getMaterial(0).TextureLayer[1].TextureWrapV = video::ETC_CLAMP;
		// 		getMaterial(0).TextureLayer[2].TextureWrapU = video::ETC_CLAMP;
		// 		getMaterial(0).TextureLayer[3].TextureWrapV = video::ETC_CLAMP;
		// 		getMaterial(0).TextureLayer[3].TextureWrapU = video::ETC_CLAMP;
		// 		getMaterial(0).TextureLayer[3].TextureWrapV = video::ETC_CLAMP;
	}
	//------------------------------------------------------------------------------------
	void Water::_InitWaterMesh()
	{
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

				vert[idx].pos.Set(posX, 0, posZ);
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

		m_waterMesh->CreateVertexBuffer(vert, nVerts, true);
		m_waterMesh->CreateIndexBuffer(pIndices, nIndex, true);

		SAFE_DELETE_ARRAY(vert);
		SAFE_DELETE_ARRAY(pIndices);
	}
	//-------------------------------------------------------------------------------
	void Water::_InitConstantBuffer()
	{
		D3D11_BUFFER_DESC bd;
		ZeroMemory( &bd, sizeof(bd) );
		bd.Usage = D3D11_USAGE_DEFAULT;
		bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.ByteWidth = sizeof(ConstantVS);
		HRESULT hr = m_pRenderSystem->GetDevice()->CreateBuffer( &bd, NULL, &m_pCB_VS );
		assert(SUCCEEDED(hr) && "Create ConstantVS failed!");

		m_constantBufVS.texScale	=	VEC2(25, 26);
		m_constantBufVS.bumpSpeed	=	VEC2(0.015f, 0.005f);
		m_constantBufVS.BumpScale	=	0.2f;
		m_constantBufVS.waveFreq	=	0.028f;
		m_constantBufVS.waveAmp		=	1.8f;

		bd.ByteWidth = sizeof(ConstantPS);
		hr = m_pRenderSystem->GetDevice()->CreateBuffer( &bd, NULL, &m_pCB_PS );
		assert(SUCCEEDED(hr) && "Create ConstantPS failed!");

		m_constantBufPS.deepColor	=	VEC4(0.0f, 0.3f, 0.5f, 1.0f);
		m_constantBufPS.shallowColor =	VEC4(0.0f, 1.0f, 1.0f, 1.0f);
		m_constantBufPS.reflectionColor = VEC4(0.95f, 1.0f, 1.0f, 1.0f);
		m_constantBufPS.reflectionAmount =	1.0f;
		m_constantBufPS.reflectionBlur	=	0.0f;
		m_constantBufPS.waterAmount		=	0.3f;
		m_constantBufPS.fresnelPower	=	5.0f;
		m_constantBufPS.fresnelBias		=	0.328f;
		m_constantBufPS.refractionAmount =	0.075f;
	}
	//-------------------------------------------------------------------------------
	void Water::Update()
	{
		ID3D11DeviceContext* pContext = m_pRenderSystem->GetDeviceContext();
		// Camera pos in object space
		MAT44 invWorld = m_waterMesh->GetWorldMatrix().Inverse();

		m_constantBufVS.viewPt = g_env.pApp->GetCamera()->GetPos().GetVec3();
		Common::Transform_Vec3_By_Mat44(m_constantBufVS.viewPt, invWorld, true);

		pContext->UpdateSubresource( m_pCB_VS, 0, NULL, &m_constantBufVS, 0, 0 );
		pContext->VSSetConstantBuffers( 1, 1, &m_pCB_VS );

		pContext->UpdateSubresource( m_pCB_PS, 0, NULL, &m_constantBufPS, 0, 0 );
		pContext->PSSetConstantBuffers( 2, 1, &m_pCB_PS );
	}
	//------------------------------------------------------------------------------------
	void Water::Render()
	{
		_RenderRefraction();

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
		m_waterMesh->Render();

		m_pRenderSystem->CopyFrameBufferToTexture(m_pTexRefracMask);

		// Restore render state
		depthDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
		blendDesc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;

		m_pRenderSystem->SetDepthStencelState(depthDesc);
		m_pRenderSystem->SetBlendStateDesc(blendDesc);
	}
	//------------------------------------------------------------------------------------
	void Water::_RenderWaterDepth()
	{

	}
	//------------------------------------------------------------------------------------
	void Water::_FinalCompose()
	{
		m_waterMesh->SetMaterial(m_pFinalComposeMaterial);
		m_waterMesh->Render();
	}
}