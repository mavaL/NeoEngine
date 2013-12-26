#include "stdafx.h"
#include "ActionTerrainDeform.h"
#include "Manipulator/ManipulatorScene.h"



void ActionTerrainDeform::Enter()
{
	ManipulatorSystem.GetTerrain().SetTerrainDeformEnabled(true);
	m_bInDeform = false;
}

void ActionTerrainDeform::Leave()
{
	ManipulatorSystem.GetTerrain().SetTerrainDeformEnabled(false);
	m_bInDeform = false;
}

void ActionTerrainDeform::OnMouseLButtonDown( const SActionParam& param )
{
	if(!param.m_bHitTerrain)
		return;
	m_bInDeform = true;
}

void ActionTerrainDeform::OnMouseLButtonUp( const SActionParam& param )
{
	m_bInDeform = false;
}

void ActionTerrainDeform::OnMouseMove( const SActionParam& param )
{
	if(param.m_bHitTerrain)
		ManipulatorSystem.GetTerrain().SetBrushPosition(param.m_ptTerrain);
}

void ActionTerrainDeform::OnFrameMove( float dt )
{
	if(m_bInDeform)
		ManipulatorSystem.GetTerrain().OnEdit(dt);
}


