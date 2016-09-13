/********************************************************************
	created:	2016/09/09 15:40
	filename	D3D11Buffer.h
	author:		maval

	purpose:	Buffer management for dx11.
*********************************************************************/
#ifndef D3D11Buffer_h__
#define D3D11Buffer_h__


#include "Prerequiestity.h"
#include "Buffer.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	class D3D11Buffer : public Buffer
	{
	public:
		D3D11Buffer(uint32 nSize, uint32 nStride, uint32 nUsage, const void* pData = nullptr);
		~D3D11Buffer();

	public:
		virtual	void	UpdateBuf(void* pSrc);
		virtual void*	GetInternel();
		virtual uint32	GetStride() const { return m_nStride; }

		ID3D11Buffer*	m_pBuf;
		uint32			m_nStride;
	};
	//------------------------------------------------------------------------------------
	class D3D11ConstantBuffer : public ConstantBuffer
	{
	public:
		D3D11ConstantBuffer(D3D11Buffer* pBuf);
		~D3D11ConstantBuffer() {}

	public:
		virtual	void	Apply(uint32 nSlot, bool bVS = false, bool bPS = false, bool bGS = false, bool bCS = false, bool bTessellate = false);
	};
	//------------------------------------------------------------------------------------
	class D3D11IndexBuffer : public IndexBuffer
	{
	public:
		D3D11IndexBuffer(D3D11Buffer* pBuf);
		~D3D11IndexBuffer() {}
	};
	//------------------------------------------------------------------------------------
	class D3D11VertexBuffer : public VertexBuffer
	{
	public:
		D3D11VertexBuffer(D3D11Buffer* pBuf);
		~D3D11VertexBuffer() {}
	};
}

#endif // D3D11Buffer_h__

