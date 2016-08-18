/********************************************************************
	created:	2016/07/22 18:26
	filename	SkinModel.h
	author:		maval

	purpose:	Skined model.
*********************************************************************/
#ifndef SkinModel_h__
#define SkinModel_h__

#include "Prerequiestity.h"
#include "Entity.h"

namespace Neo
{
	enum eAnimPart
	{
		eAnimPart_Base = 0,		// Animation of full/lower body.
		eAnimPart_Top,			// Animation of upper body.
		eAnimPart_Count,
	};
	//------------------------------------------------------------------------------------
	class Bone
	{
	public:
		Bone() { m_pParent = nullptr; m_bMatCombineValid = false; }
		~Bone() {}

		uint32		m_id;
		STRING		m_name;
		MAT44		m_matLocal;
		MAT44		m_matCombine;		// accumulated transformations to root bone.
		MAT44		m_matBindPose;		// local binding pose
		MAT44		m_matInvBindPos;	// Inverse binding pose from root to local
		bool		m_bMatCombineValid;
		Bone*		m_pParent;
		std::vector<Bone*> m_vecChilds;
	};
	//------------------------------------------------------------------------------------
	class AnimKeyFrame
	{
	public:
		float		m_fTime;
		VEC3		translate;
		QUATERNION	rotate;
	};
	//------------------------------------------------------------------------------------
	class AnimTrack
	{
	public:
		AnimTrack() {}
		~AnimTrack() {}

		AnimKeyFrame		GetKf(float fTime);

		uint32		m_boneId;
		std::vector<AnimKeyFrame>	m_vecKeyFrames;
	};
	//------------------------------------------------------------------------------------
	class AnimClip
	{
	public:
		AnimClip() {}
		~AnimClip()
		{
			std::for_each(m_tracks.begin(), m_tracks.end(), std::default_delete<AnimTrack>());
		}

		STRING						m_name;
		float						m_fLength;
		std::vector<AnimTrack*>		m_tracks;
	};
	//------------------------------------------------------------------------------------
	class SkeletonAnim
	{
	public:
		SkeletonAnim() {}
		~SkeletonAnim()
		{
			std::for_each(m_vecBones.begin(), m_vecBones.end(), std::default_delete<Bone>());
			std::for_each(m_vecAnims.begin(), m_vecAnims.end(), std::default_delete<AnimClip>());
		}

		MAT44	RecursUpdateBoneTransform(Bone* pBone);

		std::vector<Bone*>			m_vecBones;
		std::vector<AnimClip*>		m_vecAnims;
	};
	//------------------------------------------------------------------------------------
	class AnimState
	{
	public:
		AnimState() :m_pAnim(nullptr),m_fAnimTime(0),m_bLoop(false) {}
		~AnimState() {}

		void				Update(float dt);

		SkeletonAnim*		m_pSkeleton;
		AnimClip*			m_pAnim;
		float				m_fAnimTime;
		bool				m_bLoop;
	};
	//------------------------------------------------------------------------------------
	class SkinModel : public Entity
	{
	public:
		SkinModel(Mesh* pMesh, SkeletonAnim* pSkel);
		~SkinModel();

	public:
		virtual void	Update(float dt);
		virtual void	Render();
		virtual void	DebugRender();

		// Play 
		void			PlayAnimation(eAnimPart part, const STRING& name, bool bLoop);

		void			ShowBones(bool bShow);
		SkeletonAnim*	GetSkeleton() { return m_pSkeleton; }
		AnimState&		GetAnimState(eAnimPart part) { return m_animState[part]; }

	private:
		SkeletonAnim*		m_pSkeleton;
		AnimState			m_animState[eAnimPart_Count];
		SkeletonDebugger*	m_pSkelRender;
	};
	//------------------------------------------------------------------------------------
	class SkeletonDebugger
	{
	public:
		SkeletonDebugger();
		~SkeletonDebugger();

	public:
		void		CreateBoneMesh(float fSize);
		void		AttachToSkinModel(SkinModel* pModel);
		void		Render();

	private:
		MAT44					m_matWorld;
		SkeletonAnim*			m_pSkeleton;
		Mesh*					m_pMesh;
		std::vector<Entity*>	m_vecEntity;
		Material*				m_pMtl;
	};

}


#endif // SkinModel_h__