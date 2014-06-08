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

		VEC3	pos;
		VEC3	normal;
		VEC2	uv;
		SColor	color;
	};
	//------------------------------------------------------------------------------------
	struct STreeLeafVertex
	{
		STreeLeafVertex()
			:normal(VEC3::ZERO)
			,uv(-1,-1), uv2(-1,-1,-1),uv3(-1,-1,-1),uv4(-1,-1,-1) {}

		VEC3	pos;
		VEC3	normal;
		VEC2	uv;
		VEC3	uv2, uv3, uv4;
	};
	//------------------------------------------------------------------------------------
	class VertexData
	{
	public:
		VertexData();
		~VertexData();

		typedef std::vector<VEC3>	PosData;

	public:
		void			Init_General(const SVertex* pVert, uint32 nVert);
		void			Init_Leaf(const STreeLeafVertex* pVert, uint32 nVert);
		void*			GetVertexData();
		uint32			GetVertexStride() const;
		const PosData&	GetPosData() const	{ return m_vecPos; }
		uint32			GetVertCount() const { return m_nVerts; }

	private:
		eVertexType		m_type;
		SVertex*		m_pGenerl;
		STreeLeafVertex*m_pLeaf;
		uint32			m_nVerts;
		PosData			m_vecPos;
	};
}

#endif // VertexData_h__

