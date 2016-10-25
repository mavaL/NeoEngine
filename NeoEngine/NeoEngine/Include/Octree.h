/********************************************************************
	created:	2016/10/19 15:48
	filename	Octree.h
	author:		maval

	purpose:	A simple loose octree implementation.
*********************************************************************/
#ifndef Octree_h__
#define Octree_h__

#include "AABB.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	class OctreeNode
	{
	public:
		OctreeNode();
		~OctreeNode() {}

		void			WalkOctree();
		void			Insert(Entity* pObj, uint32 nDepth);
		void			GetNodeIndex(const AABB& aabb, uint32& x, uint32& y, uint32& z);

		OctreeNode*		m_pChildren[2][2][2];
		EntityList		m_pObjs;
		AABB			m_aabb;
		AABB			m_aabbCullBound;
	};
	//------------------------------------------------------------------------------------
	class Octree
	{
	public:
		Octree(const AABB& sceneAABB);
		~Octree();

	public:
		void			Insert(Entity* pObj);
		// Find any visible objs in the octree.
		void			Update();

		OctreeNode*		m_pRootNode;
		uint32			m_nTotalObjs;
		uint32			m_nCulledObjs;
	};

}

#endif // Octree_h__