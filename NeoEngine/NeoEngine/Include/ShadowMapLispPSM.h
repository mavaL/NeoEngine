/********************************************************************
	created:	2016/05/05 15:41
	filename	ShadowMapLispPSM.h
	author:		maval

	purpose:	Shadow geometry calculation.
				From OGRE.
*********************************************************************/
#ifndef ShadowMapLispPSM_h__
#define ShadowMapLispPSM_h__

#include "Prerequiestity.h"
#include "MathDef.h"
#include "Polygon.h"
#include "AABB.h"

namespace Neo
{
	/** Internal class holding a point list representation of a convex body.
	*/
	class PointListBody
	{
		Polygon::VertexList mBodyPoints;
		AABB		mAAB;

	public:
		PointListBody();
		PointListBody(const ConvexBody& body);
		~PointListBody();

		/** Merges a second PointListBody into this one.
		*/
		void merge(const PointListBody& plb);

		/** Builds a point list body from a 'real' body.
		@remarks
		Inserts all vertices from a body into the point list with or without adding duplicate vertices.
		*/
		void build(const ConvexBody& body, bool filterDuplicates = true);

		/** Builds a PointListBody from a Body and includes all the space in a given direction.
		@remarks
		Intersects the bounding box with a ray from each available point of the body with the given
		direction. Base and intersection points are stored in a PointListBody structure.
		@note
		Duplicate vertices are not filtered.
		@note
		Body is not checked for correctness.
		*/
		void buildAndIncludeDirection(const ConvexBody& body,
			float extrudeDist, const VEC3& dir);

		/** Returns the bounding box representation.
		*/
		const AABB& getAAB(void) const;

		/** Adds a specific point to the body list.
		*/
		void addPoint(const VEC3& point);

		/** Adds all points of an AAB.
		*/
		void addAAB(const AABB& aab);

		/** Returns a point.
		*/
		const VEC3& getPoint(size_t cnt) const;

		/** Returns the point count.
		*/
		size_t getPointCount(void) const;

		/** Resets the body.
		*/
		void reset(void);

	};
}

#endif // ShadowMapLispPSM_h__
