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
	struct SVertex_NormalMap
	{
		SVertex_NormalMap() {}
		SVertex_NormalMap(const VEC3& p, const VEC2& t)
			: pos(p)
			, uv(t) {}

		VEC3	pos;
		VEC4	tangent;
		VEC3	binormal;
		VEC2	uv;
	};
	//------------------------------------------------------------------------------------
	class VertexData
	{
	public:
		VertexData();
		~VertexData();

		typedef std::vector<VEC3>	PosData;

	public:
		void			Init(const void* pVert, uint32 nVert, eVertexType type);
		uint32			GetVertexStride() const;
		const PosData&	GetPosData() const	{ return m_vecPos; }
		uint32			GetVertCount() const { return m_nVerts; }

	private:
		eVertexType		m_type;
		uint32			m_nVerts;
		PosData			m_vecPos;
	};
}

#endif // VertexData_h__

