/********************************************************************
	created:	6:6:2014   13:48
	filename	Mesh.h
	author:		maval

	purpose:	Mesh class
*********************************************************************/
#ifndef Mesh_h__
#define Mesh_h__

#include "Prerequiestity.h"
#include "VertexData.h"

namespace Neo
{

	//------------------------------------------------------------------------------------
	class SubMesh
	{
	public:
		SubMesh();
		~SubMesh();

	public:
		bool		InitVertData(eVertexType type, const void* pVerts, int nVert, bool bStatic);
		bool		InitIndexData(const DWORD* pIdx, int nIdx, bool bStatic);

		void			SetName(const STRING& name) { m_name = name; }
		const STRING&	GetName() const { return m_name; }

		const VertexData&	GetVertData() const { return m_vertData; }

		void		Render();		

	private:
		STRING			m_name;

		ID3D11Buffer*	m_pVertexBuf;
		VertexData		m_vertData;

		ID3D11Buffer*	m_pIndexBuf;
		DWORD*			m_pIndexData;
		DWORD			m_nIndexCnt;
	};

	typedef std::vector<SubMesh*>	SubMeshes;
	//------------------------------------------------------------------------------------
	class Mesh
	{
	public:
		Mesh();
		~Mesh();

	public:
		void		AddSubMesh(SubMesh* submesh);
		SubMesh*	GetSubMesh(uint32 i);
		uint32		GetSubMeshCount() const;
		void		SetMaterial(Material* pMaterial);
		Material*	GetMaterial()	{ return m_pMaterial; }

		void		Render();

		static void	BuildTangentVectors(SVertex_NormalMap* pVerts, const DWORD* pIndex, DWORD nIndex);
		static void	CalcTangentSpace(VEC3& oNormal, VEC3& oTangent, VEC3& oBinormal,
			const VEC3& vt1, const VEC3& vt2, const VEC3& vt3,
			const VEC2& tc1, const VEC2& tc2, const VEC2& tc3);

	private:
		SubMeshes	m_submeshes;
		Material*	m_pMaterial;
	};
}


#endif // Mesh_h__