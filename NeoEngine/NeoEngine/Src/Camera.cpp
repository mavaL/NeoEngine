#include "stdafx.h"
#include "Camera.h"
#include <D3DX10math.h>
#include "SceneManager.h"
#include "InputManager.h"

namespace Neo
{
	Camera::Camera()
		: m_viewPt(VEC3::ZERO)
		, m_nearClip(1)
		, m_farClip(1000)
		, m_aspectRatio(0)
		, m_fixYawAxis(true)
		, m_moveSpeed(1.0f)
		, m_bManualControl(false)
		, m_bFrustumPlanesDirty(true)
		, m_bFrustumCornersDirty(true)
		, m_vUp(VEC3::UNIT_Y)
		, m_bActive(false)
	{
		m_fov = Common::Angle_To_Radian(45);

		m_bMove[0] = m_bMove[1] = m_bMove[2] = m_bMove[3] = false;

		g_env.pInputSystem->m_MouseMoveSignal += Common::slot(this, &Camera::OnMouseMoved);
		g_env.pInputSystem->m_MousePressedSignal += Common::slot(this, &Camera::OnMousePressed);
		g_env.pInputSystem->m_MouseReleasedSignal += Common::slot(this, &Camera::OnMouseReleased);
		g_env.pInputSystem->m_KeyPressedSignal += Common::slot(this, &Camera::OnKeyPressed);
		g_env.pInputSystem->m_KeyReleasedSignal += Common::slot(this, &Camera::OnKeyReleased);
	}

	Camera::Camera(float fNear, float fFar, float fov, float fAspectRatio, bool bFixYaw)
		: m_nearClip(fNear)
		, m_farClip(fFar)
		, m_aspectRatio(fAspectRatio)
		, m_fixYawAxis(bFixYaw)
		, m_vUp(VEC3::UNIT_Y)
		, m_bManualControl(false)
		, m_bActive(false)
	{
		m_fov = Common::Angle_To_Radian(fov);
		_BuildProjMatrix();

		m_bMove[0] = m_bMove[1] = m_bMove[2] = m_bMove[3] = false;

		g_env.pInputSystem->m_MouseMoveSignal += Common::slot(this, &Camera::OnMouseMoved);
		g_env.pInputSystem->m_MousePressedSignal += Common::slot(this, &Camera::OnMousePressed);
		g_env.pInputSystem->m_MouseReleasedSignal += Common::slot(this, &Camera::OnMouseReleased);
		g_env.pInputSystem->m_KeyPressedSignal += Common::slot(this, &Camera::OnKeyPressed);
		g_env.pInputSystem->m_KeyReleasedSignal += Common::slot(this, &Camera::OnKeyReleased);
	}

	void Camera::Update()
	{
		_BuildViewMatrix();

		if (!GetActive())
		{
			return;
		}

		// Camera movement
		const VEC3 forward = GetDirection();
		const VEC3 right = GetRight();

		if (m_bMove[0])
		{
			m_viewPt += forward * m_moveSpeed;
		}
		if (m_bMove[1])
		{
			m_viewPt -= right * m_moveSpeed;
		}
		if (m_bMove[2])
		{
			m_viewPt -= forward * m_moveSpeed;
		}
		if (m_bMove[3])
		{
			m_viewPt += right * m_moveSpeed;
		}
	}

	void Camera::SetPosition( const VEC3& pos )
	{
		m_viewPt = pos;
	}

	void Camera::SetDirection( const VEC3& dir )
	{
		VEC3 zAxis(dir);
		zAxis.Normalize();

		VEC3 xAxis, yAxis;
		xAxis = Common::CrossProduct_Vec3_By_Vec3(m_fixYawAxis ? VEC3::UNIT_Y : m_vUp, zAxis);
		xAxis.Normalize();

		yAxis = Common::CrossProduct_Vec3_By_Vec3(zAxis, xAxis);
		yAxis.Normalize();

		m_matRot.FromAxises(xAxis, yAxis, zAxis);
	}

