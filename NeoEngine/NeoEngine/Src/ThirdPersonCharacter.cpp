#include "stdafx.h"
#include "ThirdPersonCharacter.h"
#include "Camera.h"
#include "SkinModel.h"
#include "StateMachine/StateMachine.h"
#include "Terrain.h"
#include "SceneManager.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	class CharIdleState : public BaseState
	{
	public:
		DECLARE_STATE_CLASS(CharIdleState, StateMachine)

		void enter();
		void exit();
		void update(float dt);

	private:

	};

	void CharIdleState::enter()
	{
		m_pChar->GetModel()->PlayAnimation(eAnimPart_Top, "IdleTop", true);
		m_pChar->GetModel()->PlayAnimation(eAnimPart_Base, "IdleBase", true);
	}

	void CharIdleState::exit()
	{

	}

	void CharIdleState::update(float timeSinceLastFrame)
	{

	}
	//------------------------------------------------------------------------------------
	class CharMoveState : public BaseState
	{
	public:
		DECLARE_STATE_CLASS(CharMoveState, StateMachine)

		void enter();
		void exit();
		void update(float dt);

	private:

	};

	void CharMoveState::enter()
	{
		m_pChar->GetModel()->PlayAnimation(eAnimPart_Top, "RunTop", true);
		m_pChar->GetModel()->PlayAnimation(eAnimPart_Base, "RunBase", true);
	}

	void CharMoveState::exit()
	{

	}

	void CharMoveState::update(float timeSinceLastFrame)
	{

	}


	//------------------------------------------------------------------------------------
	ThirdPersonCharacter::ThirdPersonCharacter()
		: m_pModel(nullptr)
		, m_pCamera(nullptr)
		, m_pStateMachine(nullptr)
	{
	}
	//------------------------------------------------------------------------------------
	ThirdPersonCharacter::~ThirdPersonCharacter()
	{
		SAFE_DELETE(m_pStateMachine);
	}
	//------------------------------------------------------------------------------------
	void ThirdPersonCharacter::Init(SkinModel* pModel, Camera* pCamera, const VEC3& vAttachPos)
	{
		m_pModel = pModel;
		m_pCamera = pCamera;
		m_vAttachPos = vAttachPos;

		m_pCamera->SetManualControl(true);
		m_pCamera->SetPosition(m_vAttachPos + pModel->GetPosition());

		m_pStateMachine = new StateMachine(this);

		CharIdleState::create(m_pStateMachine, "Idle");
		CharMoveState::create(m_pStateMachine, "Move");

		m_pStateMachine->changeState("Idle");
	}
	//------------------------------------------------------------------------------------
	void ThirdPersonCharacter::Update(float dt)
	{
		if (!m_pCamera->GetManualControl())
		{
			return;
		}

		// Update controller
		VEC3 vMoveDir = VEC3::ZERO;
		bool bMove = false;
		static float fRotate = 0.0f;

		if (::GetAsyncKeyState('W') & 0x8000)
		{
			bMove = true;
			vMoveDir.z = 1.0f;
			fRotate = 0.0f;
		}
		else if (::GetAsyncKeyState('A') & 0x8000)
		{
			bMove = true;
			vMoveDir.x = -1.0f;
			fRotate = -90.0f;
		}
		else if (::GetAsyncKeyState('S') & 0x8000)
		{
			bMove = true;
			vMoveDir.z = -1.0f;
			fRotate = 180.0f;
		}
		else if (::GetAsyncKeyState('D') & 0x8000)
		{
			bMove = true;
			vMoveDir.x = 1.0f;
			fRotate = 90.0f;
		}
		else
		{
			m_pStateMachine->tryChangeState("Idle");
		}

		if (bMove)
		{
			m_pStateMachine->tryChangeState("Move");

			VEC3 vPos = m_pModel->GetPosition();
			vPos += vMoveDir * dt * 10;
			m_pModel->SetPosition(vPos);

			QUATERNION rot(VEC3::UNIT_Y, fRotate);
			m_pModel->SetRotation(rot);
		}

		// Clamp to terrain surface
		Terrain* pTerrain = g_env.pSceneMgr->GetTerrain();
		if (pTerrain)
		{
			VEC3 vPos = m_pModel->GetPosition();
			float fTerrainHeight = pTerrain->GetHeightAt(vPos);
			vPos.y = fTerrainHeight + 2;

			m_pModel->SetPosition(vPos);
		}

		// Update camera
		POINT curCursorPos;
		GetCursorPos(&curCursorPos);
		static POINT lastCursorPos = curCursorPos;

		long dx = curCursorPos.x - lastCursorPos.x;
		long dy = curCursorPos.y - lastCursorPos.y;

		float yawDelta = 0, pitchDelta = 0;
		if (dx) yawDelta = dx / 5.0f;
		if (dy) pitchDelta = dy / 5.0f;

		lastCursorPos = curCursorPos;

		VEC3 vCamToModel = m_pCamera->GetPos() - m_pModel->GetPosition();

		m_pCamera->SetPosition(m_pModel->GetPosition());
		m_pCamera->Yaw(yawDelta);
		m_pCamera->Pitch(pitchDelta);
		m_pCamera->MoveLocal(VEC3(0, 0, m_vAttachPos.z));

		m_pCamera->_BuildViewMatrix();
	}

}

