#include "stdafx.h"
#include "SkinModel.h"
#include "Mesh.h"
#include "D3D11RenderSystem.h"
#include "Material.h"
#include "MaterialManager.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	MAT44 SkeletonAnim::RecursUpdateBoneTransform(Bone* pBone)
	{
		MAT44 matParent = MAT44::IDENTITY;

		if (pBone->m_pParent)
		{
			matParent = RecursUpdateBoneTransform(pBone->m_pParent);
		}

		pBone->m_matCombine = pBone->m_matLocal * matParent;

		return pBone->m_matCombine;
	}

	//------------------------------------------------------------------------------------
	AnimKeyFrame AnimTrack::GetKf(float fTime)
	{
		AnimKeyFrame* pA = nullptr;
		AnimKeyFrame* pB = nullptr;

		for (uint32 i = 1; i < m_vecKeyFrames.size(); ++i)
		{
			if (fTime <= m_vecKeyFrames[i].m_fTime)
			{
				pB = &m_vecKeyFrames[i];
				pA = &m_vecKeyFrames[i - 1];
				break;
			}
		}

		float t = fTime - pA->m_fTime;
		AnimKeyFrame lerpKf;
		lerpKf.translate = pA->translate + t * (pB->translate - pA->translate);
		lerpKf.rotate = QUATERNION::Slerp(t, pA->rotate, pB->rotate);

		return lerpKf;
	}
	//------------------------------------------------------------------------------------
	void AnimState::Update(float dt)
	{
		if (m_pAnim)
		{
			m_fAnimTime += dt;

			// Loop?
			if (m_fAnimTime > m_pAnim->m_fLength)
			{
				if (m_bLoop)
				{
					m_fAnimTime = 0.0f;
				}
				else
				{
					m_pAnim = nullptr;
				}
			}

			for (uint32 i = 0; i < m_pAnim->m_tracks.size(); ++i)
			{
				AnimTrack* pTrack = m_pAnim->m_tracks[i];
				Bone* pBone = m_pSkeleton->m_vecBones[pTrack->m_boneId];

				AnimKeyFrame kf = pTrack->GetKf(m_fAnimTime);
				MAT44 matAnim;
				matAnim.FromQuaternion(kf.rotate);
				matAnim.SetTranslation(kf.translate);

				pBone->m_matLocal = matAnim * pBone->m_matLocal;
			}
		}
	}

	//------------------------------------------------------------------------------------
	SkeletonDebugger::SkeletonDebugger()
		:m_pMesh(nullptr)
	{
		m_pMtl = MaterialManager::GetSingleton().NewMaterial("Mtl_DebugBone", eVertexType_General);

		m_pMtl->InitShader(GetResPath("DebugSkeleton.hlsl"), GetResPath("DebugSkeleton.hlsl"), eShader_UI);
	}
	//------------------------------------------------------------------------------------
	SkeletonDebugger::~SkeletonDebugger()
	{
		SAFE_RELEASE(m_pMtl);
		SAFE_DELETE(m_pMesh);
		std::for_each(m_vecEntity.begin(), m_vecEntity.end(), std::default_delete<Entity>());
	}
	//------------------------------------------------------------------------------------
	void SkeletonDebugger::CreateBoneMesh(float fSize)
	{
		VEC3 basepos[6] =
		{
			VEC3(0, 0, 0),
			VEC3(fSize, fSize * 2, fSize),
			VEC3(-fSize, fSize * 2, fSize),
			VEC3(-fSize, fSize * 2, -fSize),
			VEC3(fSize, fSize * 2, -fSize),
			VEC3(0, 1, 0),
		};

		// Two colours so that we can distinguish the sides of the bones (we don't use any lighting on the material)
		SColor col = SColor(0.5, 0.5, 0.5, 1);
		SColor col1 = SColor(0.6, 0.6, 0.6, 1);

		SVertex vert[] =
		{
			SVertex(basepos[0], col),
			SVertex(basepos[1], col),
			SVertex(basepos[2], col),
			SVertex(basepos[0], col1),
			SVertex(basepos[2], col1),
			SVertex(basepos[3], col1),
			SVertex(basepos[0], col),
			SVertex(basepos[3], col),
			SVertex(basepos[4], col),
			SVertex(basepos[0], col1),
			SVertex(basepos[4], col1),
			SVertex(basepos[1], col1),
			SVertex(basepos[1], col),
			SVertex(basepos[5], col),
			SVertex(basepos[2], col),
			SVertex(basepos[2], col1),
			SVertex(basepos[5], col1),
			SVertex(basepos[3], col1),
			SVertex(basepos[3], col),
			SVertex(basepos[5], col),
			SVertex(basepos[4], col),
			SVertex(basepos[4], col1),
			SVertex(basepos[5], col1),
			SVertex(basepos[1], col1),
		};

		DWORD dwIndex[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23 };

		m_pMesh = new Mesh;
		SubMesh* pSubmesh = new SubMesh;

		pSubmesh->InitVertData(eVertexType_General, vert, ARRAYSIZE(vert), true);
		pSubmesh->InitIndexData(dwIndex, ARRAYSIZE(dwIndex), true);

		m_pMesh->AddSubMesh(pSubmesh);
	}
	//------------------------------------------------------------------------------------
	void SkeletonDebugger::AttachToSkinModel(SkinModel* pModel)
	{
		m_pSkeleton = pModel->GetSkeleton();
		m_matWorld = pModel->GetWorldMatrix();

		uint32 nBones = pModel->GetSkeleton()->m_vecBones.size();

		m_vecEntity.resize(nBones);

		for (uint32 i = 0; i < nBones; ++i)
		{
			Bone* pBone = m_pSkeleton->m_vecBones[i];

			Entity* pEntity = new Entity(m_pMesh);
			pEntity->SetCastShadow(false);
			pEntity->SetMaterial(m_pMtl);

			m_vecEntity[i] = pEntity;

			float fMaxLen = 0;
			for (uint32 iChild = 0; iChild < pBone->m_vecChilds.size(); ++iChild)
			{
				VEC3 v = pBone->m_vecChilds[iChild]->m_matBindPose.GetTranslation().GetVec3();

				// If the length is zero, no point in creating the bone representation
				float length = v.GetLength();
				if (length < 0.00001f)
					continue;

				fMaxLen = std::max<float>(fMaxLen, length);
			}

			if (fMaxLen >= 1e-05)
			{
				pEntity->SetScale(fMaxLen);
			}
		}
	}
	//------------------------------------------------------------------------------------
	void SkeletonDebugger::Render()
	{
		for (uint32 i = 0; i < m_vecEntity.size(); ++i)
		{
			MAT44 mat = m_pSkeleton->m_vecBones[i]->m_matInvBindPos.Inverse();

			MAT44 matScale;
			matScale.SetScale(m_vecEntity[i]->GetScale());	

			m_vecEntity[i]->SetWorldMatrix(matScale * mat * m_pSkeleton->m_vecBones[i]->m_matCombine * m_matWorld);

			m_vecEntity[i]->Render();
		}
	}

	//------------------------------------------------------------------------------------
	SkinModel::SkinModel(Mesh* pMesh, SkeletonAnim* pSkel)
		: Entity(pMesh)
		, m_pSkeleton(pSkel)
		, m_pSkelRender(nullptr)
	{
		m_animState[eAnimPart_Base].m_pSkeleton = pSkel;
		m_animState[eAnimPart_Top].m_pSkeleton = pSkel;

		for (uint32 i = 0; i < m_pSkeleton->m_vecBones.size(); ++i)
		{
			Bone* pBone = m_pSkeleton->m_vecBones[i];

			m_pSkeleton->RecursUpdateBoneTransform(pBone);
			pBone->m_matInvBindPos = pBone->m_matCombine.Inverse();
		}
	}
	//------------------------------------------------------------------------------------
	SkinModel::~SkinModel()
	{
		SAFE_DELETE(m_pSkeleton);
		SAFE_DELETE(m_pSkelRender);
	}
	//------------------------------------------------------------------------------------
	void SkinModel::PlayAnimation(eAnimPart part, const STRING& name, bool bLoop)
	{
		for (uint32 i = 0; i < m_pSkeleton->m_vecAnims.size(); ++i)
		{
			if (m_pSkeleton->m_vecAnims[i]->m_name == name)
			{
				m_animState[part].m_pAnim = m_pSkeleton->m_vecAnims[i];
				break;
			}
		}

		m_animState[part].m_fAnimTime = 0.0f;
		m_animState[part].m_bLoop = bLoop;
	}
	//------------------------------------------------------------------------------------
	void SkinModel::Update(float dt)
	{
		cBufferSkin& cSkin = g_env.pRenderSystem->GetSkinCB();

		for (uint32 i = 0; i < m_pSkeleton->m_vecBones.size(); ++i)
		{
			Bone* pBone = m_pSkeleton->m_vecBones[i];
			pBone->m_matLocal = pBone->m_matBindPose;
		}

		m_animState[eAnimPart_Base].Update(dt);
		m_animState[eAnimPart_Top].Update(dt);

		for (uint32 i = 0; i < m_pSkeleton->m_vecBones.size(); ++i)
		{
			Bone* pBone = m_pSkeleton->m_vecBones[i];
			pBone->m_bMatCombineValid = false;
			m_pSkeleton->RecursUpdateBoneTransform(pBone);
		}

		Entity::Update(dt);
	}
	//------------------------------------------------------------------------------------
	void SkinModel::Render()
	{
		cBufferSkin& cSkin = g_env.pRenderSystem->GetSkinCB();

		for (uint32 i = 0; i < m_pSkeleton->m_vecBones.size(); ++i)
		{
			Bone* pBone = m_pSkeleton->m_vecBones[i];

			if (!pBone->m_bMatCombineValid)
			{
				pBone->m_matCombine = pBone->m_matInvBindPos * pBone->m_matCombine;
				pBone->m_bMatCombineValid = true;
			}

			cSkin.matSkin[pBone->m_id] = pBone->m_matCombine.Transpose();
		}

		g_env.pRenderSystem->UpdateSkinCBuffer();

		Entity::Render();
	}
	//------------------------------------------------------------------------------------
	void SkinModel::DebugRender()
	{
		if (m_pSkelRender)
		{
			m_pSkelRender->Render();
		}
	}

	void SkinModel::ShowBones(bool bShow)
	{
		if (bShow && !m_pSkelRender)
		{
			m_pSkelRender = new SkeletonDebugger;
			m_pSkelRender->CreateBoneMesh(0.1f);
			m_pSkelRender->AttachToSkinModel(this);
		}
	}

}