	void Camera::_BuildViewMatrix()
	{
		m_matView = m_matRot.Transpose();

		VEC4 trans;
		trans = Common::Transform_Vec3_By_Mat44(m_viewPt, m_matView, true);
		trans.Neg();
		m_matView.SetTranslation(trans.GetVec3());

		m_bFrustumCornersDirty = true;
		m_bFrustumPlanesDirty = true;
	}

	void Camera::_BuildProjMatrix()
	{
		/*	这是第一个版本的透视投影矩阵,即"蛮干"求解法.
		它的缺陷在于为了变换出xy坐标都在[-1, 1]的CVV空间,
		必须满足以下条件:
		1.视距d=1.
		2.fov=90度.
		3.视口AspectRatio=1.
		否则变换不出CVV.

		MatProj = ( 1, 0,	0,	0
		0, 1,	0,	0
		0,  0,	1,	0
		0,  0, 1/d,  0 )

		投影变换加齐次除法后:
		x' = x * d / z, y' = y * d / z	*/

		//普适版投影矩阵.推导见: http://blog.csdn.net/popy007/article/details/1797121
		float r,l,t,b;
		r = m_nearClip*tanf(m_fov/2);
		l = -r;
		t = r/m_aspectRatio;
		b= -t;

		m_matProj.m00 = 2*m_nearClip/(r-l);
		m_matProj.m01 = 0;
		m_matProj.m02 = 0;
		m_matProj.m03 = 0;

		m_matProj.m10 = 0;
		m_matProj.m11 = 2*m_nearClip/(t-b);
		m_matProj.m12 = 0;
		m_matProj.m13 = 0;

		m_matProj.m20 = (r+l)/(l-r);
		m_matProj.m21 = (t+b)/(b-t);
		m_matProj.m22 = m_farClip/(m_farClip-m_nearClip);
		m_matProj.m23 = 1;

		m_matProj.m30 = 0;
		m_matProj.m31 = 0;
		m_matProj.m32 = -m_farClip*m_nearClip/(m_farClip-m_nearClip);
		m_matProj.m33 = 0;

		m_bFrustumCornersDirty = true;
		m_bFrustumPlanesDirty = true;

		// Extract far corners
		float halfWidth = m_farClip * tanf(0.5f*m_fov);
		float halfHeight = halfWidth / m_aspectRatio;

		m_farCorners[0].Set(-halfWidth, +halfHeight, m_farClip, 0.0f);
		m_farCorners[1].Set(+halfWidth, +halfHeight, m_farClip, 0.0f);
		m_farCorners[2].Set(-halfWidth, -halfHeight, m_farClip, 0.0f);
		m_farCorners[3].Set(+halfWidth, -halfHeight, m_farClip, 0.0f);
	}

	VEC3 Camera::GetDirection() const
	{
		VEC3 vDir = Common::Transform_Vec3_By_Mat44(VEC3::UNIT_Z, m_matRot, false).GetVec3();
		vDir.Normalize();

		return vDir;
	}

	VEC3 Camera::GetRight() const	
	{
		VEC3 vRight = Common::Transform_Vec3_By_Mat44(VEC3::UNIT_X, m_matRot, false).GetVec3();
		vRight.Normalize();

		return vRight;
	}

	VEC3 Camera::GetUp() const
	{
		VEC3 vUp = Common::Transform_Vec3_By_Mat44(VEC3::UNIT_Y, m_matRot, false).GetVec3();
		vUp.Normalize();

		return vUp;
	}

	void Camera::Yaw( float angle )
	{
		MAT44 rot;
		rot.FromAxisAngle(VEC3::UNIT_Y, angle);
		if(m_fixYawAxis)	m_matRot = Common::Multiply_Mat44_By_Mat44(m_matRot, rot);
		else				m_matRot = Common::Multiply_Mat44_By_Mat44(rot, m_matRot);
	}

	void Camera::Pitch(float angle)
	{
		MAT44 rot;
		rot.FromAxisAngle(VEC3::UNIT_X, angle);
		m_matRot = Common::Multiply_Mat44_By_Mat44(rot, m_matRot);
	}

