#include "stdafx.h"
#include "D3D11/D3D11Buffer.h"
#include "D3D11/D3D11RenderSystem.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	D3D11ConstantBuffer::D3D11ConstantBuffer(D3D11Buffer* pBuf)
		:ConstantBuffer(pBuf)
	{
	
	}
	//------------------------------------------------------------------------------------
	void D3D11ConstantBuffer::Apply(uint32 nSlot, bool bVS, bool bPS, bool bGS, bool bCS, bool bTessellate)
	{
		ID3D11Buffer* pBuf = (ID3D11Buffer*)m_pBuf->GetInternel();

		if (bVS)
		{
			g_pRenderSys->GetDeviceContext()->VSSetConstantBuffers(nSlot, 1, &pBuf);
		}

		if (bPS)
		{
			g_pRenderSys->GetDeviceContext()->PSSetConstantBuffers(nSlot, 1, &pBuf);
		}

		if (bGS)
		{
			g_pRenderSys->GetDeviceContext()->GSSetConstantBuffers(nSlot, 1, &pBuf);
		}

		if (bCS)
		{
			g_pRenderSys->GetDeviceContext()->CSSetConstantBuffers(nSlot, 1, &pBuf);
		}

		if (bTessellate)
		{
			g_pRenderSys->GetDeviceContext()->HSSetConstantBuffers(nSlot, 1, &pBuf);
			g_pRenderSys->GetDeviceContext()->DSSetConstantBuffers(nSlot, 1, &pBuf);
		}
	}
	//------------------------------------------------------------------------------------
	D3D11Buffer::D3D11Buffer(uint32 nSize, uint32 nStride, uint32 nUsage, const void* pData)
		: m_nStride(nStride)
		, m_usage(nUsage)
		, m_size(nSize)
		, m_pShadowBuf(nullptr)
	{
		D3D11_BUFFER_DESC bd;
		ZeroMemory(&bd, sizeof(D3D11_BUFFER_DESC));
		bd.Usage = D3D11_USAGE_DEFAULT;
		bd.CPUAccessFlags = 0;
		bd.ByteWidth = nSize;

		D3D11_SUBRESOURCE_DATA InitData;
		ZeroMemory(&InitData, sizeof(InitData));

		if (pData)
		{
			InitData.pSysMem = pData;
		}

		if (nUsage & eBufferUsage_ConstantBuf)
		{
			bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
		}
		else if (nUsage & eBufferUsage_VertexBuf)
		{
			bd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
		}
		else if (nUsage & eBufferUsage_IndexBuf)
		{
			bd.BindFlags = D3D11_BIND_INDEX_BUFFER;
		}

		if (nUsage & eBufferUsage_Dynamic)
		{
			bd.Usage = D3D11_USAGE_DYNAMIC;
			bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
		}
		else if (!(nUsage & eBufferUsage_ConstantBuf))
		{
			// If this buffer is immutable, it has to have initial data.
			if (pData)
			{
				bd.Usage = D3D11_USAGE_IMMUTABLE;
			}
		}

		HRESULT hr = S_OK;
		V(g_pRenderSys->GetDevice()->CreateBuffer(&bd, pData ? &InitData : nullptr, &m_pBuf));
	}
	//------------------------------------------------------------------------------------
	D3D11Buffer::~D3D11Buffer()
	{
		SAFE_DELETE_ARRAY(m_pShadowBuf);
		SAFE_RELEASE(m_pBuf);
	}
	//------------------------------------------------------------------------------------
	void* D3D11Buffer::Lock()
	{
		// Dynamic buffers can be mapped directly.
		if (m_usage & eBufferUsage_Dynamic)
		{
			D3D11_MAPPED_SUBRESOURCE mapped;
			mapped.pData = NULL;
			HRESULT hr = S_OK;

			V(g_pRenderSys->GetDeviceContext()->Map(m_pBuf, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped));

			return mapped.pData;
		} 
		else
		{
			if (!m_pShadowBuf)
			{
				m_pShadowBuf = new char[m_size];
				ZeroMemory(m_pShadowBuf, m_size);

				return m_pShadowBuf;
			}
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11Buffer::Unlock()
	{
		if (m_usage & eBufferUsage_Dynamic)
		{
			g_pRenderSys->GetDeviceContext()->Unmap(m_pBuf, 0);
		} 
		else
		{
			UpdateBuf(m_pShadowBuf);
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11Buffer::UpdateBuf(void* pSrc)
	{
		g_pRenderSys->GetDeviceContext()->UpdateSubresource(m_pBuf, 0, NULL, pSrc, 0, 0);
	}
	//------------------------------------------------------------------------------------
	void* D3D11Buffer::GetInternel()
	{
		return m_pBuf;
	}
	//------------------------------------------------------------------------------------
	D3D11IndexBuffer::D3D11IndexBuffer(D3D11Buffer* pBuf)
		: IndexBuffer(pBuf)
	{

	}
	//------------------------------------------------------------------------------------
	D3D11VertexBuffer::D3D11VertexBuffer(D3D11Buffer* pBuf)
		: VertexBuffer(pBuf)
	{

	}

}