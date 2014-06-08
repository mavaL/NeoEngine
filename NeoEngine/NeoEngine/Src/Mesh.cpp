#include "stdafx.h"
#include "Mesh.h"
#include "D3D11RenderSystem.h"
#include "Material.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	Mesh::~Mesh()
	{
		std::for_each(m_submeshes.begin(), m_submeshes.end(), std::default_delete<SubMesh>());
		m_submeshes.clear();
	}
	//------------------------------------------------------------------------------------
	void Mesh::AddSubMesh( SubMesh* submesh )
	{
		m_submeshes.push_back(submesh);
	}
	//------------------------------------------------------------------------------------
	void Mesh::Render( Material* pMaterial )
	{
		for (size_t i=0; i<m_submeshes.size(); ++i)
		{
			m_submeshes[i]->Render(pMaterial);
		}
	}
	//------------------------------------------------------------------------------------
	SubMesh* Mesh::GetSubMesh( size_t i )
	{
		assert(i < m_submeshes.size());
		return m_submeshes[i];
	}
	//------------------------------------------------------------------------------------
	uint32 Mesh::GetSubMeshCount() const
	{
		return m_submeshes.size();
	}

	//------------------------------------------------------------------------------------
	SubMesh::SubMesh()
		:m_pMaterial(nullptr)
		,m_pVertexBuf(nullptr)
		,m_pIndexBuf(nullptr)
		,m_nIndexCnt(0)
		,m_pIndexData(nullptr)
	{

	}
	//------------------------------------------------------------------------------------
	SubMesh::~SubMesh()
	{
		SAFE_RELEASE(m_pMaterial);
		SAFE_RELEASE(m_pVertexBuf);
		SAFE_RELEASE(m_pIndexBuf);
		SAFE_DELETE(m_pIndexData);
	}
	//------------------------------------------------------------------------------------
	bool SubMesh::InitVertData( eVertexType type, const void* pVerts, int nVert, bool bStatic )
	{
		assert(pVerts);

		SAFE_RELEASE(m_pVertexBuf);

		switch (type)
		{
		case eVertexType_General: m_vertData.Init_General((SVertex*)pVerts, nVert); break;
		case eVertexType_TreeLeaf: m_vertData.Init_Leaf((STreeLeafVertex*)pVerts, nVert); break;
		default: assert(0); break;
		}

		D3D11_BUFFER_DESC bd;
		ZeroMemory( &bd, sizeof(bd) );
		bd.ByteWidth = m_vertData.GetVertexStride() * nVert;
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

		return true;
	}
	//------------------------------------------------------------------------------------
	bool SubMesh::InitIndexData( const DWORD* pIdx, int nIdx, bool bStatic )
	{
		SAFE_RELEASE(m_pIndexBuf);
		SAFE_DELETE_ARRAY(m_pIndexData);

		m_pIndexData = new DWORD[nIdx];
		CopyMemory(m_pIndexData, pIdx, sizeof(DWORD) * nIdx);

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
	//------------------------------------------------------------------------------------
	void SubMesh::Render( Material* pMaterial )
	{
		if (pMaterial)
			pMaterial->Activate();
		else
			m_pMaterial->Activate();

		ID3D11DeviceContext* pDeviceContext = g_env.pRenderSystem->GetDeviceContext();

		const UINT stride = m_vertData.GetVertexStride();
		UINT offset = 0;

		pDeviceContext->IASetVertexBuffers( 0, 1, &m_pVertexBuf, &stride, &offset );

		if (m_pIndexBuf)
		{
			pDeviceContext->IASetIndexBuffer( m_pIndexBuf, DXGI_FORMAT_R32_UINT, 0 );
			pDeviceContext->DrawIndexed( m_nIndexCnt, 0, 0 );
		}
		else
		{
			pDeviceContext->Draw(m_vertData.GetVertCount(), 0);
		}
	}
	//------------------------------------------------------------------------------------
	void SubMesh::SetMaterial( Material* pMaterial )
	{
		SAFE_RELEASE(m_pMaterial);
		m_pMaterial = pMaterial;
		pMaterial->AddRef();
	}
}

