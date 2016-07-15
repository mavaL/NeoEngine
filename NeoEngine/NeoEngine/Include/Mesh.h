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
#include "TangentSpaceCalculation.h"


class CTangentCalcProxy : public ITriangleInputProxy
{
public:
	CTangentCalcProxy() {}
	~CTangentCalcProxy() {}

	void		Init(Neo::SVertex* pVerts, DWORD* pIndexData, DWORD nTri);
	unsigned int GetTriangleCount() const;
	void		GetTriangleIndices(const unsigned int indwTriNo, unsigned int outdwPos[3], unsigned int outdwNorm[3], unsigned int outdwUV[3]) const;
	void		GetPos(const unsigned int indwPos, float outfPos[3]) const;
	void		GetUV(const unsigned int indwPos, float outfUV[2]) const;

private:
	Neo::SVertex*		m_pVerts;
	DWORD*				m_pIndex;
	DWORD				m_nTri;
};


namespace Neo
{

	//------------------------------------------------------------------------------------
	class SubMesh
	{
	public:
		SubMesh();
		~SubMesh();

	public:
		bool		InitVertData(eVertexType type, const SVertex* pVerts, int nVert, bool bStatic);
		bool		InitTangentData(const STangentData* pVerts, int nVert, bool bStatic);
		bool		InitIndexData(const DWORD* pIdx, int nIdx, bool bStatic);
		bool		BuildTangents();

		void			SetName(const STRING& name) { m_name = name; }
		const STRING&	GetName() const { return m_name; }

		const VertexData&	GetVertData() const { return m_vertData; }
		DWORD				GetIndexCount() const { return m_nIndexCnt; }
		DWORD*				GetIndexData() const { return m_pIndexData; }

		void		Render();		

	private:
		STRING			m_name;

		ID3D11Buffer*	m_pVertexBuf;
		ID3D11Buffer*	m_pVB_Tangent;
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
		Mesh(const char* szfilename = "NoName");
		~Mesh();

	public:
		const STRING&	GetFileName() const { return m_filename; }
		void		AddSubMesh(SubMesh* submesh);
		SubMesh*	GetSubMesh(uint32 i);
		uint32		GetSubMeshCount() const;
		void		SetMaterial(Material* pMaterial);
		Material*	GetMaterial()	{ return m_pMaterial; }

		void		Render();

	private:
		STRING		m_filename;
		SubMeshes	m_submeshes;
		Material*	m_pMaterial;
	};
}


#endif // Mesh_h__