	void Camera::AddMoveSpeed( float delta )
	{
		m_moveSpeed += delta;
		m_moveSpeed = Clamp(m_moveSpeed, 0.1f, 10.0f);
	}

	void Camera::SetNearClip( float n )
	{
		m_nearClip = n;
		_BuildProjMatrix();
	}

	void Camera::SetFarClip( float f )
	{
		m_farClip = f;
		_BuildProjMatrix();
	}

	void Camera::SetAspectRatio( float r )
	{
		m_aspectRatio = r;
		_BuildProjMatrix();
	}

	const VEC3* Camera::GetWorldSpaceFrustumCorners() const
	{
		if (m_bFrustumCornersDirty)
		{
			_UpdateFrustumCorners();
			m_bFrustumCornersDirty = false;
		}

		return m_frustumCorners;
	}

	void Camera::_UpdateFrustumCorners() const
	{
		assert(m_aspectRatio != 0);
		assert(m_farClip != 0);

		float nf = m_nearClip / m_farClip;
		float halfWidthFar = m_farClip * tanf(0.5f*m_fov);
		float halfHeightFar = halfWidthFar / m_aspectRatio;
		float halfWidthNear = halfWidthFar * nf;
		float halfHeightNear = halfWidthNear / m_aspectRatio;

		m_frustumCorners[0].Set(+halfWidthNear, +halfHeightNear, m_nearClip);
		m_frustumCorners[1].Set(-halfWidthNear, +halfHeightNear, m_nearClip);
		m_frustumCorners[2].Set(-halfWidthNear, -halfHeightNear, m_nearClip);
		m_frustumCorners[3].Set(+halfWidthNear, -halfHeightNear, m_nearClip);

		m_frustumCorners[4].Set(+halfWidthFar, +halfHeightFar, m_farClip);
		m_frustumCorners[5].Set(-halfWidthFar, +halfHeightFar, m_farClip);
		m_frustumCorners[6].Set(-halfWidthFar, -halfHeightFar, m_farClip);
		m_frustumCorners[7].Set(+halfWidthFar, -halfHeightFar, m_farClip);

		MAT44 matInvView = m_matView.Inverse();

		for (uint32 i = 0; i < 8; ++i)
		{
			m_frustumCorners[i] = Common::Transform_Vec3_By_Mat44(m_frustumCorners[i], matInvView, true).GetVec3();
		}
	}

	void Camera::_UpdateFrustumPlanes() const
	{
		MAT44 matCombo = m_matView * m_matProj;

		// Left clipping plane
		m_frustumPlanes[0].n.x = matCombo.m03 + matCombo.m00;
		m_frustumPlanes[0].n.y = matCombo.m13 + matCombo.m10;
		m_frustumPlanes[0].n.z = matCombo.m23 + matCombo.m20;
		m_frustumPlanes[0].d = matCombo.m33 + matCombo.m30;

		// Right clipping plane
		m_frustumPlanes[1].n.x = matCombo.m03 - matCombo.m00;
		m_frustumPlanes[1].n.y = matCombo.m13 - matCombo.m10;
		m_frustumPlanes[1].n.z = matCombo.m23 - matCombo.m20;
		m_frustumPlanes[1].d = matCombo.m33 - matCombo.m30;

		// Top clipping plane
		m_frustumPlanes[2].n.x = matCombo.m03 - matCombo.m01;
		m_frustumPlanes[2].n.y = matCombo.m13 - matCombo.m11;
		m_frustumPlanes[2].n.z = matCombo.m23 - matCombo.m21;
		m_frustumPlanes[2].d = matCombo.m33 - matCombo.m31;

		// Bottom clipping plane
		m_frustumPlanes[3].n.x = matCombo.m03 + matCombo.m01;
		m_frustumPlanes[3].n.y = matCombo.m13 + matCombo.m11;
		m_frustumPlanes[3].n.z = matCombo.m23 + matCombo.m21;
		m_frustumPlanes[3].d = matCombo.m33 + matCombo.m31;

		// Near clipping plane
		m_frustumPlanes[4].n.x = matCombo.m02;
		m_frustumPlanes[4].n.y = matCombo.m12;
		m_frustumPlanes[4].n.z = matCombo.m22;
		m_frustumPlanes[4].d = matCombo.m32;

		// Far clipping plane
		m_frustumPlanes[5].n.x = matCombo.m03 - matCombo.m02;
		m_frustumPlanes[5].n.y = matCombo.m13 - matCombo.m12;
		m_frustumPlanes[5].n.z = matCombo.m23 - matCombo.m22;
		m_frustumPlanes[5].d = matCombo.m33 - matCombo.m32;

		// Normalize planes
		for (int i = 0; i < 6; ++i)
		{
			float fLen = m_frustumPlanes[i].n.Normalize();
			m_frustumPlanes[i].d /= fLen;
		}
	}

