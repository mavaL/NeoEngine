#include "stdafx.h"
#include "Octree.h"
#include "Entity.h"
#include "Camera.h"
#include "SceneManager.h"
#include "Scene.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	OctreeNode::OctreeNode()
		: m_iDepth(-1)
	{
		ZeroMemory(m_pChildren, 8 * sizeof(OctreeNode*));
	}
	//------------------------------------------------------------------------------------
	OctreeNode::~OctreeNode()
	{
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				for (int k = 0; k < 2; ++k)
				{
					SAFE_DELETE(m_pChildren[i][j][k]);
				}
			}
		}
	}
	//------------------------------------------------------------------------------------
	void OctreeNode::WalkOctree()
	{
		int result = 1;

		for (int i = 0; i < 6; ++i)
		{
			PLANE::Side side = g_env.pSceneMgr->GetCamera()->GetFrustumPlane(i).GetSide(m_aabbCullBound);

			if (side == PLANE::NEGATIVE_SIDE)
			{
				// Camera is not in this node.
				result = 0;
				break;
			} 
			else if(side == PLANE::BOTH_SIDE)
			{
				// Camera is in this node partially.
				result = 2;
			}
		}

		if (result != 0)
		{
			// Frustum culling
			for (uint32 i = 0; i < m_pObjs.size(); ++i)
			{
				if (!g_env.pSceneMgr->GetCamera()->FrustumCullingAABB(m_pObjs[i]->GetWorldAABB()))
				{
					m_pObjs[i]->SetVisible(true);
					--g_env.pSceneMgr->GetOctree()->m_nCulledObjs;
				}
				++g_env.pSceneMgr->GetOctree()->m_nFrustumCullNum;
			}

			// Walk through 8 child nodes
			if (m_pChildren[0][0][0])
			{
				m_pChildren[0][0][0]->WalkOctree();
			}

			if (m_pChildren[0][0][1])
			{
				m_pChildren[0][0][1]->WalkOctree();
			}

			if (m_pChildren[0][1][0])
			{
				m_pChildren[0][1][0]->WalkOctree();
			}

			if (m_pChildren[0][1][1])
			{
				m_pChildren[0][1][1]->WalkOctree();
			}

			if (m_pChildren[1][0][0])
			{
				m_pChildren[1][0][0]->WalkOctree();
			}

			if (m_pChildren[1][0][1])
			{
				m_pChildren[1][0][1]->WalkOctree();
			}

			if (m_pChildren[1][1][0])
			{
				m_pChildren[1][1][0]->WalkOctree();
			}

			if (m_pChildren[1][1][1])
			{
				m_pChildren[1][1][1]->WalkOctree();
			}
		}
		else
		{
			++g_env.pSceneMgr->GetOctree()->m_nCulledNodes[m_iDepth];
		}
	}
	//------------------------------------------------------------------------------------
	void OctreeNode::Insert(Entity* pObj, uint32 nDepth)
	{
		if (nDepth < OCTREE_MAX_DEPTH)
		{
			uint32 x, y, z;
			GetNodeIndex(pObj->GetWorldAABB(), x, y, z);

			if (m_pChildren[x][y][z] == nullptr)
			{
				m_pChildren[x][y][z] = new OctreeNode;
				m_pChildren[x][y][z]->m_iDepth = m_iDepth + 1;

				// Calc AABB of the child node.
				VEC3 vMin, vMax;

				if (x == 0)
				{
					vMin.x = m_aabb.m_minCorner.x;
					vMax.x = (m_aabb.m_minCorner.x + m_aabb.m_maxCorner.x) / 2;
				} 
				else
				{
					vMin.x = (m_aabb.m_minCorner.x + m_aabb.m_maxCorner.x) / 2;
					vMax.x = m_aabb.m_maxCorner.x;
				}

				if (y == 0)
				{
					vMin.y = m_aabb.m_minCorner.y;
					vMax.y = (m_aabb.m_minCorner.y + m_aabb.m_maxCorner.y) / 2;
				}
				else
				{
					vMin.y = (m_aabb.m_minCorner.y + m_aabb.m_maxCorner.y) / 2;
					vMax.y = m_aabb.m_maxCorner.y;
				}

				if (z == 0)
				{
					vMin.z = m_aabb.m_minCorner.z;
					vMax.z = (m_aabb.m_minCorner.z + m_aabb.m_maxCorner.z) / 2;
				}
				else
				{
					vMin.z = (m_aabb.m_minCorner.z + m_aabb.m_maxCorner.z) / 2;
					vMax.z = m_aabb.m_maxCorner.z;
				}

				m_pChildren[x][y][z]->m_aabb.SetNull();
				m_pChildren[x][y][z]->m_aabb.Merge(vMin);
				m_pChildren[x][y][z]->m_aabb.Merge(vMax);

				const VEC3 vHalfSize = m_pChildren[x][y][z]->m_aabb.GetSize() / 2;
				m_pChildren[x][y][z]->m_aabbCullBound.SetNull();
				m_pChildren[x][y][z]->m_aabbCullBound.Merge(vMin - vHalfSize);
				m_pChildren[x][y][z]->m_aabbCullBound.Merge(vMax + vHalfSize);
			}

			m_pChildren[x][y][z]->Insert(pObj, ++nDepth);

			int asdf = 0;
		} 
		else
		{
			m_pObjs.push_back(pObj);
		}
	}
	//------------------------------------------------------------------------------------
	void OctreeNode::GetNodeIndex(const AABB& aabb, uint32& x, uint32& y, uint32& z)
	{
		const VEC3& vNodeCenter = m_aabb.GetCenter();
		const VEC3& v = aabb.GetCenter();

		x = v.x > vNodeCenter.x ? 1 : 0;
		y = v.y > vNodeCenter.y ? 1 : 0;
		z = v.z > vNodeCenter.z ? 1 : 0;
	}
	//------------------------------------------------------------------------------------
	Octree::Octree(const AABB& sceneAABB)
		: m_nTotalObjs(0)
		, m_nCulledObjs(0)
	{
		m_pRootNode = new OctreeNode;
		m_pRootNode->m_iDepth = 0;
		m_pRootNode->m_aabb = sceneAABB;
	}
	//------------------------------------------------------------------------------------
	Octree::~Octree()
	{
		SAFE_DELETE(m_pRootNode);
	}
	//------------------------------------------------------------------------------------
	void Octree::Insert(Entity* pObj)
	{
		pObj->UpdateAABB();

		// Insert object to leaf node.
		m_pRootNode->Insert(pObj, 0);

		++m_nTotalObjs;
	}
	//------------------------------------------------------------------------------------
	void Octree::Update()
	{
		// Invisible all objs, let the octree find visible objs.
		EntityList& lstEntity = g_env.pSceneMgr->GetCurScene()->GetEntityList();

		for (uint32 i = 0; i < lstEntity.size(); ++i)
		{
			lstEntity[i]->SetVisible(false);
		}

		for (uint32 i = 0; i < OCTREE_MAX_DEPTH; ++i)
		{
			m_nCulledNodes[i] = 0;
		}

		m_nCulledObjs = m_nTotalObjs;
		m_nFrustumCullNum = 0;
		m_pRootNode->WalkOctree();
	}

}