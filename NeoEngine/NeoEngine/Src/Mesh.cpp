#include "stdafx.h"
#include "Mesh.h"
#include "Renderer.h"
#include "Material.h"
#include "TangentSpaceCalculation.h"
#include "SceneManager.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	Mesh::Mesh(const char* szfilename)
		: m_pMaterial(nullptr)
		, m_filename(szfilename)
		, m_primType(ePrimitive_TriangleList)
	{

	}
	//------------------------------------------------------------------------------------
	Mesh::~Mesh()
	{
		std::for_each(m_submeshes.begin(), m_submeshes.end(), std::default_delete<SubMesh>());
		m_submeshes.clear();

		SAFE_RELEASE(m_pMaterial);
	}
	//------------------------------------------------------------------------------------
	void Mesh::AddSubMesh(SubMesh* submesh)
	{
		m_submeshes.push_back(submesh);
	}
	//------------------------------------------------------------------------------------
	void Mesh::Render()
	{
		for (size_t i = 0; i < m_submeshes.size(); ++i)
		{
			if (m_pMaterial)
			{
				m_pMaterial->Activate(i);
			}
			m_submeshes[i]->Render(GetPrimitiveType());
		}
	}
	//------------------------------------------------------------------------------------
	SubMesh* Mesh::GetSubMesh(size_t i)
	{
		_AST(i < m_submeshes.size());
		return m_submeshes[i];
	}
	//------------------------------------------------------------------------------------
	uint32 Mesh::GetSubMeshCount() const
	{
		return m_submeshes.size();
	}
	//------------------------------------------------------------------------------------
	void Mesh::SetMaterial(Material* pMaterial)
	{
		SAFE_RELEASE(m_pMaterial);
		m_pMaterial = pMaterial;
		pMaterial->AddRef();
	}
	//------------------------------------------------------------------------------------
#if 0
	bool Mesh::BuildTangents()
	{
		for (size_t i = 0; i < m_submeshes.size(); ++i)
		{
			if (!m_submeshes[i]->BuildTangents())
				return false;
		}
		return true;
	}
#endif
	//------------------------------------------------------------------------------------
	SubMesh::SubMesh()
		: m_pVertexStream0(nullptr)
		, m_pIndexBuf(nullptr)
		, m_nIndexCnt(0)
		, m_pIndexData(nullptr)
		, m_pAdjIndexBuf(nullptr)
		, m_nAdjIndexCnt(0)
		, m_pAdjIndexData(nullptr)
		, m_pVertexStream1(nullptr)
		, m_pVertexStream2(nullptr)
	{

	}
	//------------------------------------------------------------------------------------
	SubMesh::~SubMesh()
	{
		SAFE_DELETE(m_pVertexStream0);
		SAFE_DELETE(m_pVertexStream1);
		SAFE_DELETE(m_pVertexStream2);
		SAFE_DELETE(m_pIndexBuf);
		SAFE_DELETE(m_pAdjIndexBuf);
		SAFE_DELETE_ARRAY(m_pIndexData);
		SAFE_DELETE_ARRAY(m_pAdjIndexData);
	}
	//------------------------------------------------------------------------------------
	bool SubMesh::InitVertData(eVertexType type, const SVertex* pVerts, int nVert, bool bStatic)
	{
		_AST(pVerts);

		SAFE_DELETE(m_pVertexStream0);

		m_vertData.InitVertex(type, pVerts, nVert);

		m_pVertexStream0 = g_env.pRenderer->GetRenderSys()->CreateVertexBuffer(sizeof(SVertex) * nVert, sizeof(SVertex), pVerts, bStatic ? 0 : eBufferUsage_Dynamic);
		m_pVertexStream0->m_vertType = type;

		return true;
	}
	//------------------------------------------------------------------------------------