	const PLANE& Camera::GetFrustumPlane(int i) const
	{
		if (m_bFrustumPlanesDirty)
		{
			_UpdateFrustumPlanes();
			m_bFrustumPlanesDirty = false;
		}
		
		return m_frustumPlanes[i];
	}

	void Camera::GetFarCorner(VEC4 v[4])
	{
		memcpy(v, m_farCorners, sizeof(VEC4) * 4);
	}

	void Camera::MoveLocal(const VEC3& v)
	{
		VEC3 vLocal = Common::Transform_Vec3_By_Mat44(v, m_matRot, false).GetVec3();
		m_viewPt += vLocal;
	}

	void Camera::Rotate(const VEC3& axis, float angle)
	{
		MAT44 rot;
		rot.FromAxisAngle(axis, angle);
		m_matRot = Common::Multiply_Mat44_By_Mat44(rot, m_matRot);
	}

	bool Camera::OnMouseMoved(const OIS::MouseEvent &arg)
	{
		if (m_bManualControl || !m_bActive)
		{
			return false;
		}

		int dx = arg.state.X.rel;
		int dy = arg.state.Y.rel;
		float fYaw = dx / 5.0f;
		float fPitch = dy / 5.0f;

		if (dx)
		{
			Yaw(fYaw);
		}
		if (dy)
		{
			MAT44 rotX;
			rotX.FromAxisAngle(VEC3::UNIT_X, fPitch);
			//pitch
			m_matRot = Common::Multiply_Mat44_By_Mat44(rotX, m_matRot);
		}

		return true;
	}

	bool Camera::OnMousePressed(const OIS::MouseEvent &arg, OIS::MouseButtonID id)
	{
		if (!GetManualControl() && id == OIS::MB_Left)
		{
			SetActive(true);
		}
		return true;
	}

	bool Camera::OnMouseReleased(const OIS::MouseEvent &arg, OIS::MouseButtonID id)
	{
		if (!GetManualControl() && id == OIS::MB_Left)
		{
			SetActive(false);
			m_bMove[0] = m_bMove[1] = m_bMove[2] = m_bMove[3] = false;
		}
		return true;
	}

	bool Camera::OnKeyPressed(const OIS::KeyEvent &arg)
	{
		if (m_bManualControl || !m_bActive)
		{
			return false;
		}

		switch (arg.key)
		{
		case OIS::KC_W:	m_bMove[0] = true; break;
		case OIS::KC_A:	m_bMove[1] = true; break;
		case OIS::KC_S:	m_bMove[2] = true; break;
		case OIS::KC_D: m_bMove[3] = true; break;
		default: break;
		}

		return true;
	}

	bool Camera::OnKeyReleased(const OIS::KeyEvent &arg)
	{
		if (m_bManualControl || !m_bActive)
		{
			return false;
		}

		switch (arg.key)
		{
		case OIS::KC_W:	m_bMove[0] = false; break;
		case OIS::KC_A:	m_bMove[1] = false; break;
		case OIS::KC_S:	m_bMove[2] = false; break;
		case OIS::KC_D: m_bMove[3] = false; break;
		default: break;
		}

		return true;
	}
	//------------------------------------------------------------------------------------
	void Camera::SetLookAt(const VEC3& v)
	{
		SetDirection(v - m_viewPt);
	}

}






