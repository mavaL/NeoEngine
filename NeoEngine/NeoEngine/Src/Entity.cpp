#include "stdafx.h"
#include "Entity.h"
#include "Renderer.h"
#include "Mesh.h"
#include "Material.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	Entity::Entity(Mesh* pMesh, bool bUpdateAABB)
		: m_position(VEC3::ZERO)
		, m_rotation(QUATERNION::IDENTITY)
		, m_scale(1, 1, 1)
		, m_bMatrixInvalid(true)
		, m_pMesh(pMesh)
		, m_bCastShadow(false)
		, m_bReceiveShadow(true)
		, m_bUpdateAABB(bUpdateAABB)
		, m_pCustomRenderData(nullptr)
		, m_pMaterial(nullptr)
	{
		SetVisible(true);

		if (m_bUpdateAABB)
		{
			_ComputeAABB();
		}
	}
	//------------------------------------------------------------------------------------
	Entity::~Entity()
	{
		SAFE_RELEASE(m_pMaterial);
		SAFE_DELETE(m_pCustomRenderData);
	}
	//------------------------------------------------------------------------------------
	void Entity::SetPosition( const VEC3& pos )
	{
		m_position = pos;
		m_bMatrixInvalid = true;
	}
	//------------------------------------------------------------------------------------
	void Entity::SetRotation( const QUATERNION& quat )
	{
		m_rotation = quat;
		m_bMatrixInvalid = true;
	}
	//------------------------------------------------------------------------------------
	void Entity::SetScale( float scale )
	{
		m_scale.Set(scale, scale, scale);
		m_bMatrixInvalid = true;
	}
	//------------------------------------------------------------------------------------
	void Entity::SetScale(float x, float y, float z)
	{
		m_scale.Set(x, y, z);
		m_bMatrixInvalid = true;
	}
	//------------------------------------------------------------------------------------
	void Entity::SetWorldMatrix(const MAT44& mat)
	{
		m_matWorld = mat;
		m_matWorldIT = m_matWorld.Inverse();
		m_matWorldIT = m_matWorldIT.Transpose();

		m_bMatrixInvalid = false;
	}
	//------------------------------------------------------------------------------------
	const MAT44& Entity::GetWorldMatrix()
	{
		_UpdateTransform();
		return m_matWorld;
	}
	//------------------------------------------------------------------------------------
	const MAT44& Entity::GetWorldITMatrix()
	{
		_UpdateTransform();
		return m_matWorldIT;
	}
	//------------------------------------------------------------------------------------
	void Entity::_UpdateTransform()
	{
		if (m_bMatrixInvalid)
		{
			// Compose S-R-T
			MAT44 s, r, t;

			s.SetScale(m_scale);
			r.FromQuaternion(m_rotation);
			t.SetTranslation(m_position);

			m_matWorld = Common::Multiply_Mat44_By_Mat44(s, r);
			m_matWorld = Common::Multiply_Mat44_By_Mat44(m_matWorld, t);

			m_matWorldIT = m_matWorld.Inverse();
			m_matWorldIT = m_matWorldIT.Transpose();

			m_bMatrixInvalid = false;
		}
	}
	//------------------------------------------------------------------------------------
	void Entity::Update(float fDeltaTime)
	{
		_UpdateTransform();
		UpdateAABB();
	}
	//------------------------------------------------------------------------------------
	void Entity::_ComputeAABB()
	{
		AABB aabb;

		for (uint32 iSub=0; iSub<m_pMesh->GetSubMeshCount(); ++iSub)
		{
			const SubMesh* pSubMesh = m_pMesh->GetSubMesh(iSub);
			const SVertex* pVerts = pSubMesh->GetVertData().GetVertex();
			const DWORD nVert = pSubMesh->GetVertData().GetVertCount();

			for (DWORD i=0; i<nVert; ++i)
			{
				aabb.Merge(pVerts[i].pos);
			}

			// Fix: In case of AABB become a plane [2/10/2014 mavaL]
			const float fDist = 0.5f;

			if (Common::Equal(aabb.m_minCorner.x, aabb.m_maxCorner.x))
			{
				aabb.m_minCorner.x -= fDist;
				aabb.m_maxCorner.x += fDist;
			}
			if (Common::Equal(aabb.m_minCorner.y, aabb.m_maxCorner.y))
			{
				aabb.m_minCorner.y -= fDist;
				aabb.m_maxCorner.y += fDist;
			}
			if (Common::Equal(aabb.m_minCorner.z, aabb.m_maxCorner.z))
			{
				aabb.m_minCorner.z -= fDist;
				aabb.m_maxCorner.z += fDist;
			}
		}
		

		SetLocalAABB(aabb);
	}
	//------------------------------------------------------------------------------------
	void Entity::Render()
	{
		if (!GetVisible())
		{
			return;
		}

		g_env.pRenderer->GetMaterialCB().matWorld = GetWorldMatrix().Transpose();
		g_env.pRenderer->GetMaterialCB().matWorldIT = GetWorldITMatrix().Transpose();
		g_env.pRenderer->GetMaterialCB().matInvWorld = GetWorldMatrix().Inverse().Transpose();

		m_pMesh->Render(m_pMaterial);
	}
	//------------------------------------------------------------------------------------
	void Entity::RenderInstanced(const SInstanedBatch& ib)
	{
		if (!GetVisible())
		{
			return;
		}

		m_pMesh->RenderInstanced(m_pMaterial, ib);
	}
	//------------------------------------------------------------------------------------
	void Entity::SetMaterial( Material* pMaterial )
	{
		m_pMaterial = pMaterial;
	}
	//------------------------------------------------------------------------------------
	Material* Entity::GetMaterial()
	{
		return m_pMaterial;
	}
	//------------------------------------------------------------------------------------
	void Entity::UpdateAABB()
	{
		_UpdateTransform();

		//更新世界包围盒
		if (m_bUpdateAABB)
		{
			m_worldAABB = m_localAABB;
			m_worldAABB.Transform(m_matWorld);
		}
	}

}

