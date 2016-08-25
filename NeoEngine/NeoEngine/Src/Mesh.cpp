#include "stdafx.h"
#include "Mesh.h"
#include "D3D11RenderSystem.h"
#include "Material.h"
#include "TangentSpaceCalculation.h"
#include "SceneManager.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	Mesh::Mesh(const char* szfilename)
		: m_pMaterial(nullptr)
		, m_filename(szfilename)
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
			m_submeshes[i]->Render();
		}
	}
	//------------------------------------------------------------------------------------
	SubMesh* Mesh::GetSubMesh(size_t i)
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
	void Mesh::SetMaterial(Material* pMaterial)
	{
		SAFE_RELEASE(m_pMaterial);
		m_pMaterial = pMaterial;
		pMaterial->AddRef();
	}
	//------------------------------------------------------------------------------------
	bool Mesh::BuildTangents()
	{
		for (size_t i = 0; i < m_submeshes.size(); ++i)
		{
			if (!m_submeshes[i]->BuildTangents())
				return false;
		}
		return true;
	}

	//------------------------------------------------------------------------------------
	SubMesh::SubMesh()
		: m_pVertexBuf(nullptr)
		, m_pIndexBuf(nullptr)
		, m_nIndexCnt(0)
		, m_pIndexData(nullptr)
		, m_pVB_Tangent(nullptr)
		, m_pVB_BoneWeights(nullptr)
	{

	}
	//------------------------------------------------------------------------------------
	SubMesh::~SubMesh()
	{
		SAFE_RELEASE(m_pVertexBuf);
		SAFE_RELEASE(m_pVB_Tangent);
		SAFE_RELEASE(m_pVB_BoneWeights);
		SAFE_RELEASE(m_pIndexBuf);
		SAFE_DELETE(m_pIndexData);
	}
	//------------------------------------------------------------------------------------
	bool SubMesh::InitVertData(eVertexType type, const SVertex* pVerts, int nVert, bool bStatic)
	{
		assert(pVerts);

		SAFE_RELEASE(m_pVertexBuf);

		m_vertData.InitVertex(type, pVerts, nVert);

		D3D11_BUFFER_DESC bd;
		ZeroMemory(&bd, sizeof(bd));
		bd.ByteWidth = sizeof(SVertex) * nVert;
		bd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.Usage = D3D11_USAGE_IMMUTABLE;

		D3D11_SUBRESOURCE_DATA InitData;
		ZeroMemory(&InitData, sizeof(InitData));
		InitData.pSysMem = pVerts;

		if (!bStatic)
		{
			bd.Usage = D3D11_USAGE_DYNAMIC;
			bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
		}

		HRESULT hr = S_OK;
		V_RETURN(g_env.pRenderSystem->GetDevice()->CreateBuffer(&bd, &InitData, &m_pVertexBuf));

		return true;
	}
	//------------------------------------------------------------------------------------
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
	//------------------------------------------------------------------------------------
	bool SubMesh::InitTangentData(const STangentData* pVerts, int nVert)
	{
		m_vertData.InitTangents(pVerts, nVert);

		SAFE_RELEASE(m_pVB_Tangent);

		D3D11_BUFFER_DESC bd;
		ZeroMemory(&bd, sizeof(bd));
		bd.ByteWidth = sizeof(STangentData) * m_vertData.GetVertCount();
		bd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.Usage = D3D11_USAGE_IMMUTABLE;

		D3D11_SUBRESOURCE_DATA InitData;
		ZeroMemory(&InitData, sizeof(InitData));
		InitData.pSysMem = m_vertData.GetTangent();

		HRESULT hr = S_OK;
		V_RETURN(g_env.pRenderSystem->GetDevice()->CreateBuffer(&bd, &InitData, &m_pVB_Tangent));

		return true;
	}
	//------------------------------------------------------------------------------------
	bool SubMesh::InitBoneWeights(const SVertexBoneWeight* pVerts, int nVert)
	{
		m_vertData.InitBoneWeights(pVerts, nVert);

		SAFE_RELEASE(m_pVB_BoneWeights);

		D3D11_BUFFER_DESC bd;
		ZeroMemory(&bd, sizeof(bd));
		bd.ByteWidth = sizeof(SVertexBoneWeight) * nVert;
		bd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.Usage = D3D11_USAGE_IMMUTABLE;

		D3D11_SUBRESOURCE_DATA InitData;
		ZeroMemory(&InitData, sizeof(InitData));
		InitData.pSysMem = m_vertData.GetBoneWeights();

		HRESULT hr = S_OK;
		V_RETURN(g_env.pRenderSystem->GetDevice()->CreateBuffer(&bd, &InitData, &m_pVB_BoneWeights));

		return true;
	}
	//------------------------------------------------------------------------------------
	bool SubMesh::InitIndexData(const DWORD* pIdx, int nIdx, bool bStatic)
	{
		SAFE_RELEASE(m_pIndexBuf);
		SAFE_DELETE_ARRAY(m_pIndexData);

		m_pIndexData = new DWORD[nIdx];
		CopyMemory(m_pIndexData, pIdx, sizeof(DWORD) * nIdx);

		// Create index buffer
		D3D11_BUFFER_DESC bd;
		ZeroMemory(&bd, sizeof(bd));
		bd.ByteWidth = sizeof(DWORD) * nIdx;
		bd.BindFlags = D3D11_BIND_INDEX_BUFFER;
		bd.CPUAccessFlags = 0;
		bd.Usage = D3D11_USAGE_IMMUTABLE;

		D3D11_SUBRESOURCE_DATA InitData;
		ZeroMemory(&InitData, sizeof(InitData));
		InitData.pSysMem = pIdx;

		if (!bStatic)
		{
			bd.Usage = D3D11_USAGE_DYNAMIC;
			bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
		}

		HRESULT hr = S_OK;
		V_RETURN(g_env.pRenderSystem->GetDevice()->CreateBuffer(&bd, &InitData, &m_pIndexBuf));

		m_nIndexCnt = nIdx;

		return true;
	}
	//------------------------------------------------------------------------------------
	void SubMesh::Render()
	{
		ID3D11DeviceContext* pDeviceContext = g_env.pRenderSystem->GetDeviceContext();

		UINT stride = sizeof(SVertex);
		UINT offset = 0;

		pDeviceContext->IASetVertexBuffers(0, 1, &m_pVertexBuf, &stride, &offset);

		if (m_pVB_Tangent)
		{
			stride = sizeof(STangentData);
			pDeviceContext->IASetVertexBuffers(1, 1, &m_pVB_Tangent, &stride, &offset);
		}

		if (m_pVB_BoneWeights)
		{
			stride = sizeof(SVertexBoneWeight);
			pDeviceContext->IASetVertexBuffers(2, 1, &m_pVB_BoneWeights, &stride, &offset);
		}

		if (m_pIndexBuf)
		{
			pDeviceContext->IASetIndexBuffer(m_pIndexBuf, DXGI_FORMAT_R32_UINT, 0);
			pDeviceContext->DrawIndexed(m_nIndexCnt, 0, 0);
		}
		else
		{
			pDeviceContext->Draw(m_vertData.GetVertCount(), 0);
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
