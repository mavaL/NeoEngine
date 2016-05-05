#include "stdafx.h"
#include "Camera.h"

namespace Neo
{
	Camera::Camera()
		:m_viewPt(VEC3::ZERO)
		,m_nearClip(1)
		,m_farClip(1000)
		,m_aspectRatio(0)
		,m_fixYawAxis(true)
		,m_moveSpeed(1.0f)
		,m_bActive(false)
		,m_bFrustumPlanesDirty(true)
		,m_bFrustumCornersDirty(true)
	{
		m_fov = Common::Angle_To_Radian(45);
	}

	void Camera::Update()
	{
		_BuildViewMatrix();

		//更新输入
		POINT curCursorPos;
		GetCursorPos(&curCursorPos);
		static POINT lastCursorPos = curCursorPos;

		long dx = curCursorPos.x - lastCursorPos.x;
		long dy = curCursorPos.y - lastCursorPos.y;

		float yawDelta = 0, pitchDelta = 0;
		if(dx) yawDelta = dx/5.0f;
		if(dy) pitchDelta = dy/5.0f;

		lastCursorPos = curCursorPos;

		if(!m_bActive)
			return;

		//相机旋转
		if(dx)
		{
			Yaw(yawDelta);
		}
		if(dy)
		{
			MAT44 rotX;
			rotX.FromAxisAngle(VEC3::UNIT_X, pitchDelta);
			//pitch
			m_matRot = Common::Multiply_Mat44_By_Mat44(rotX, m_matRot);
		}

		//相机移动
		VEC3 forward = GetDirection();
		VEC3 right = GetRight();

		forward = Common::Multiply_Vec3_By_K(forward, m_moveSpeed);
		right = Common::Multiply_Vec3_By_K(right, m_moveSpeed);

		if(GetAsyncKeyState('W') < 0)		m_viewPt = Add_Vec3_By_Vec3(m_viewPt, forward);
		else if(GetAsyncKeyState('S') < 0)	m_viewPt = Sub_Vec3_By_Vec3(m_viewPt, forward);
		if(GetAsyncKeyState('A') < 0)		m_viewPt = Sub_Vec3_By_Vec3(m_viewPt, right);
		else if(GetAsyncKeyState('D') < 0)	m_viewPt = Add_Vec3_By_Vec3(m_viewPt, right);
	}

	void Camera::SetPosition( const VEC3& pos )
	{
		m_viewPt = pos;
	}

	void Camera::SetDirection( const VEC3& dir )
	{
		assert(m_fixYawAxis && "Error! Currently only support fix yaw axis mode..");

		VEC3 zAxis(dir);
		zAxis.Normalize();

		VEC3 xAxis, yAxis;
		xAxis = Common::CrossProduct_Vec3_By_Vec3(VEC3::UNIT_Y, zAxis);
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
		return Common::Transform_Vec3_By_Mat44(VEC3::UNIT_Z, m_matRot, false).GetVec3();
	}

	VEC3 Camera::GetRight() const	
	{
		return Common::Transform_Vec3_By_Mat44(VEC3::UNIT_X, m_matRot, false).GetVec3();
	}

	void Camera::Yaw( float angle )
	{
		MAT44 rot;
		rot.FromAxisAngle(VEC3::UNIT_Y, angle);
		if(m_fixYawAxis)	m_matRot = Common::Multiply_Mat44_By_Mat44(m_matRot, rot);
		else				m_matRot = Common::Multiply_Mat44_By_Mat44(rot, m_matRot);
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
		memcpy(v, m_farCorners, sizeof(v));
	}

}






