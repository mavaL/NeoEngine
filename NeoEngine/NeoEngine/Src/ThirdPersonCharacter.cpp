#include "stdafx.h"
#include "ThirdPersonCharacter.h"
#include "Camera.h"
#include "SkinModel.h"
#include "StateMachine/StateMachine.h"
#include "SceneManager.h"
#include "InputManager.h"

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
		const char* getStateName() const { return "IdleState"; }

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
		const char* getStateName() const { return "MoveState"; }

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

		g_env.pInputSystem->m_KeyPressedSignal += Common::slot(this, &ThirdPersonCharacter::OnKeyPressed);
		g_env.pInputSystem->m_KeyReleasedSignal += Common::slot(this, &ThirdPersonCharacter::OnKeyReleased);
		g_env.pInputSystem->m_MouseMoveSignal += Common::slot(this, &ThirdPersonCharacter::OnMouseMoved);
	}
	//------------------------------------------------------------------------------------
	static VEC3 g_vMoveDir = VEC3::ZERO;
	static bool g_bMove = false;
	static float g_fRotation = 0;

	void ThirdPersonCharacter::Update(float dt)
	{
		if (!m_pCamera->GetManualControl())
		{
			return;
		}

		if (g_bMove)
		{
			m_pStateMachine->tryChangeState("Move");

			// Only want camera's direction
			MAT44 matCamOnlyZ = m_pCamera->GetRotation();
			matCamOnlyZ.SetRow(1, VEC4(0, 1, 0, 0));
			VEC3 vX = Common::CrossProduct_Vec3_By_Vec3(VEC3::UNIT_Y, m_pCamera->GetDirection());
			matCamOnlyZ.SetRow(0, VEC4(vX, 0));

			VEC3 vRelMoveDir = Common::Transform_Vec3_By_Mat44(g_vMoveDir, matCamOnlyZ, false).GetVec3();
			vRelMoveDir.Normalize();

			VEC3 vPos = m_pModel->GetPosition();
			vPos += vRelMoveDir * dt * 50;
			m_pModel->SetPosition(vPos);

			QUATERNION quatCam;
			quatCam.FromRotationMatrix(matCamOnlyZ);
			QUATERNION quat(VEC3::UNIT_Y, g_fRotation);
			m_pModel->SetRotation(quat * quatCam);
		}

		// Clamp to terrain surface
		//Terrain* pTerrain = g_env.pSceneMgr->GetTerrain();
		//if (pTerrain)
		//{
		//	VEC3 vPos = m_pModel->GetPosition();
		//	float fTerrainHeight = pTerrain->GetHeightAt(vPos);
		//	vPos.y = fTerrainHeight + 2;

		//	m_pModel->SetPosition(vPos);
		//}

		m_pCamera->SetPosition(m_pModel->GetPosition());
		m_pCamera->MoveLocal(VEC3(0, 0, m_vAttachPos.z));

		STRING& str = g_env.pSceneMgr->GetHeroStateChangeStr();
		char szBuf[64];
		sprintf_s(szBuf, 64, "%s : %.2f", m_pStateMachine->getCurState()->getStateName(), m_pModel->GetAnimState(eAnimPart_Top).m_fAnimTime);
		str = szBuf;
	}
	//------------------------------------------------------------------------------------
	bool ThirdPersonCharacter::OnMouseMoved(const OIS::MouseEvent &arg)
	{
		if (!m_pCamera->GetManualControl())
		{
			return false;
		}

		// Update camera
		long dx = arg.state.X.rel;
		long dy = arg.state.Y.rel;

		float yawDelta = 0, pitchDelta = 0;
		if (dx) yawDelta = dx / 5.0f;
		if (dy) pitchDelta = dy / 5.0f;


		VEC3 vCamToModel = m_pCamera->GetPos() - m_pModel->GetPosition();

		m_pCamera->SetPosition(m_pModel->GetPosition());
		m_pCamera->Yaw(yawDelta);
		m_pCamera->Pitch(pitchDelta);
		m_pCamera->MoveLocal(VEC3(0, 0, m_vAttachPos.z));

		return true;
	}
	//------------------------------------------------------------------------------------
	bool ThirdPersonCharacter::OnKeyPressed(const OIS::KeyEvent &arg)
	{
		if (!m_pCamera->GetManualControl())
		{
			return false;
		}

		g_vMoveDir = VEC3::ZERO;

		// Update controller
		if (arg.key == OIS::KC_W)
		{
			g_bMove = true;
			g_vMoveDir.z = 1.0f;
			g_fRotation = 0.0f;
		}
		else if (arg.key == OIS::KC_A)
		{
			g_bMove = true;
			g_vMoveDir.x = -1.0f;
			g_fRotation = -90.0f;
		}
		else if (arg.key == OIS::KC_S)
		{
			g_bMove = true;
			g_vMoveDir.z = -1.0f;
			g_fRotation = 180.0f;
		}
		else if (arg.key == OIS::KC_D)
		{
			g_bMove = true;
			g_vMoveDir.x = 1.0f;
			g_fRotation = 90.0f;
		}

		return true;
	}
	//------------------------------------------------------------------------------------
	bool ThirdPersonCharacter::OnKeyReleased(const OIS::KeyEvent &arg)
	{
		if (!m_pCamera->GetManualControl())
		{
			return false;
		}

		switch (arg.key)
		{
		case OIS::KC_W:
		case OIS::KC_A:
		case OIS::KC_S:
		case OIS::KC_D: g_bMove = false; m_pStateMachine->tryChangeState("Idle"); break;
		default: break;
		}

		return true;
	}

}

