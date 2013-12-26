#include "stdafx.h"
#include "ActionTerrainSplat.h"
#include "Manipulator/ManipulatorScene.h"



void ActionTerrainSplat::Enter()
{
	ManipulatorSystem.GetTerrain().SetTerrainSplatEnabled(true);
	m_bInSplat = false;
}

void ActionTerrainSplat::Leave()
{
	ManipulatorSystem.GetTerrain().SetTerrainSplatEnabled(false);
	m_bInSplat = false;
}

void ActionTerrainSplat::OnMouseLButtonDown( const SActionParam& param )
{
	if(!param.m_bHitTerrain)
		return;
	m_bInSplat = true;
}

void ActionTerrainSplat::OnMouseLButtonUp( const SActionParam& param )
{
	m_bInSplat = false;
}

void ActionTerrainSplat::OnMouseMove( const SActionParam& param )
{
	if(param.m_bHitTerrain)
		ManipulatorSystem.GetTerrain().SetBrushPosition(param.m_ptTerrain);
}

void ActionTerrainSplat::OnFrameMove( float dt )
{
	if(m_bInSplat)
		ManipulatorSystem.GetTerrain().OnEdit(dt);
}


