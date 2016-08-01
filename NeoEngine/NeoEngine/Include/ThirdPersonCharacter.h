/********************************************************************
	created:	2016/07/28 16:45
	filename	ThirdPersonCharacter.h
	author:		maval

	purpose:	Character controller using a third-person view camera.
*********************************************************************/
#ifndef ThirdPersonCharacter_h__
#define ThirdPersonCharacter_h__


#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	class ThirdPersonCharacter
	{
	public:
		ThirdPersonCharacter();
		~ThirdPersonCharacter();

	public:
		void				Init(SkinModel* pModel, Camera* pCamera, const VEC3& vAttachPos);
		void				Update(float dt);
		SkinModel*			GetModel() { return m_pModel; }

	private:
		StateMachine*		m_pStateMachine;
		SkinModel*			m_pModel;
		Camera*				m_pCamera;			// Obrit-style camera
		VEC3				m_vAttachPos;
	};
}

#endif // ThirdPersonCharacter_h__
