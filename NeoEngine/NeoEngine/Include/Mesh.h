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
		bool		InitIndexData(const DWORD* pIdx, int nIdx, bool bStatic);
		bool		InitAdjIndexData(const DWORD* pIdx, int nIdx);
		bool		InitBoneWeights(const SVertexBoneWeight* pVerts, int nVert);
		bool		InitTangentData(const STangentData* pVerts, int nVert);
		void		InitTerrainVertData(VertexBuffer* posVB, VertexBuffer* deltaVB, IndexBuffer* pIB, uint32 nIndexCount);
		bool		BuildTangents();

		void			SetName(const STRING& name) { m_name = name; }
		const STRING&	GetName() const { return m_name; }

		const VertexData&	GetVertData() const { return m_vertData; }
		DWORD				GetIndexCount() const { return m_nIndexCnt; }
		DWORD				GetAdjIndexCount() const { return m_nAdjIndexCnt; }
		DWORD*				GetIndexData() const { return m_pIndexData; }
		DWORD*				GetAdjIndexData() const { return m_pAdjIndexData; }

		void		Render(ePrimitive prim);
		void		RenderInstanced(ePrimitive prim, const SInstanedBatch& ib);

	private:
		STRING			m_name;

		VertexBuffer*	m_pVertexStream0;
		VertexBuffer*	m_pVertexStream1;
		VertexBuffer*	m_pVertexStream2;

		VertexData		m_vertData;

		IndexBuffer*	m_pIndexBuf;
		DWORD*			m_pIndexData;
		DWORD			m_nIndexCnt;

		IndexBuffer*	m_pAdjIndexBuf;
		DWORD*			m_pAdjIndexData;
		DWORD			m_nAdjIndexCnt;
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
		void			AddSubMesh(SubMesh* submesh);
		SubMesh*		GetSubMesh(uint32 i);
		uint32			GetSubMeshCount() const;
		void			SetPrimitiveType(ePrimitive type)	{ m_primType = type; }
		ePrimitive		GetPrimitiveType() const	{ return m_primType; }
		bool			BuildTangents();
		void			ConvertToTriAdjIndices();
		void			ConvertToLineAdjIndices();

		void			Render(Material* pMaterial = nullptr);
		void			RenderInstanced(Material* pMaterial, const SInstanedBatch& ib);

	private:
		STRING			m_filename;
		SubMeshes		m_submeshes;
		ePrimitive		m_primType;
	};
}


#endif // Mesh_h__