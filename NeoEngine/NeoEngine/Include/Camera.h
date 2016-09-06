/********************************************************************
	created:	2:7:2013   22:35
	filename	Camera.h
	author:		maval

	purpose:	摄像机类.
*********************************************************************/
#ifndef Camera_h__
#define Camera_h__

#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	class Camera
	{
	public:
		Camera();
		Camera(float fNear, float fFar, float fov, float fAspectRatio, bool bFixYaw);

	public:
		void	Update(float dt);

		void	SetNearClip(float n);
		void	SetFarClip(float f);
		void	SetAspectRatio(float r);
		void	SetPosition(const VEC3& pos);
		void	SetUp(const VEC3& v) { m_vUp = v; }
		void	SetDirection(const VEC3& dir);
		void	SetLookAt(const VEC3& v);
		void	Yaw(float angle);
		void	Pitch(float angle);
		void	Rotate(const VEC3& axis, float angle);
		void	MoveLocal(const VEC3& v);

		void	SetManualControl(bool b) { m_bManualControl = b; }
		bool	GetManualControl() const { return m_bManualControl; }
		void	SetMoveSpeed(float fSpeed) { m_moveSpeed = fSpeed; }
		void	AddMoveSpeed(float delta);
		float	GetMoveSpeed()	{ return m_moveSpeed; }
		void	SetActive(bool b) { m_bActive = b; }
		bool	GetActive() const { return m_bActive; }

		const VEC3&		GetPos() const		{ return m_viewPt;	}
		VEC3			GetDirection() const;
		VEC3			GetRight() const;
		VEC3			GetUp() const;
		float			GetNearClip() const	{ return m_nearClip; }
		float			GetFarClip() const	{ return m_farClip; }
		float			GetFov() const		{ return m_fov; }
		float			GetAspectRatio() const	{ return m_aspectRatio; }
		const VEC3*		GetWorldSpaceFrustumCorners() const;
		const PLANE&	GetFrustumPlane(int i) const;
		void			GetFarCorner(VEC4 v[4]);
		const MAT44&	GetRotation() const { return m_matRot; }

		void			SetViewMatrix(const MAT44& mat) { m_matView = mat; }
		const MAT44&	GetViewMatrix() const	{ return m_matView; }
		const MAT44&	GetProjMatrix() const	{ return m_matProj; }

		void	_BuildViewMatrix();
		void	_BuildProjMatrix();
		void	_UpdateFrustumCorners() const;
		void	_UpdateFrustumPlanes() const;

	private:
		// OIS::MouseListener
		bool	OnMouseMoved(const OIS::MouseEvent &arg);
		bool	OnMousePressed(const OIS::MouseEvent &arg, OIS::MouseButtonID id);
		bool	OnMouseReleased(const OIS::MouseEvent &arg, OIS::MouseButtonID id);
		// OIS::KeyListener
		bool	OnKeyPressed(const OIS::KeyEvent &arg);
		bool	OnKeyReleased(const OIS::KeyEvent &arg);

	private:
		VEC3	m_viewPt;

		float	m_nearClip;
		float	m_farClip;
		float	m_fov;			//xz面视野角(弧度值)
		float	m_aspectRatio;
		VEC4	m_farCorners[4];	// In view-space

		mutable VEC3	m_frustumCorners[8];	// In world-space.
		mutable PLANE	m_frustumPlanes[6];
		mutable bool	m_bFrustumPlanesDirty;
		mutable bool	m_bFrustumCornersDirty;

		bool	m_fixYawAxis;	//固定yaw轴为y轴,一般漫游相机这样就够了.飞行模拟类型的不fix,因为需要roll.
		VEC3	m_vUp;
		float	m_moveSpeed;
		bool	m_bManualControl;
		bool	m_bActive;
		bool	m_bMove[4];

		MAT44	m_matView;
		MAT44	m_matProj;
		MAT44	m_matRot;		//摄像机的世界旋转
	};
}


#endif // Camera_h__