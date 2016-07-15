#include "stdafx.h"
#include "VertexData.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	VertexData::VertexData()
		: m_nVerts(0)
		, m_pVertData(nullptr)
		, m_pTangentData(nullptr)
	{

	}
	//------------------------------------------------------------------------------------
	VertexData::~VertexData()
	{
		SAFE_DELETE_ARRAY(m_pVertData);
		SAFE_DELETE_ARRAY(m_pTangentData);
	}
	//------------------------------------------------------------------------------------
	void VertexData::InitVertex(eVertexType type, const SVertex* pVert, uint32 nVert)
	{
		m_vertType = type;
		m_nVerts = nVert;
		m_pVertData = new SVertex[nVert];

		memcpy(m_pVertData, pVert, sizeof(SVertex) * nVert);
	}
	//------------------------------------------------------------------------------------
	void VertexData::InitTangents(const STangentData* pVert, uint32 nVert)
	{
		_AST(nVert == m_nVerts);

		m_pTangentData = new STangentData[nVert];
		memcpy(m_pTangentData, pVert, sizeof(STangentData) * nVert);
	}
}