#if 0
	bool SubMesh::BuildTangents()
	{
		SVertex* pVerts = m_vertData.GetVertex();
		const DWORD nTri = m_nIndexCnt / 3;
		CTangentCalcProxy inputProxy;
		inputProxy.Init(pVerts, m_pIndexData, nTri);

		CTangentSpaceCalculation<CTangentCalcProxy> MyTangent;

		uint32 nErrorCode = MyTangent.CalculateTangentSpace(inputProxy);
		_AST(nErrorCode == 0);

		// Reallocate mesh data according to calculated tangent bases.		
		std::vector<STangentData> vecTangents(MyTangent.GetBaseCount());
		std::vector<DWORD> vecTangentIndex(m_nIndexCnt);

		// Intermediate data
		std::vector<SVertex> vecTempVerts(m_nIndexCnt);
		std::vector<STangentData> vecTempTangents(m_nIndexCnt);
		std::vector<DWORD> vecTempIndex(m_nIndexCnt);

		// Final compact mesh data
		std::vector<SVertex> vecFinalVerts;
		std::vector<STangentData> vecFinalTangents;
		std::vector<DWORD> vecFinalIndex;

		vecFinalVerts.reserve(m_nIndexCnt);
		vecFinalTangents.reserve(m_nIndexCnt);
		vecFinalIndex.reserve(m_nIndexCnt);

		for (uint32 i = 0; i < nTri; ++i)
		{
			uint32 nIdx[3];
			MyTangent.GetTriangleBaseIndices(i, nIdx);

			vecTangentIndex[i * 3 + 0] = nIdx[0];
			vecTangentIndex[i * 3 + 1] = nIdx[1];
			vecTangentIndex[i * 3 + 2] = nIdx[2];
		}

		for (uint32 i = 0; i < MyTangent.GetBaseCount(); ++i)
		{
			VEC3 t, b, n;
			MyTangent.GetBase(i, &t.x, &b.x, &n.x);

			vecTangents[i].tangent.vec3 = t;
			vecTangents[i].binormal = b;

			// Adjust
			VEC3 txb = Common::CrossProduct_Vec3_By_Vec3(t, b);
			if (Common::DotProduct_Vec3_By_Vec3(txb, n) < 0)
			{
				vecTangents[i].tangent.w = -1.0f;

			}
			else
			{
				vecTangents[i].tangent.w = 1.0f;
			}
		}

		for (uint32 i = 0; i < m_nIndexCnt; ++i)
		{
			vecTempVerts[i].pos = pVerts[m_pIndexData[i]].pos;
			vecTempVerts[i].uv = pVerts[m_pIndexData[i]].uv;
			vecTempVerts[i].normal = pVerts[m_pIndexData[i]].normal;
			vecTempTangents[i].tangent = vecTangents[vecTangentIndex[i]].tangent;
			vecTempTangents[i].binormal = vecTangents[vecTangentIndex[i]].binormal;
			vecTempIndex[i] = i;
		}

		// Compact the mesh buffer
		for (uint32 i = 0; i < vecTempVerts.size(); ++i)
		{
			bool bFind = false;
			uint32 nFind = 0xffffffff;
			const SVertex& va = vecTempVerts[i];
			const STangentData& ta = vecTempTangents[i];

			for (uint32 j = 0; j < vecFinalVerts.size(); ++j)
			{
				const SVertex& vb = vecFinalVerts[j];
				const STangentData& tb = vecFinalTangents[j];

				if (va.pos.IsEquivalent(vb.pos, 0.00005f) &&
					va.uv.IsEquivalent(vb.uv, 0.00005f) && 
					ta.tangent.x == tb.tangent.x &&
					ta.tangent.y == tb.tangent.y &&
					ta.tangent.z == tb.tangent.z &&
					ta.tangent.w == tb.tangent.w &&
					ta.binormal.x == tb.binormal.x &&
					ta.binormal.y == tb.binormal.y &&
					ta.binormal.z == tb.binormal.z )
				{
					bFind = true;
					nFind = j;
					break;
				}
			}

			if (bFind)
			{
				vecFinalIndex.push_back(nFind);
			} 
			else
			{
				vecFinalVerts.push_back(va);
				vecFinalTangents.push_back(ta);
				vecFinalIndex.push_back(vecFinalVerts.size() - 1);
			}
		}

		InitVertData(eVertexType_NormalMap, &vecFinalVerts[0], vecFinalVerts.size(), true);
		InitIndexData(&vecFinalIndex[0], vecFinalIndex.size(), true);
		InitTangentData(&vecFinalTangents[0], vecFinalTangents.size());

		return true;
	}
