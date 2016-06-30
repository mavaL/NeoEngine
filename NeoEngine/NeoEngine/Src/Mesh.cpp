#include "stdafx.h"
#include "Mesh.h"
#include "D3D11RenderSystem.h"
#include "Material.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	Mesh::Mesh()
		:m_pMaterial(nullptr)
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
	void Mesh::AddSubMesh( SubMesh* submesh )
	{
		m_submeshes.push_back(submesh);
	}
	//------------------------------------------------------------------------------------
	void Mesh::Render()
	{
		for (size_t i=0; i<m_submeshes.size(); ++i)
		{
			if (m_pMaterial)
			{
				m_pMaterial->Activate(i);
			}
			m_submeshes[i]->Render();
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
	void Mesh::SetMaterial(Material* pMaterial)
	{
		SAFE_RELEASE(m_pMaterial);
		m_pMaterial = pMaterial;
		pMaterial->AddRef();
	}
	//------------------------------------------------------------------------------------
	SubMesh::SubMesh()
		:m_pVertexBuf(nullptr)
		,m_pIndexBuf(nullptr)
		,m_nIndexCnt(0)
		,m_pIndexData(nullptr)
	{

	}
	//------------------------------------------------------------------------------------
	SubMesh::~SubMesh()
	{
		SAFE_RELEASE(m_pVertexBuf);
		SAFE_RELEASE(m_pIndexBuf);
		SAFE_DELETE(m_pIndexData);
	}
	//------------------------------------------------------------------------------------
	bool SubMesh::InitVertData( eVertexType type, const void* pVerts, int nVert, bool bStatic )
	{
		assert(pVerts);

		SAFE_RELEASE(m_pVertexBuf);

		m_vertData.Init(pVerts, nVert, type);

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
	void SubMesh::Render()
	{
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
	//------------------------------------------------------------------------------------
	void Mesh::BuildTangentVectors(SVertex_NormalMap* pVerts, const DWORD* pIndex, DWORD nIndex)
	{
		/////Ogre,鬼火都是这个算法:根据顶点所在的面来计算切空间,然后加权起来

		//Each vertex gets the sum of the tangents and binormals from the faces around it
		for (size_t i = 0; i < nIndex/3; ++i)
		{
			pVerts[i].tangent = VEC4::ZERO;
			pVerts[i].binormal = VEC3::ZERO;
		}

		for (size_t i = 0; i < nIndex; i += 3)
		{
			//fetch vertexs
			const DWORD idx1 = pIndex[i + 0];
			const DWORD idx2 = pIndex[i + 1];
			const DWORD idx3 = pIndex[i + 2];

			const VEC2& tc1 = pVerts[idx1].uv;
			const VEC2& tc2 = pVerts[idx2].uv;
			const VEC2& tc3 = pVerts[idx3].uv;

			const VEC3& vt1 = pVerts[idx1].pos;
			const VEC3& vt2 = pVerts[idx2].pos;
			const VEC3& vt3 = pVerts[idx3].pos;

			// if this triangle is degenerate, skip it!
			if (vt1 == vt2 ||
				vt2 == vt3 ||
				vt3 == vt1)
				continue;

			//Angle-weighted normals look better, but are slightly more CPU intensive to calculate
			VEC3 weight = GetAngleWeight(vt1, vt2, vt3);	// writing irr::scene:: necessary for borland

			VEC3 localNormal;
			VEC3 localTangent;
			VEC3 localBinormal;

			CalcTangentSpace(localNormal, localTangent, localBinormal,
				vt1, vt2, vt3,
				tc1, tc2, tc3);

			localTangent *= weight.x;
			localBinormal *= weight.x;
			pVerts[idx1].tangent.vec3 += localTangent;
			pVerts[idx1].binormal += localBinormal;

			CalcTangentSpace(localNormal, localTangent, localBinormal,
				vt2, vt3, vt1,
				tc2, tc3, tc1);

			localTangent *= weight.y;
			localBinormal *= weight.y;
			pVerts[idx2].tangent.vec3 += localTangent;
			pVerts[idx2].binormal += localBinormal;

			CalcTangentSpace(localNormal, localTangent, localBinormal,
				vt3, vt1, vt2,
				tc3, tc1, tc2);

			localTangent *= weight.z;
			localBinormal *= weight.z;
			pVerts[idx3].tangent.vec3 += localTangent;
			pVerts[idx3].binormal += localBinormal;
		}

		for (size_t i = 0; i < nIndex/3; ++i)
		{
			pVerts[i].tangent.vec3.Normalize();
			pVerts[i].binormal.Normalize();
		}
	}
	//------------------------------------------------------------------------------------
	void Mesh::CalcTangentSpace(VEC3& oNormal, VEC3& oTangent, VEC3& oBinormal, const VEC3& vt1, const VEC3& vt2, const VEC3& vt3, const VEC2& tc1, const VEC2& tc2, const VEC2& tc3)
	{
		VEC3 v1 = Common::Sub_Vec3_By_Vec3(vt1, vt2);
		VEC3 v2 = Common::Sub_Vec3_By_Vec3(vt3, vt1);

		oNormal = Common::CrossProduct_Vec3_By_Vec3(v2, v1);
		oNormal.Normalize();

		VEC3 tmp1, tmp2;
		// binormal
		float deltaX1 = tc1.x - tc2.x;
		float deltaX2 = tc3.x - tc1.x;
		Common::Multiply_Vec3_By_K(tmp1, v1, deltaX2);
		Common::Multiply_Vec3_By_K(tmp2, v2, deltaX1);
		oBinormal = Common::Sub_Vec3_By_Vec3(tmp1, tmp2);
		oBinormal.Normalize();

		// tangent
		float deltaY1 = tc1.y - tc2.y;
		float deltaY2 = tc3.y - tc1.y;
		Common::Multiply_Vec3_By_K(tmp1, v1, deltaY2);
		Common::Multiply_Vec3_By_K(tmp2, v2, deltaY1);
		oTangent = Common::Sub_Vec3_By_Vec3(tmp1, tmp2);
		oTangent.Normalize();

		// adjust
		VEC3 txb = Common::CrossProduct_Vec3_By_Vec3(oTangent, oBinormal);
		txb.Normalize();

		if (Common::DotProduct_Vec3_By_Vec3(txb, oNormal) < 0.0f)
		{
			oTangent *= -1.0f;
		}
	}
}

