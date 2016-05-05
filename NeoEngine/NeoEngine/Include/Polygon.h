/********************************************************************
	created:	2016/05/03 11:38
	filename	Polygon.h
	author:		maval

	purpose:	From OGRE.
*********************************************************************/

#ifndef __Polygon_H__
#define __Polygon_H__

#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	/** \addtogroup Core
	*  @{
	*/
	/** \addtogroup Math
	*  @{
	*/
	/** The class represents a polygon in 3D space.
	@remarks
	It is made up of 3 or more vertices in a single plane, listed in
	counter-clockwise order.
	*/
	class Polygon
	{

	public:
		typedef std::vector<VEC3>				VertexList;
		typedef std::multimap<VEC3, VEC3>		EdgeMap;
		typedef std::pair< VEC3, VEC3>			Edge;

	protected:
		VertexList		mVertexList;
		mutable VEC3	mNormal;
		mutable bool	mIsNormalSet;
		/** Updates the normal.
		*/
		void updateNormal(void) const;


	public:
		Polygon();
		~Polygon();
		Polygon(const Polygon& cpy);

		/** Inserts a vertex at a specific position.
		@note Vertices must be coplanar.
		*/
		void insertVertex(const VEC3& vdata, size_t vertexIndex);
		/** Inserts a vertex at the end of the polygon.
		@note Vertices must be coplanar.
		*/
		void insertVertex(const VEC3& vdata);

		/** Returns a vertex.
		*/
		const VEC3& getVertex(size_t vertex) const;

		/** Sets a specific vertex of a polygon.
		@note Vertices must be coplanar.
		*/
		void setVertex(const VEC3& vdata, size_t vertexIndex);

		/** Removes duplicate vertices from a polygon.
		*/
		void removeDuplicates(void);

		/** Vertex count.
		*/
		size_t getVertexCount(void) const;

		/** Returns the polygon normal.
		*/
		const VEC3& getNormal(void) const;

		/** Deletes a specific vertex.
		*/
		void deleteVertex(size_t vertex);

		/** Determines if a point is inside the polygon.
		@remarks
		A point is inside a polygon if it is both on the polygon's plane,
		and within the polygon's bounds. Polygons are assumed to be convex
		and planar.
		*/
		bool isPointInside(const VEC3& point) const;

		/** Stores the edges of the polygon in ccw order.
			The vertices are copied so the user has to take the
			deletion into account.
			*/
		void storeEdges(EdgeMap *edgeMap) const;

		/** Resets the object.
		*/
		void reset(void);

		/** Determines if the current object is equal to the compared one.
		*/
		bool operator == (const Polygon& rhs) const;

		/** Determines if the current object is not equal to the compared one.
		*/
		bool operator != (const Polygon& rhs) const
		{
			return !(*this == rhs);
		}
	};
	/** @} */
	/** @} */
}

#endif
