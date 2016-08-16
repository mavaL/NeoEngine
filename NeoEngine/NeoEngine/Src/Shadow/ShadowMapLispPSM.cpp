#include "stdafx.h"
#include "ShadowMapLispPSM.h"
#include "ConvexBody.h"

namespace Neo
{
	//-----------------------------------------------------------------------
	PointListBody::PointListBody()
	{
		// Preallocate some space
		mBodyPoints.reserve(12);
	}
	//-----------------------------------------------------------------------
	PointListBody::PointListBody(const ConvexBody& body)
	{
		build(body);
	}
	//-----------------------------------------------------------------------
	PointListBody::~PointListBody()
	{
	}
	//-----------------------------------------------------------------------
	void PointListBody::merge(const PointListBody& plb)
	{
		size_t size = plb.getPointCount();
		for (size_t i = 0; i < size; ++i)
		{
			this->addPoint(plb.getPoint(i));
		}
	}
	//-----------------------------------------------------------------------
	void PointListBody::build(const ConvexBody& body, bool filterDuplicates)
	{
		// erase list
		mBodyPoints.clear();

		// Try to reserve a representative amount of memory
		mBodyPoints.reserve(body.getPolygonCount() * 6);

		// build new list
		for (size_t i = 0; i < body.getPolygonCount(); ++i)
		{
			for (size_t j = 0; j < body.getVertexCount(i); ++j)
			{
				const VEC3 &vInsert = body.getVertex(i, j);

				// duplicates allowed?
				if (filterDuplicates)
				{
					bool bPresent = false;

					for (Polygon::VertexList::iterator vit = mBodyPoints.begin();
						vit != mBodyPoints.end(); ++vit)
					{
						const VEC3& v = *vit;

						if (vInsert.IsEquivalent(v))
						{
							bPresent = true;
							break;
						}
					}

					if (bPresent == false)
					{
						mBodyPoints.push_back(body.getVertex(i, j));
					}
				}

				// else insert directly
				else
				{
					mBodyPoints.push_back(body.getVertex(i, j));
				}
			}
		}

		// update AAB
		// no points altered, so take body AAB
		mAAB = body.getAABB();
	}
	//-----------------------------------------------------------------------
	void PointListBody::buildAndIncludeDirection(
		const ConvexBody& body, float extrudeDist, const VEC3& dir)
	{
		// reset point list
		this->reset();

		// intersect the rays formed by the points in the list with the given direction and
		// insert them into the list

		const size_t polyCount = body.getPolygonCount();
		for (size_t iPoly = 0; iPoly < polyCount; ++iPoly)
		{

			// store the old inserted point and plane info
			// if the currently processed point hits a different plane than the previous point an 
			// intersection point is calculated that lies on the two planes' intersection edge

			// fetch current polygon
			const Polygon& p = body.getPolygon(iPoly);

			size_t pointCount = p.getVertexCount();
			for (size_t iPoint = 0; iPoint < pointCount; ++iPoint)
			{
				// base point
				const VEC3& pt = p.getVertex(iPoint);

				// add the base point
				this->addPoint(pt);

				// intersection ray
				RAY ray(pt, dir);

				const VEC3 ptIntersect = ray.GetPoint(extrudeDist);
				this->addPoint(ptIntersect);

			} // for: polygon point iteration

		} // for: polygon iteration
	}
	//-----------------------------------------------------------------------
	const AABB& PointListBody::getAAB(void) const
	{
		return mAAB;
	}
	//-----------------------------------------------------------------------	
	void PointListBody::addPoint(const VEC3& point)
	{
		// dont check for doubles, simply add
		mBodyPoints.push_back(point);

		// update AAB
		mAAB.Merge(point);
	}
	//-----------------------------------------------------------------------
	void PointListBody::addAAB(const AABB& aab)
	{
		const VEC3& min = aab.m_minCorner;
		const VEC3& max = aab.m_maxCorner;

		VEC3 currentVertex = min;
		// min min min
		addPoint(currentVertex);

		// min min max
		currentVertex.z = max.z;
		addPoint(currentVertex);

		// min max max
		currentVertex.y = max.y;
		addPoint(currentVertex);

		// min max min
		currentVertex.z = min.z;
		addPoint(currentVertex);

		// max max min
		currentVertex.x = max.x;
		addPoint(currentVertex);

		// max max max
		currentVertex.z = max.z;
		addPoint(currentVertex);

		// max min max
		currentVertex.y = min.y;
		addPoint(currentVertex);

		// max min min
		currentVertex.z = min.z;
		addPoint(currentVertex);

	}
	//-----------------------------------------------------------------------	
	const VEC3& PointListBody::getPoint(size_t cnt) const
	{
		assert(cnt < getPointCount() && "Search position out of range");

		return mBodyPoints[cnt];
	}
	//-----------------------------------------------------------------------	
	size_t PointListBody::getPointCount(void) const
	{
		return mBodyPoints.size();
	}
	//-----------------------------------------------------------------------	
	void PointListBody::reset(void)
	{
		mBodyPoints.clear();
		mAAB.SetNull();
	}
}