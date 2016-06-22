#include "stdafx.h"
#include "VertexData.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	VertexData::VertexData()
		:m_type((eVertexType)-1)
		,m_nVerts(0)
	{

	}
	//------------------------------------------------------------------------------------
	VertexData::~VertexData()
	{

	}
	//------------------------------------------------------------------------------------
	void VertexData::Init(const void* pVert, uint32 nVert, eVertexType type)
	{
		m_nVerts = nVert;
		m_type = type;

		m_vecPos.resize(nVert);

		for (uint32 i = 0; i < nVert; ++i)
		{
			switch (type)
			{
			case eVertexType_General: m_vecPos[i] = ((SVertex*)pVert)[i].pos; break;
			case eVertexType_NormalMap: m_vecPos[i] = ((SVertex_NormalMap*)pVert)[i].pos; break;
			default: assert(0);
			}
		}
	}
	//------------------------------------------------------------------------------------
	uint32 VertexData::GetVertexStride() const
	{
		switch (m_type)
		{
		case eVertexType_General: return sizeof(SVertex);
		case eVertexType_NormalMap: return sizeof(SVertex_NormalMap);
		default: assert(0); return 0;
		}
	}
}