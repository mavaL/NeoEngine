#include "stdafx.h"
#include "VertexData.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	VertexData::VertexData()
		:m_type((eVertexType)-1)
		,m_pGenerl(nullptr)
		,m_pLeaf(nullptr)
		,m_nVerts(0)
	{

	}
	//------------------------------------------------------------------------------------
	VertexData::~VertexData()
	{
		SAFE_DELETE_ARRAY(m_pGenerl);
		SAFE_DELETE_ARRAY(m_pLeaf);
	}
	//------------------------------------------------------------------------------------
	void VertexData::Init_General( const SVertex* pVert, uint32 nVert )
	{
		SAFE_DELETE_ARRAY(m_pGenerl);

		m_pGenerl = new SVertex[nVert];

		CopyMemory(m_pGenerl, pVert, sizeof(SVertex) * nVert);
		m_nVerts = nVert;
		m_type = eVertexType_General;

		m_vecPos.resize(nVert);
		for(uint32 i=0; i<nVert; ++i)
			m_vecPos[i] = pVert[i].pos;
	}
	//------------------------------------------------------------------------------------
	void VertexData::Init_Leaf( const STreeLeafVertex* pVert, uint32 nVert )
	{
		SAFE_DELETE_ARRAY(m_pLeaf);

		m_pLeaf = new STreeLeafVertex[nVert];

		CopyMemory(m_pLeaf, pVert, sizeof(STreeLeafVertex) * nVert);
		m_nVerts = nVert;
		m_type = eVertexType_TreeLeaf;

		m_vecPos.resize(nVert);
		for(uint32 i=0; i<nVert; ++i)
			m_vecPos[i] = pVert[i].pos;
	}
	//------------------------------------------------------------------------------------
	void* VertexData::GetVertexData()
	{
		switch (m_type)
		{
		case eVertexType_General: return m_pGenerl;
		case eVertexType_TreeLeaf: return m_pLeaf;
		default: assert(0); return nullptr;
		}
	}
	//------------------------------------------------------------------------------------
	uint32 VertexData::GetVertexStride() const
	{
		switch (m_type)
		{
		case eVertexType_General: return sizeof(SVertex);
		case eVertexType_TreeLeaf: return sizeof(STreeLeafVertex);
		default: assert(0); return 0;
		}
	}
}