#endif
	//------------------------------------------------------------------------------------
	bool SubMesh::InitBoneWeights(const SVertexBoneWeight* pVerts, int nVert)
	{
		m_vertData.InitBoneWeights(pVerts, nVert);

		SAFE_DELETE(m_pVertexStream2);

		m_pVertexStream2 = g_env.pRenderer->GetRenderSys()->CreateVertexBuffer(sizeof(SVertexBoneWeight) * nVert, sizeof(SVertexBoneWeight), m_vertData.GetBoneWeights(), 0);

		return true;
	}
	//------------------------------------------------------------------------------------
	void SubMesh::InitTerrainVertData(VertexBuffer* posVB, VertexBuffer* deltaVB, IndexBuffer* pIB, uint32 nIndexCount)
	{
		_AST(!m_pVertexStream0 && !m_pVertexStream1);

		m_pVertexStream0 = posVB;
		m_pVertexStream1 = deltaVB;
		m_pIndexBuf = pIB;
		m_nIndexCnt = nIndexCount;
		m_vertData.SetVertType(eVertexType_Terrain);

		m_pVertexStream0->m_vertType = eVertexType_Terrain;
	}
	//------------------------------------------------------------------------------------
	bool SubMesh::InitIndexData(const DWORD* pIdx, int nIdx, bool bStatic)
	{
		SAFE_DELETE(m_pIndexBuf);
		SAFE_DELETE_ARRAY(m_pIndexData);

		m_pIndexData = new DWORD[nIdx];
		CopyMemory(m_pIndexData, pIdx, sizeof(DWORD) * nIdx);

		m_pIndexBuf = g_env.pRenderer->GetRenderSys()->CreateIndexBuffer(sizeof(DWORD) * nIdx, pIdx, bStatic ? 0 : eBufferUsage_Dynamic);
		m_nIndexCnt = nIdx;

		return true;
	}
	//------------------------------------------------------------------------------------
	bool SubMesh::InitAdjIndexData(const DWORD* pIdx, int nIdx)
	{
		SAFE_DELETE(m_pAdjIndexBuf);
		SAFE_DELETE_ARRAY(m_pAdjIndexData);

		m_pAdjIndexData = new DWORD[nIdx];
		CopyMemory(m_pAdjIndexData, pIdx, sizeof(DWORD) * nIdx);

		m_pAdjIndexBuf = g_env.pRenderer->GetRenderSys()->CreateIndexBuffer(sizeof(DWORD) * nIdx, pIdx, 0);
		m_nAdjIndexCnt = nIdx;

		return true;
	}
	//------------------------------------------------------------------------------------
	void SubMesh::Render(ePrimitive prim)
	{
		RenderSystem* pRenderSys = g_env.pRenderer->GetRenderSys();

		pRenderSys->SetVertexBuffer(m_pVertexStream0, 0, 0);

		if (m_pVertexStream1)
		{
			pRenderSys->SetVertexBuffer(m_pVertexStream1, 1, 0);
		}

		if (m_pVertexStream2)
		{
			pRenderSys->SetVertexBuffer(m_pVertexStream2, 2, 0);
		}

		if (m_pIndexBuf)
		{
			if (prim == ePrimitive_LineList_Adj)
			{
				pRenderSys->DrawIndexed(ePrimitive_LineList_Adj, m_pAdjIndexBuf, m_nAdjIndexCnt, 0, 0);
			}
			else
			{
				pRenderSys->DrawIndexed(prim, m_pIndexBuf, m_nIndexCnt, 0, 0);
			}
		} 
		else
		{
			pRenderSys->Draw(m_vertData.GetVertCount(), 0);
		}
	}

	//------------------------------------------------------------------------------------
	static inline VEC3 GetAngleWeight(const VEC3& v1, const VEC3& v2, const VEC3& v3)
	{
		// Calculate this triangle's weight for each of its three vertices
		// start by calculating the lengths of its sides
		const float a = Common::Vec3_Distance(v2, v3);
		const float asqrt = sqrtf(a);
		const float b = Common::Vec3_Distance(v1, v3);
		const float bsqrt = sqrtf(b);
		const float c = Common::Vec3_Distance(v1, v2);
		const float csqrt = sqrtf(c);

		// use them to find the angle at each vertex
		return VEC3(
			acosf((b + c - a) / (2.f * bsqrt * csqrt)),
			acosf((-b + c + a) / (2.f * asqrt * csqrt)),
			acosf((b - c + a) / (2.f * bsqrt * asqrt)));
	}
}

//------------------------------------------------------------------------------------
void CTangentCalcProxy::Init(Neo::SVertex* pVerts, DWORD* pIndexData, DWORD nTri)
{
	m_pVerts = pVerts;
	m_pIndex = pIndexData;
	m_nTri = nTri;
}
//------------------------------------------------------------------------------------
unsigned int CTangentCalcProxy::GetTriangleCount() const
{
	return m_nTri;
}
//------------------------------------------------------------------------------------
void CTangentCalcProxy::GetTriangleIndices(const unsigned int indwTriNo, unsigned int outdwPos[3], unsigned int outdwNorm[3], unsigned int outdwUV[3]) const
{
	outdwPos[0] = outdwNorm[0] = outdwUV[0] = m_pIndex[indwTriNo * 3 + 0];
	outdwPos[1] = outdwNorm[1] = outdwUV[1] = m_pIndex[indwTriNo * 3 + 1];
	outdwPos[2] = outdwNorm[2] = outdwUV[2] = m_pIndex[indwTriNo * 3 + 2];
}
//------------------------------------------------------------------------------------
void CTangentCalcProxy::GetPos(const unsigned int indwPos, float outfPos[3]) const
{
	outfPos[0] = m_pVerts[indwPos].pos.x;
	outfPos[1] = m_pVerts[indwPos].pos.y;
	outfPos[2] = m_pVerts[indwPos].pos.z;
}
//------------------------------------------------------------------------------------
void CTangentCalcProxy::GetUV(const unsigned int indwPos, float outfUV[2]) const
{
	outfUV[0] = m_pVerts[indwPos].uv.x;
	outfUV[1] = m_pVerts[indwPos].uv.y;
}
