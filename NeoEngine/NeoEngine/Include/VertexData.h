/********************************************************************
	created:	8:6:2014   11:00
	filename	VertexData.h
	author:		maval

	purpose:	Class to support different vertex format.
*********************************************************************/
#ifndef VertexData_h__
#define VertexData_h__


#include "Prerequiestity.h"
#include "MathDef.h"
#include "Color.h"


namespace Neo
{
	/////////	Stream 0
	struct SVertex 
	{
		SVertex()
			:normal(VEC3::ZERO)
			,color(SColor::WHITE)
			,uv(-1,-1) {}

		SVertex(const VEC3& p, const VEC2& t)
			:pos(p)
			,uv(t)
			,normal(VEC3::ZERO)
			,color(SColor::WHITE) {}

		SVertex(const VEC3& p, const VEC2& t, const VEC3& n)
			:pos(p)
			,uv(t)
			,normal(n)
			,color(SColor::WHITE) {}

		SVertex(const VEC3& p, const SColor& c)
			:pos(p)
			,color(c) {}

		VEC3	pos;
		VEC2	uv;
		VEC3	normal;
		SColor	color;
	};
	/////////	Stream 1
	struct STangentData
	{
		STangentData() {}

		VEC4	tangent;
		VEC3	binormal;
	};
	/////////	Stream 2
#define		INVALID_BONE_INDEX	0xff

	struct SVertexBoneWeight 
	{
		SVertexBoneWeight()
		{
			boneIndices[0] = boneIndices[1] = boneIndices[2] = boneIndices[3] = INVALID_BONE_INDEX;
			boneWeight[0] = boneWeight[1] = boneWeight[2] = boneWeight[3] = 0;
		}

		uint8	boneIndices[4];
		float	boneWeight[4];
	};
	//------------------------------------------------------------------------------------
	class VertexData
	{
	public:
		VertexData();
		~VertexData();

	public:
		void			InitVertex(eVertexType type, const SVertex* pVert, uint32 nVert);
		void			InitTangents(const STangentData* pTangent, uint32 nVert);
		void			InitBoneWeights(const SVertexBoneWeight* pBoneWeights, uint32 nVert);
		uint32			GetVertCount() const { return m_nVerts; }
		SVertex*		GetVertex() const { return m_pVertData; }
		STangentData*	GetTangent() const { return m_pTangentData; }
		SVertexBoneWeight*	GetBoneWeights() const { return m_pBoneWeights; }
		eVertexType		GetVertType() const { return m_vertType; }

	private:
		eVertexType			m_vertType;
		SVertex*			m_pVertData;
		STangentData*		m_pTangentData;
		SVertexBoneWeight*	m_pBoneWeights;
		uint32				m_nVerts;
	};
}

#endif // VertexData_h__

