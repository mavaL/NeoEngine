#include "stdafx.h"
#include "RenderObject.h"
#include "D3D11RenderSystem.h"
#include "Material.h"


namespace Neo
{
	//-------------------------------------------------------------------------------
	RenderObject::RenderObject()
	:m_pMaterial(nullptr)
	,m_pVertexBuf(nullptr)
	,m_pIndexBuf(nullptr)
	,m_nVertCnt(0)
	,m_nIndexCnt(0)
	{

	}
	//-------------------------------------------------------------------------------
	RenderObject::~RenderObject()
	{
		SAFE_RELEASE(m_pMaterial);
	}
	//-------------------------------------------------------------------------------
	void RenderObject::OnFrameMove()
	{
		//更新变换法线的逆转置矩阵
		m_matWorldIT = m_matWorld.Inverse();
		m_matWorldIT = m_matWorldIT.Transpose();

		//更新世界包围盒
		m_worldAABB = m_localAABB;
		m_worldAABB.Transform(m_matWorld);
	}
	//-------------------------------------------------------------------------------
	bool RenderObject::CreateVertexBuffer( const SVertex* pVerts, int nVert, bool bStatic )
	{
		SAFE_RELEASE(m_pVertexBuf);

		D3D11_BUFFER_DESC bd;
		ZeroMemory( &bd, sizeof(bd) );
		bd.ByteWidth = sizeof(SVertex) * nVert;
		bd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.Usage = D3D11_USAGE_IMMUTABLE;

		D3D11_SUBRESOURCE_DATA InitData;
		ZeroMemory( &InitData, sizeof(InitData) );
		InitData.pSysMem = pVerts;

		if(!bStatic)
		{
			bd.Usage = D3D11_USAGE_DYNAMIC;
			bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
		}

		HRESULT hr = S_OK;
		V_RETURN(g_env.pRenderSystem->GetDevice()->CreateBuffer( &bd, &InitData, &m_pVertexBuf ));

		m_nVertCnt = nVert;

		return true;
	}
	//-------------------------------------------------------------------------------
	bool RenderObject::CreateIndexBuffer( const DWORD* pIdx, int nIdx, bool bStatic )
	{
		SAFE_RELEASE(m_pIndexBuf);

		// Create index buffer
		D3D11_BUFFER_DESC bd;
		ZeroMemory( &bd, sizeof(bd) );
		bd.ByteWidth = sizeof(DWORD) * nIdx;
		bd.BindFlags = D3D11_BIND_INDEX_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.Usage = D3D11_USAGE_IMMUTABLE;

		D3D11_SUBRESOURCE_DATA InitData;
		ZeroMemory( &InitData, sizeof(InitData) );
		InitData.pSysMem = pIdx;

		if(!bStatic)
		{
			bd.Usage = D3D11_USAGE_DYNAMIC;
			bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
		}

		HRESULT hr = S_OK;
		V_RETURN(g_env.pRenderSystem->GetDevice()->CreateBuffer( &bd, &InitData, &m_pIndexBuf ));

		m_nIndexCnt = nIdx;

		return true;
	}
	//-------------------------------------------------------------------------------
	void RenderObject::SetMaterial( Material* pMaterial )
	{
		SAFE_RELEASE(m_pMaterial);
		m_pMaterial = pMaterial;
		pMaterial->AddRef();
	}
	//-------------------------------------------------------------------------------
	void RenderObject::Render(Material* pMaterial)
	{
		ID3D11DeviceContext* pDeviceContext = g_env.pRenderSystem->GetDeviceContext();

		g_env.pRenderSystem->SetTransform(eTransform_World, GetWorldMatrix(), false);
		g_env.pRenderSystem->SetTransform(eTransform_WorldIT, GetWorldITMatrix(), true);

		if (pMaterial)
			pMaterial->Activate();
		else
			m_pMaterial->Activate();

		const UINT stride = sizeof(SVertex);
		UINT offset = 0;

		pDeviceContext->IASetVertexBuffers( 0, 1, &m_pVertexBuf, &stride, &offset );

		if (m_pIndexBuf)
		{
			pDeviceContext->IASetIndexBuffer( m_pIndexBuf, DXGI_FORMAT_R32_UINT, 0 );
			pDeviceContext->DrawIndexed( m_nIndexCnt, 0, 0 );
		}
		else
		{
			pDeviceContext->Draw(m_nVertCnt, 0);
		}
	}
}



