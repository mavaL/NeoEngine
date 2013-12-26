#include "stdafx.h"
#include "ManipulatorCamera.h"


ManipulatorCamera::ManipulatorCamera()
:m_bRBDown(false)
,m_bLBDown(false)
{
	Reset();
}

void ManipulatorCamera::Reset()
{
// 	m_pCamera->setFixedYawAxis(true);
// 	m_pCamera->setPosition(0,30,0);
// 	m_pCamera->lookAt(0,0,10);
// 	m_pTarget = nullptr;
 	m_type = eCameraType_FPS;
}

void ManipulatorCamera::OnLButtonDown( const SActionParam& param )
{
	m_bLBDown = true;
}

void ManipulatorCamera::OnLButtonUp( const SActionParam& param )
{
	m_bLBDown = false;
}

void ManipulatorCamera::OnRButtonDown( const SActionParam& param )
{
	m_ptLast = param.m_ptScreen;

// 	g_env.pIrrDevice->getCursorControl()->setVisible(false);
// 	g_env.pIrrDevice->getCursorControl()->setPosition(0.5f, 0.5f);
	m_bRBDown = true;
}

void ManipulatorCamera::OnRButtonUp( const SActionParam& param )
{
// 	POINT pt = m_ptLast;
// 	ScreenToClient(g_env.hwnd, &pt);
// 	g_env.pIrrDevice->getCursorControl()->setVisible(true);
// 	g_env.pIrrDevice->getCursorControl()->setPosition(pt.x, pt.y);
// 	SetCursorPos(m_ptLast.x, m_ptLast.y);
// 	m_bRBDown = false;
}

void ManipulatorCamera::OnMouseMove( const SActionParam& param )
{
	if(m_type == eCameraType_FPS && m_bRBDown)
	{
		//irr::CIrrDeviceWin32::WndProc(g_env.hwnd, WM_MOUSEMOVE, 0, MAKELPARAM(param.m_ptScreen.x, param.m_ptScreen.y));
	}
// 	else if (m_type == eCameraType_ModelViewer && m_bLBDown)
// 	{
// 		const Ogre::Vector3& targetPos = m_pTarget->getParentSceneNode()->_getDerivedPosition();
// 		const float radius = m_pCamera->getRealPosition().distance(targetPos);
// 		m_pCamera->setPosition(targetPos);
// 		m_pCamera->yaw(Ogre::Radian(-param.m_ptDeltaRel.x*5));
// 		m_pCamera->pitch(Ogre::Radian(-param.m_ptDeltaRel.y*5));
// 		m_pCamera->moveRelative(Ogre::Vector3(0,0,radius));
// 	}
}

void ManipulatorCamera::OnMouseWheel( short nNotch )
{
	//m_pCamera->move(Ogre::Vector3(0,(float)nNotch*2,0));
}

// void ManipulatorCamera::SetModelViewerTarget( Ogre::Entity* pTarget )
// {
// 	assert(pTarget);
// 	if (m_type == eCameraType_ModelViewer)
// 	{
// 		m_pCamera->setAutoTracking(true, pTarget->getParentSceneNode());
// 		m_pTarget = pTarget;
// 	}
// }

void ManipulatorCamera::SetType( eCameraType type )
{
	m_type = type;
}

void ManipulatorCamera::OnKeyDown( UINT nChar )
{
	if (m_type == eCameraType_FPS)
	{
		//irr::CIrrDeviceWin32::WndProc(g_env.hwnd, WM_KEYDOWN, nChar, 0);
	}
}

void ManipulatorCamera::OnKeyUp( UINT nChar )
{
	if (m_type == eCameraType_FPS)
	{
		//irr::CIrrDeviceWin32::WndProc(g_env.hwnd, WM_KEYUP, nChar, 0);
	}
}
