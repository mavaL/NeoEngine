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

		void		SetMaterial(Material* pMaterial);
		Material*	GetMaterial()	{ return m_pMaterial; }

	private:
		STRING			m_name;
		Material*		m_pMaterial;

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
		Mesh() {}
		~Mesh();

	public:
		void		AddSubMesh(SubMesh* submesh);
		SubMesh*	GetSubMesh(uint32 i);
		uint32		GetSubMeshCount() const;

		void		Render();

	private:
		SubMeshes	m_submeshes;
	};
}


#endif // Mesh_h__