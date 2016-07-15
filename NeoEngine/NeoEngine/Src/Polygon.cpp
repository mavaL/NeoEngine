
#include "stdafx.h"
#include "Polygon.h"

namespace Neo
{
	//-----------------------------------------------------------------------
	Polygon::Polygon()
		: mNormal(VEC3::ZERO)
		, mIsNormalSet(false)
	{
		// reserve space for 6 vertices to reduce allocation cost
		mVertexList.reserve(6);
	}
	//-----------------------------------------------------------------------
	Polygon::~Polygon()
	{
	}
	//-----------------------------------------------------------------------
	Polygon::Polygon(const Polygon& cpy)
	{
		mVertexList = cpy.mVertexList;
		mNormal = cpy.mNormal;
		mIsNormalSet = cpy.mIsNormalSet;
	}
	//-----------------------------------------------------------------------
	void Polygon::insertVertex(const VEC3& vdata, size_t vertex)
	{
		// TODO: optional: check planarity
		assert(vertex <= getVertexCount() && "Insert position out of range");

		VertexList::iterator it = mVertexList.begin();

		std::advance(it, vertex);
		mVertexList.insert(it, vdata);

	}
	//-----------------------------------------------------------------------
	void Polygon::insertVertex(const VEC3& vdata)
	{
		mVertexList.push_back(vdata);
	}
	//-----------------------------------------------------------------------
	const VEC3& Polygon::getVertex(size_t vertex) const
	{
		assert(vertex < getVertexCount() && "Search position out of range");

		return mVertexList[vertex];
	}
	//-----------------------------------------------------------------------
	void Polygon::setVertex(const VEC3& vdata, size_t vertex)
	{
		// TODO: optional: check planarity
		assert(vertex < getVertexCount() && "Search position out of range");

		// set new vertex
		mVertexList[vertex] = vdata;
	}
	//-----------------------------------------------------------------------
	void Polygon::removeDuplicates(void)
	{
		for (size_t i = 0; i < getVertexCount(); ++i)
		{
			const VEC3& a = getVertex(i);
			const VEC3& b = getVertex((i + 1) % getVertexCount());

			if (a.IsEquivalent(b))
			{
				deleteVertex(i);
				--i;
			}
		}
	}
	//-----------------------------------------------------------------------
	size_t Polygon::getVertexCount(void) const
	{
		return mVertexList.size();
	}
	//-----------------------------------------------------------------------
	const VEC3& Polygon::getNormal(void) const
	{
		assert(getVertexCount() >= 3 && "Insufficient vertex count!");

		updateNormal();

		return mNormal;
	}
	//-----------------------------------------------------------------------
	void Polygon::updateNormal(void) const
	{
		assert(getVertexCount() >= 3 && "Insufficient vertex count!");

		if (mIsNormalSet)
			return;

		// vertex order is ccw
		const VEC3& a = getVertex(0);
		const VEC3& b = getVertex(1);
		const VEC3& c = getVertex(2);

		// used method: Newell
		mNormal.x = 0.5f * ((a.y - b.y) * (a.z + b.z) +
			(b.y - c.y) * (b.z + c.z) +
			(c.y - a.y) * (c.z + a.z));

		mNormal.y = 0.5f * ((a.z - b.z) * (a.x + b.x) +
			(b.z - c.z) * (b.x + c.x) +
			(c.z - a.z) * (c.x + a.x));

		mNormal.z = 0.5f * ((a.x - b.x) * (a.y + b.y) +
			(b.x - c.x) * (b.y + c.y) +
			(c.x - a.x) * (c.y + a.y));

		mNormal.Normalize();

		mIsNormalSet = true;

	}
	//-----------------------------------------------------------------------
	void Polygon::deleteVertex(size_t vertex)
	{
		assert(vertex < getVertexCount() && "Search position out of range");

		VertexList::iterator it = mVertexList.begin();
		std::advance(it, vertex);

		mVertexList.erase(it);
	}
	//-----------------------------------------------------------------------
	void Polygon::storeEdges(Polygon::EdgeMap *edgeMap) const
	{
		assert(edgeMap != NULL && "EdgeMap ptr is NULL");

		size_t vertexCount = getVertexCount();

		for (size_t i = 0; i < vertexCount; ++i)
		{
			edgeMap->insert(Edge(getVertex(i), getVertex((i + 1) % vertexCount)));
		}
	}
	//-----------------------------------------------------------------------
	void Polygon::reset(void)
	{
		// could use swap() to free memory here, but assume most may be reused so avoid realloc
		mVertexList.clear();

		mIsNormalSet = false;
	}
	//-----------------------------------------------------------------------
	bool Polygon::operator == (const Polygon& rhs) const
	{
		if (getVertexCount() != rhs.getVertexCount())
			return false;

		// Compare vertices. They may differ in its starting position.
		// find start
		size_t start = 0;
		bool foundStart = false;
		for (size_t i = 0; i < getVertexCount(); ++i)
		{
			if (getVertex(0).IsEquivalent(rhs.getVertex(i)))
			{
				start = i;
				foundStart = true;
				break;
			}
		}

		if (!foundStart)
			return false;

		for (size_t i = 0; i < getVertexCount(); ++i)
		{
			const VEC3& vA = getVertex(i);
			const VEC3& vB = rhs.getVertex((i + start) % getVertexCount());

			if (!vA.IsEquivalent(vB))
				return false;
		}

		return true;
	}
	//-----------------------------------------------------------------------
	bool Polygon::isPointInside(const VEC3& point) const
	{
		// sum the angles 
		float anglesum = 0;
		size_t n = getVertexCount();
		for (size_t i = 0; i < n; i++)
		{
			const VEC3& p1 = getVertex(i);
			const VEC3& p2 = getVertex((i + 1) % n);

			VEC3 v1 = Common::Sub_Vec3_By_Vec3(p1, point);
			VEC3 v2 = Common::Sub_Vec3_By_Vec3(p2, point);

			float len1 = v1.GetLength();
			float len2 = v2.GetLength();

			if (Common::Equal(len1 * len2, 0.0f))
			{
				// We are on a vertex so consider this inside
				return true;
			}
			else
			{
				float costheta = Common::DotProduct_Vec3_By_Vec3(v1, v2) / (len1 * len2);
				anglesum += acos(costheta);
			}
		}

		// result should be 2*PI if point is inside poly
		return Common::Equal(anglesum, TWO_PI);

	}

}
