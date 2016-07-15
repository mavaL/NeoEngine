#include "stdafx.h"
#include "ConvexBody.h"
#include "MathDef.h"
#include "Camera.h"

namespace Neo
{

	ConvexBody::PolygonList ConvexBody::msFreePolygons;

	//-----------------------------------------------------------------------
	void ConvexBody::_initialisePool()
	{
		if (msFreePolygons.empty())
		{
			const size_t initialSize = 30;

			// Initialise polygon pool with 30 polys
			msFreePolygons.resize(initialSize);
			for (size_t i = 0; i < initialSize; ++i)
			{
				msFreePolygons[i] = new Polygon;
			}
		}
	}
	//-----------------------------------------------------------------------
	void ConvexBody::_destroyPool()
	{
		for (PolygonList::iterator i = msFreePolygons.begin(); 
			i != msFreePolygons.end(); ++i)
		{
			delete *i;
		}
		msFreePolygons.clear();
	}
	//-----------------------------------------------------------------------
	Polygon* ConvexBody::allocatePolygon()
	{
		if (msFreePolygons.empty())
		{
			// if we ran out of polys to use, create a new one
			// hopefully this one will return to the pool in due course
			return new Polygon;
		}
		else
		{
			Polygon* ret = msFreePolygons.back();
			ret->reset();

			msFreePolygons.pop_back();

			return ret;

		}
	}
	//-----------------------------------------------------------------------
	void ConvexBody::freePolygon(Polygon* poly)
	{
		msFreePolygons.push_back(poly);
	}
	//-----------------------------------------------------------------------
	//-----------------------------------------------------------------------
	ConvexBody::ConvexBody()
	{
		// Reserve space for 8 polys, normally 6 faces plus a couple of clips
		mPolygons.reserve(8);

	}
	//-----------------------------------------------------------------------
	ConvexBody::~ConvexBody()
	{
		reset();
	}
	//-----------------------------------------------------------------------
	ConvexBody::ConvexBody( const ConvexBody& cpy )
	{
		for ( size_t i = 0; i < cpy.getPolygonCount(); ++i )
		{
			Polygon *p = allocatePolygon();
			*p = cpy.getPolygon( i );
			mPolygons.push_back( p );
		}
	}
	//-----------------------------------------------------------------------
	void ConvexBody::define(const Camera& frustum)
	{
		// ordering of the points:
		// near (0-3), far (4-7); each (top-right, top-left, bottom-left, bottom-right)
		//	   5-----4
		//	  /|    /|
		//	 / |   / |
		//	1-----0  |
		//	|  6--|--7
		//	| /   | /
		//	|/    |/
		//	2-----3
		
		const VEC3 *pts = frustum.GetWorldSpaceFrustumCorners();

		/// reset ConvexBody
		reset();

		/// update vertices: near, far, left, right, bottom, top; fill in ccw
		Polygon *poly;

		// near
		poly = allocatePolygon();
		poly->insertVertex( pts[0] );
		poly->insertVertex( pts[1] );
		poly->insertVertex( pts[2] );
		poly->insertVertex( pts[3] );
		mPolygons.push_back( poly );

		// far
		poly = allocatePolygon();
		poly->insertVertex( pts[5] );
		poly->insertVertex( pts[4] );
		poly->insertVertex( pts[7] );
		poly->insertVertex( pts[6] );
		mPolygons.push_back( poly );

		// left
		poly = allocatePolygon();
		poly->insertVertex( pts[5] );
		poly->insertVertex( pts[6] );
		poly->insertVertex( pts[2] );
		poly->insertVertex( pts[1] );
		mPolygons.push_back( poly ); 

		// right
		poly = allocatePolygon();
		poly->insertVertex( pts[4] );
		poly->insertVertex( pts[0] );
		poly->insertVertex( pts[3] );
		poly->insertVertex( pts[7] );
		mPolygons.push_back( poly ); 

		// bottom
		poly = allocatePolygon();
		poly->insertVertex( pts[6] );
		poly->insertVertex( pts[7] );
		poly->insertVertex( pts[3] );
		poly->insertVertex( pts[2] );
		mPolygons.push_back( poly ); 

		// top
		poly = allocatePolygon();
		poly->insertVertex( pts[4] );
		poly->insertVertex( pts[5] );
		poly->insertVertex( pts[1] );
		poly->insertVertex( pts[0] );
		mPolygons.push_back( poly ); 
	}
	//-----------------------------------------------------------------------
	void ConvexBody::define(const AABB& aab)
	{
		// ordering of the AAB points:
		//		1-----2
		//	   /|    /|
		//	  / |   / |
		//   5-----4  |
		//   |  0--|--3
		//   | /   | /
		//   |/    |/
		//   6-----7
		
		const VEC3& min = aab.m_minCorner;
		const VEC3& max = aab.m_maxCorner;

		VEC3 currentVertex = min;

		Polygon *poly;

		// reset body
		reset();

		// far
		poly = allocatePolygon();
		poly->insertVertex( currentVertex ); // 0 
		currentVertex.y = max.y;
		poly->insertVertex( currentVertex ); // 1
		currentVertex.x = max.x;
		poly->insertVertex( currentVertex ); // 2
		currentVertex.y = min.y;
		poly->insertVertex( currentVertex ); // 3
		insertPolygon( poly );

		// right
		poly = allocatePolygon();
		poly->insertVertex( currentVertex ); // 3
		currentVertex.y = max.y;
		poly->insertVertex( currentVertex ); // 2
		currentVertex.z = max.z;
		poly->insertVertex( currentVertex ); // 4
		currentVertex.y = min.y;
		poly->insertVertex( currentVertex ); // 7
		insertPolygon( poly ); 

		// near
		poly = allocatePolygon();
		poly->insertVertex( currentVertex ); // 7
		currentVertex.y = max.y;
		poly->insertVertex( currentVertex ); // 4
		currentVertex.x = min.x;
		poly->insertVertex( currentVertex ); // 5
		currentVertex.y = min.y;
		poly->insertVertex( currentVertex ); // 6
		insertPolygon( poly );

		// left
		poly = allocatePolygon();
		poly->insertVertex( currentVertex ); // 6
		currentVertex.y = max.y;
		poly->insertVertex( currentVertex ); // 5
		currentVertex.z = min.z;
		poly->insertVertex( currentVertex ); // 1
		currentVertex.y = min.y;
		poly->insertVertex( currentVertex ); // 0
		insertPolygon( poly ); 

		// bottom
		poly = allocatePolygon();
		poly->insertVertex( currentVertex ); // 0 
		currentVertex.x = max.x;
		poly->insertVertex( currentVertex ); // 3
		currentVertex.z = max.z;
		poly->insertVertex( currentVertex ); // 7 
		currentVertex.x = min.x;
		poly->insertVertex( currentVertex ); // 6
		insertPolygon( poly );

		// top
		poly = allocatePolygon();
		currentVertex = max;
		poly->insertVertex( currentVertex ); // 4
		currentVertex.z = min.z;
		poly->insertVertex( currentVertex ); // 2
		currentVertex.x = min.x;
		poly->insertVertex( currentVertex ); // 1
		currentVertex.z = max.z;
		poly->insertVertex( currentVertex ); // 5
		insertPolygon( poly );
		
	}
	//-----------------------------------------------------------------------
	void ConvexBody::clip(const AABB& aab)
	{
		// only process finite boxes
		if (!aab.IsFinite())
			return;
		// ordering of the AAB points:
		//		1-----2
		//	   /|    /|
		//	  / |   / |
		//   5-----4  |
		//   |  0--|--3
		//   | /   | /
		//   |/    |/
		//   6-----7

		const VEC3& min = aab.m_minCorner;
		const VEC3& max = aab.m_maxCorner;

		// clip object for each plane of the AAB
		PLANE p;


		// front
		p.Redefine(VEC3::UNIT_Z, max);
		clip(p);

		// back
		p.Redefine(VEC3::NEG_UNIT_Z, min);
		clip(p);
		
		// left
		p.Redefine(VEC3::NEG_UNIT_X, min);
		clip(p);
		
		// right
		p.Redefine(VEC3::UNIT_X, max);
		clip(p);
		
		// bottom
		p.Redefine(VEC3::NEG_UNIT_Y, min);
		clip(p);
		
		// top
		p.Redefine(VEC3::UNIT_Y, max);
		clip(p);

	}
	//-----------------------------------------------------------------------
	void ConvexBody::clip(const Camera& fr)
	{
		// clip the body with each plane
		for ( unsigned short i = 0; i < 6; ++i )
		{
			// clip, but keep positive space this time since frustum planes are 
			// the opposite to other cases (facing inwards rather than outwards)
			clip(fr.GetFrustumPlane(i), false);
		}
	}
	//-----------------------------------------------------------------------
	void ConvexBody::clip(const ConvexBody& body)
	{
		if ( this == &body )
			return;

		// for each polygon; clip 'this' with each plane of 'body'
		// front vertex representation is ccw

		PLANE pl;

		for ( size_t iPoly = 0; iPoly < body.getPolygonCount(); ++iPoly )
		{
			const Polygon& p = body.getPolygon( iPoly );

			assert( p.getVertexCount() >= 3 && "A valid polygon must contain at least three vertices." );

			// set up plane with first three vertices of the polygon (a polygon is always planar)
			pl.Redefine( p.getVertex( 0 ), p.getVertex( 1 ), p.getVertex( 2 ) );

			clip(pl);
		}
	}
	//-----------------------------------------------------------------------
	void ConvexBody::extend(const VEC3& pt)
	{
		// Erase all polygons facing towards the point. For all edges that
		// are not removed twice (once in AB and once BA direction) build a
		// convex polygon (triangle) with the point.
		Polygon::EdgeMap edgeMap;

		for ( size_t i = 0; i < getPolygonCount(); ++i )
		{
			const VEC3& normal = getNormal( i );
			// direction of the point in regard to the polygon
			// the polygon is planar so we can take an arbitrary vertex
			VEC3 ptDir  = pt - getVertex( i, 0 );
			ptDir.Normalize();

			// remove polygon if dot product is greater or equals null.
			if (Common::DotProduct_Vec3_By_Vec3(normal, ptDir) >= 0)
			{
				// store edges (copy them because if the polygon is deleted
				// its vertices are also deleted)
				storeEdgesOfPolygon( i, &edgeMap );

				// remove polygon
				deletePolygon( i );

				// decrement iterator because of deleted polygon
				--i; 
			}
		}

		// point is already a part of the hull (point lies inside)
		if ( edgeMap.empty() )
			return;

		// remove the edges that are twice in the list (once from each side: AB,BA)

		Polygon::EdgeMap::iterator it;
		// iterate from first to the element before the last one
		for (Polygon::EdgeMap::iterator itStart = edgeMap.begin(); 
			itStart != edgeMap.end(); )
		{
			// compare with iterator + 1 to end
			// don't need to skip last entry in itStart since omitted in inner loop
			it = itStart;
			++it;

			bool erased = false;
			// iterate from itStart+1 to the element before the last one
			for ( ; it != edgeMap.end(); ++it )
			{	
				if (itStart->first.IsEquivalent(it->second) &&
					 itStart->second.IsEquivalent(it->first))
				{
					edgeMap.erase(it);
					// increment itStart before deletion (iterator invalidation)
					Polygon::EdgeMap::iterator delistart = itStart++;
					edgeMap.erase(delistart);
					erased = true;

					break; // found and erased
				}
			}
			// increment itStart if we didn't do it when erasing
			if (!erased)
				++itStart;

		}

		// use the remaining edges to build triangles with the point
		// the vertices of the edges are in ccw order (edgePtA-edgePtB-point
		// to form a ccw polygon)
		while ( !edgeMap.empty() )
		{
			Polygon::EdgeMap::iterator mapIt = edgeMap.begin();

			// build polygon it.first, it.second, point
			Polygon *p = allocatePolygon();

			p->insertVertex(mapIt->first);
			p->insertVertex(mapIt->second);

			p->insertVertex( pt );
			// attach polygon to body
			insertPolygon( p );

			// erase the vertices from the list
			// pointers are now held by the polygon
			edgeMap.erase( mapIt );
		}
	}
	//-----------------------------------------------------------------------
	void ConvexBody::reset( void )
	{
		for (PolygonList::iterator it = mPolygons.begin(); 
			it != mPolygons.end(); ++it)
		{
			freePolygon(*it);
		}
		mPolygons.clear();
	}
	//-----------------------------------------------------------------------
	size_t ConvexBody::getPolygonCount( void ) const
	{
		return mPolygons.size();
	}
	//-----------------------------------------------------------------------
	size_t ConvexBody::getVertexCount( size_t poly ) const
	{
		assert(poly < getPolygonCount() && "Search position out of range" );
		
		return mPolygons[ poly ]->getVertexCount();
	}
	//-----------------------------------------------------------------------
	bool ConvexBody::hasClosedHull( void ) const
	{
		// if this map is returned empty, the body is closed
		Polygon::EdgeMap edgeMap = getSingleEdges();

		return edgeMap.empty();
	}
	//-----------------------------------------------------------------------
	void ConvexBody::mergePolygons( void )
	{
		// Merge all polygons that lay in the same plane as one big polygon.
		// A convex body does not have two separate regions (separated by polygons
		// with different normals) where the same normal occurs, so we can simply
		// search all similar normals of a polygon. Two different options are 
		// possible when the normals fit:
		// - the two polygons are neighbors
		// - the two polygons aren't neighbors (but a third, fourth,.. polygon lays
		//   in between)

		// Signals if the body holds polygons which aren't neighbors but have the same
		// normal. That means another step has to be processed.
		bool bDirty = false;

		for ( size_t iPolyA = 0; iPolyA < getPolygonCount(); ++iPolyA )
		{

			for ( size_t iPolyB = iPolyA+1; iPolyB < getPolygonCount(); ++iPolyB )
			{
				const VEC3& n1 = getNormal( iPolyA );
				const VEC3& n2 = getNormal( iPolyB );

				// if the normals point into the same direction
				if (n1.DirectionEqual(n2, Common::Angle_To_Radian(0.00001)))
				{
					// indicates if a neighbor has been found and joined
					bool bFound = false;

					// search the two fitting vertices (if there are any) for the common edge
					const size_t numVerticesA = getVertexCount( iPolyA );
					for ( size_t iVertexA = 0; iVertexA < numVerticesA; ++iVertexA )
					{
						const size_t numVerticesB = getVertexCount( iPolyB );
						for ( size_t iVertexB = 0; iVertexB < numVerticesB; ++iVertexB )
						{
							const VEC3& aCurrent	= getVertex( iPolyA, iVertexA );
							const VEC3& aNext		= getVertex( iPolyA, (iVertexA + 1) % getVertexCount( iPolyA ) );
							const VEC3& bCurrent	= getVertex( iPolyB, iVertexB );
							const VEC3& bNext		= getVertex( iPolyB, (iVertexB + 1) % getVertexCount( iPolyB ) );

							// if the edge is the same the current vertex of A has to be equal to the next of B and the other
							// way round
							if ( aCurrent.IsEquivalent(bNext) &&
								 bCurrent.IsEquivalent(aNext))
							{
								// polygons are neighbors, assemble new one
								Polygon *pNew = allocatePolygon();

								// insert all vertices of A up to the join (including the common vertex, ignoring
								// whether the first vertex of A may be a shared vertex)
								for ( size_t i = 0; i <= iVertexA; ++i )
								{
									pNew->insertVertex( getVertex( iPolyA, i%numVerticesA ) );
								}

								// insert all vertices of B _after_ the join to the end
								for ( size_t i = iVertexB + 2; i < numVerticesB; ++i )
								{
									pNew->insertVertex( getVertex( iPolyB, i ) );
								}

								// insert all vertices of B from the beginning up to the join (including the common vertex
								// and excluding the first vertex if the first is part of the shared edge)
								for ( size_t i = 0; i <= iVertexB; ++i )
								{
									pNew->insertVertex( getVertex( iPolyB, i%numVerticesB ) );
								}

								// insert all vertices of A _after_ the join to the end
								for ( size_t i = iVertexA + 2; i < numVerticesA; ++i )
								{
									pNew->insertVertex( getVertex( iPolyA, i ) );
								}

								// in case there are double vertices (in special cases), remove them
								for ( size_t i = 0; i < pNew->getVertexCount(); ++i )
								{
									const VEC3& a = pNew->getVertex( i );
									const VEC3& b = pNew->getVertex( (i + 1) % pNew->getVertexCount() );

									// if the two vertices are the same...
									if (a.IsEquivalent(b))
									{
										// remove a
										pNew->deleteVertex( i );

										// decrement counter
										--i;
									}
								}

								// delete the two old ones
								assert( iPolyA != iPolyB && "PolyA and polyB are the same!" );
								
								// polyB is always higher than polyA, so delete polyB first
								deletePolygon( iPolyB );
								deletePolygon( iPolyA );

								// continue with next (current is deleted, so don't jump to the next after the next)
								--iPolyA;
								--iPolyB;

								// insert new polygon
								insertPolygon( pNew );

								bFound = true;
								break;
							}
						}
						
						if ( bFound )
						{
							break;
						}
					}

					if ( bFound == false )
					{
						// there are two polygons available with the same normal direction, but they
						// could not be merged into one single because of no shared edge
						bDirty = true;
						break;
					}
				}
			}
		}

		// recursion to merge the previous non-neighbors
		if ( bDirty )
		{
			mergePolygons();
		}
	}
	//-----------------------------------------------------------------------
	const VEC3& ConvexBody::getNormal( size_t poly )
	{
		assert( poly < getPolygonCount() && "Search position out of range" );
		
		return mPolygons[ poly ]->getNormal();
	}
	//-----------------------------------------------------------------------
	AABB ConvexBody::getAABB( void ) const
	{
		AABB aab;

		for ( size_t i = 0; i < getPolygonCount(); ++i )
		{
			for ( size_t j = 0; j < getVertexCount( i ); ++j )
			{
				aab.Merge( getVertex( i, j ) );
			}
		}

		return aab;
	}
	//-----------------------------------------------------------------------
	bool ConvexBody::operator == ( const ConvexBody& rhs ) const
	{
		if ( getPolygonCount() != rhs.getPolygonCount() )
			return false;

		// Compare the polygons. They may not be in correct order.
		// A correct convex body does not have identical polygons in its body.
		bool *bChecked = new bool[getPolygonCount()];
		for ( size_t i=0; i<getPolygonCount(); ++i )
		{
			bChecked[ i ] = false;
		}

		for ( size_t i=0; i<getPolygonCount(); ++i )
		{
			bool bFound = false;

			for ( size_t j=0; j<getPolygonCount(); ++j )
			{
				const Polygon& pA = getPolygon( i );
				const Polygon& pB = rhs.getPolygon( j );

				if ( pA == pB )
				{
					bFound = true;
					bChecked[ i ] = true;
					break;
				}
			}

			if ( bFound == false )
			{
				delete[] bChecked;
				bChecked = 0;
				return false;
			}
		}

		for ( size_t i=0; i<getPolygonCount(); ++i )
		{
			if ( bChecked[ i ] != true )
			{
				delete[] bChecked;
				bChecked = 0;
				return false;
			}
		}

		delete[] bChecked;
		bChecked = 0;
		return true;
	}
	//-----------------------------------------------------------------------
	void ConvexBody::insertPolygon(Polygon* pdata, size_t poly )
	{
		assert(poly <= getPolygonCount() && "Insert position out of range" );
		assert(pdata != NULL && "Polygon is NULL");

		PolygonList::iterator it = mPolygons.begin();
		std::advance(it, poly);

		mPolygons.insert( it, pdata );

	}
	//-----------------------------------------------------------------------
	void ConvexBody::insertPolygon(Polygon* pdata)
	{
		assert(pdata != NULL && "Polygon is NULL");

		mPolygons.push_back( pdata );

	}
	//-----------------------------------------------------------------------
	void ConvexBody::insertVertex(size_t poly, const VEC3& vdata, size_t vertex )
	{
		assert(poly < getPolygonCount() && "Search position (polygon) out of range");
		
		mPolygons[poly]->insertVertex(vdata, vertex);
	}
	//-----------------------------------------------------------------------
	void ConvexBody::insertVertex(size_t poly, const VEC3& vdata)
	{
		assert(poly < getPolygonCount() && "Search position (polygon) out of range" );

		mPolygons[poly]->insertVertex(vdata);
	}
	//-----------------------------------------------------------------------
	void ConvexBody::deletePolygon(size_t poly)
	{
		assert(poly < getPolygonCount() && "Search position out of range");

		PolygonList::iterator it = mPolygons.begin();
		std::advance(it, poly);
		
		freePolygon(*it);
		mPolygons.erase(it);
	}
	//-----------------------------------------------------------------------
	Polygon* ConvexBody::unlinkPolygon(size_t poly)
	{
		assert(poly < getPolygonCount() && "Search position out of range");

		PolygonList::iterator it = mPolygons.begin();
		std::advance(it, poly);

		// safe address
		Polygon *pRet = *it;
		
		// delete entry
		mPolygons.erase(it);	

		// return polygon pointer

		return pRet;
	}
	//-----------------------------------------------------------------------
	void ConvexBody::moveDataFromBody(ConvexBody& body)
	{
		body.mPolygons.swap(this->mPolygons);
	}
	//-----------------------------------------------------------------------
	void ConvexBody::deleteVertex(size_t poly, size_t vertex)
	{
		assert(poly < getPolygonCount() && "Search position out of range");

		mPolygons[poly]->deleteVertex(vertex);
	}
	//-----------------------------------------------------------------------
	const Polygon& ConvexBody::getPolygon(size_t poly) const
	{
		assert(poly < getPolygonCount() && "Search position out of range");

		return *mPolygons[poly];
	}
	//-----------------------------------------------------------------------
	void ConvexBody::setPolygon(Polygon* pdata, size_t poly)
	{
		assert(poly < getPolygonCount() && "Search position out of range");
		assert(pdata != NULL && "Polygon is NULL");

		if (pdata != mPolygons[poly])
		{
			// delete old polygon
			freePolygon(mPolygons[ poly ]);

			// set new polygon
			mPolygons[poly] = pdata;
		}
	}
	//-----------------------------------------------------------------------
	const VEC3& ConvexBody::getVertex(size_t poly, size_t vertex) const
	{
		assert(poly < getPolygonCount() && "Search position out of range");
		
		return mPolygons[poly]->getVertex(vertex);
	}
	//-----------------------------------------------------------------------
	void ConvexBody::setVertex(size_t poly, const VEC3& vdata, size_t vertex)
	{
		assert(poly < getPolygonCount() && "Search position out of range");
		
		mPolygons[poly]->setVertex(vdata, vertex);
	}
	//-----------------------------------------------------------------------
	void ConvexBody::storeEdgesOfPolygon(size_t poly, Polygon::EdgeMap *edgeMap ) const
	{
		assert(poly <= getPolygonCount() && "Search position out of range");
		assert(edgeMap != NULL && "TEdgeMap ptr is NULL");

		mPolygons[poly]->storeEdges(edgeMap);
	}
	//-----------------------------------------------------------------------
	Polygon::EdgeMap ConvexBody::getSingleEdges() const
	{
		Polygon::EdgeMap edgeMap;

		// put all edges of all polygons into a list every edge has to be
		// walked in each direction once	
		for ( size_t i = 0; i < getPolygonCount(); ++i )
		{
			const Polygon& p = getPolygon( i );

			for ( size_t j = 0; j < p.getVertexCount(); ++j )
			{
				const VEC3& a = p.getVertex( j );
				const VEC3& b = p.getVertex( ( j + 1 ) % p.getVertexCount() );

				edgeMap.insert( Polygon::Edge( a, b ) );
			}
		}

		// search corresponding parts
		Polygon::EdgeMap::iterator it;
		Polygon::EdgeMap::iterator itStart;
		Polygon::EdgeMap::const_iterator itEnd;
		while( !edgeMap.empty() )
		{
			it = edgeMap.begin(); ++it;	// start one element after itStart
			itStart = edgeMap.begin();	// the element to be compared with the others
			itEnd = edgeMap.end();		// beyond the last element
			
			bool bFound = false;

			for ( ; it != itEnd; ++it )
			{
				if (itStart->first.IsEquivalent(it->second) &&
					 itStart->second.IsEquivalent(it->first))
				{
					// erase itStart and it
					edgeMap.erase( it );
					edgeMap.erase( itStart );

					bFound = true;

					break; // found
				}
			}

			if ( bFound == false )
			{
				break;	// not all edges could be matched
						// body is not closed
			}
		}

		return edgeMap;
	}
	//-----------------------------------------------------------------------
	void ConvexBody::allocateSpace( size_t numPolygons, size_t numVertices )
	{
		reset();

		// allocate numPolygons polygons with each numVertices vertices
		for ( size_t iPoly = 0; iPoly < numPolygons; ++iPoly )
		{
			Polygon *poly = allocatePolygon();

			for ( size_t iVertex = 0; iVertex < numVertices; ++iVertex )
			{
				poly->insertVertex( VEC3::ZERO );
			}

			mPolygons.push_back( poly );
		}
	}
	//-----------------------------------------------------------------------
	void ConvexBody::clip( const PLANE& pl, bool keepNegative )
	{
		if ( getPolygonCount() == 0 )
			return;

		// current will be used as the reference body
		ConvexBody current;
		current.moveDataFromBody(*this);
		
		assert( this->getPolygonCount() == 0 && "Body not empty!" );
		assert(current.getPolygonCount() != 0 && "Body empty!");

		// holds all intersection edges for the different polygons
		Polygon::EdgeMap intersectionEdges;

		// clip all polygons by the intersection plane
		// add only valid or intersected polygons to *this
		for ( size_t iPoly = 0; iPoly < current.getPolygonCount(); ++iPoly )
		{

			// fetch vertex count and ignore polygons with less than three vertices
			// the polygon is not valid and won't be added
			const size_t vertexCount = current.getVertexCount( iPoly );
			if ( vertexCount < 3 )
				continue;

			// current polygon
			const Polygon& p = current.getPolygon( iPoly );

			// the polygon to assemble
			Polygon *pNew = allocatePolygon();

			// the intersection polygon (indeed it's an edge or it's empty)
			Polygon *pIntersect = allocatePolygon();
			
			// check if polygons lie inside or outside (or on the plane)
			// for each vertex check where it is situated in regard to the plane
			// three possibilities appear:
			PLANE::Side clipSide = keepNegative ? PLANE::POSITIVE_SIDE : PLANE::NEGATIVE_SIDE;
			// - side is clipSide: vertex will be clipped
			// - side is !clipSide: vertex will be untouched
			// - side is NOSIDE:   vertex will be untouched
			PLANE::Side *side = new PLANE::Side[vertexCount];
			for ( size_t iVertex = 0; iVertex < vertexCount; ++iVertex )
			{
				side[ iVertex ] = pl.GetSide( p.getVertex( iVertex ) );
			}

			// now we check the side combinations for the current and the next vertex
			// four different combinations exist:
			// - both points inside (or on the plane): keep the second (add it to the body)
			// - both points outside: discard both (don't add them to the body)
			// - first vertex is inside, second is outside: add the intersection point
			// - first vertex is outside, second is inside: add the intersection point, then the second
			for ( size_t iVertex = 0; iVertex < vertexCount; ++iVertex )
			{
				// determine the next vertex
				size_t iNextVertex = ( iVertex + 1 ) % vertexCount;

				const VEC3& vCurrent = p.getVertex( iVertex );
				const VEC3& vNext    = p.getVertex( iNextVertex );

				// case 1: both points inside (store next)
				if ( side[ iVertex ]     != clipSide &&		// NEGATIVE or NONE
					 side[ iNextVertex ] != clipSide )		// NEGATIVE or NONE
				{
					// keep the second
					pNew->insertVertex( vNext );
				}

				// case 3: inside -> outside (store intersection)
				else if ( side[ iVertex ]		!= clipSide &&
						  side[ iNextVertex ]	== clipSide )
				{
					// Do an intersection with the plane. We use a ray with a start point and a direction.
					// The ray is forced to hit the plane with any option available (eigher current or next
					// is the starting point)

					// intersect from the outside vertex towards the inside one
					VEC3 vDirection = vCurrent - vNext;
					vDirection.Normalize();
					RAY ray( vNext, vDirection );
					std::pair< bool, float > intersect = ray.Intersects( pl );

					// store intersection
					if ( intersect.first )
					{
						// convert distance to vector
						VEC3 vIntersect = ray.GetPoint( intersect.second );	

						// store intersection
						pNew->insertVertex( vIntersect );
						pIntersect->insertVertex( vIntersect );
					}
				}

				// case 4: outside -> inside (store intersection, store next)
				else if ( side[ iVertex ]		== clipSide &&
					side[ iNextVertex ]			!= clipSide )
				{
					// Do an intersection with the plane. We use a ray with a start point and a direction.
					// The ray is forced to hit the plane with any option available (eigher current or next
					// is the starting point)

					// intersect from the outside vertex towards the inside one
					VEC3 vDirection = vNext - vCurrent;
					vDirection.Normalize();
					RAY ray( vCurrent, vDirection );
					std::pair< bool, float > intersect = ray.Intersects( pl );

					// store intersection
					if ( intersect.first )
					{
						// convert distance to vector
						VEC3 vIntersect = ray.GetPoint( intersect.second );

						// store intersection
						pNew->insertVertex( vIntersect );
						pIntersect->insertVertex( vIntersect );
					}

					pNew->insertVertex( vNext );

				}
				// else:
				// case 2: both outside (do nothing)
					
			}

			// insert the polygon only, if at least three vertices are present
			if ( pNew->getVertexCount() >= 3 )
			{
				// in case there are double vertices, remove them
				pNew->removeDuplicates();

				// in case there are still at least three vertices, insert the polygon
				if ( pNew->getVertexCount() >= 3 )
				{
					this->insertPolygon( pNew );
				}
				else
				{
					// delete pNew because it's empty or invalid
					freePolygon(pNew);
					pNew = 0;
				}
			}
			else
			{
				// delete pNew because it's empty or invalid
				freePolygon(pNew);
				pNew = 0;
			}

			// insert intersection polygon only, if there are two vertices present
			if ( pIntersect->getVertexCount() == 2 )
			{
				intersectionEdges.insert( Polygon::Edge( pIntersect->getVertex( 0 ),
														  pIntersect->getVertex( 1 ) ) );
			}

			// delete intersection polygon
			// vertices were copied (if there were any)
			freePolygon(pIntersect);
			pIntersect = 0;

			// delete side info
			delete[] side;
			side = 0;
		}

		// if the polygon was partially clipped, close it
		// at least three edges are needed for a polygon
		if ( intersectionEdges.size() >= 3 )
		{
			Polygon *pClosing = allocatePolygon();

			// Analyze the intersection list and insert the intersection points in ccw order
			// Each point is twice in the list because of the fact that we have a convex body
			// with convex polygons. All we have to do is order the edges (an even-odd pair)
			// in a ccw order. The plane normal shows us the direction.
			Polygon::EdgeMap::iterator it = intersectionEdges.begin();

			// check the cross product of the first two edges
			VEC3 vFirst  = it->first;
			VEC3 vSecond = it->second;

			// remove inserted edge
			intersectionEdges.erase( it );

			VEC3 vNext;

			// find mating edge
			if (findAndEraseEdgePair(vSecond, intersectionEdges, vNext))
			{
				// detect the orientation
				// the polygon must have the same normal direction as the plane and then n
				VEC3 vCross = Common::CrossProduct_Vec3_By_Vec3(vFirst - vSecond, vNext - vSecond);
				bool frontside = ( pl.n ).DirectionEqual( vCross, Common::Angle_To_Radian( 1 ) );

				// first inserted vertex
				VEC3 firstVertex;
				// currently inserted vertex
				VEC3 currentVertex;
				// direction equals -> front side (walk ccw)
				if ( frontside )
				{
					// start with next as first vertex, then second, then first and continue with first to walk ccw
					pClosing->insertVertex( vNext );
					pClosing->insertVertex( vSecond );
					pClosing->insertVertex( vFirst );
					firstVertex		= vNext;
					currentVertex	= vFirst;

				#ifdef _DEBUG_INTERSECTION_LIST
					std::cout << "PLANE: n=" << pl.normal << ", d=" << pl.d << std::endl;
					std::cout << "First inserted vertex: " << *next << std::endl;
					std::cout << "Second inserted vertex: " << *vSecond << std::endl;
					std::cout << "Third inserted vertex: " << *vFirst << std::endl;
				#endif
				}
				// direction does not equal -> back side (walk cw)
				else
				{
					// start with first as first vertex, then second, then next and continue with next to walk ccw
					pClosing->insertVertex( vFirst );
					pClosing->insertVertex( vSecond );
					pClosing->insertVertex( vNext );
					firstVertex		= vFirst;
					currentVertex	= vNext;

					#ifdef _DEBUG_INTERSECTION_LIST
						std::cout << "PLANE: n=" << pl.normal << ", d=" << pl.d << std::endl;
						std::cout << "First inserted vertex: " << *vFirst << std::endl;
						std::cout << "Second inserted vertex: " << *vSecond << std::endl;
						std::cout << "Third inserted vertex: " << *next << std::endl;
					#endif
				}

				// search mating edges that have a point in common
				// continue this operation as long as edges are present
				while ( !intersectionEdges.empty() )
				{

					if (findAndEraseEdgePair(currentVertex, intersectionEdges, vNext))
					{
						// insert only if it's not the last (which equals the first) vertex
						if ( !intersectionEdges.empty() )
						{
							currentVertex = vNext;
							pClosing->insertVertex( vNext );
						}
					}
					else
					{
						// degenerated...
						break;
					}

				} // while intersectionEdges not empty

				// insert polygon (may be degenerated!)
				this->insertPolygon( pClosing );

			}
			// mating intersection edge NOT found!
			else
			{
				freePolygon(pClosing);
			}

		} // if intersectionEdges contains more than three elements
	}
	//-----------------------------------------------------------------------
	bool ConvexBody::findAndEraseEdgePair(const VEC3& vec, 
		Polygon::EdgeMap& intersectionEdges, VEC3& vNext ) const
	{
		for (Polygon::EdgeMap::iterator it = intersectionEdges.begin(); 
			it != intersectionEdges.end(); ++it)
		{
			if (it->first.IsEquivalent(vec))
			{
				vNext = it->second;

				// erase found edge
				intersectionEdges.erase( it );

				return true; // found!
			}
			else if (it->second.IsEquivalent(vec))
			{
				vNext = it->first;

				// erase found edge
				intersectionEdges.erase( it );

				return true; // found!
			}
		}

		return false; // not found!
	}
}

