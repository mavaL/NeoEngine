#include "stdafx.h"
#include "ActionPlantGrass.h"
#include "Manipulator/ManipulatorScene.h"
#include "Manipulator/ManipulatorObject.h"


void ActionVegetationGrass::Enter()
{
	ManipulatorSystem.GetTerrain().SetGrassModeEnabled(true);
}

void ActionVegetationGrass::Leave()
{
	ManipulatorSystem.GetTerrain().SetGrassModeEnabled(false);
}

void ActionVegetationGrass::OnMouseLButtonDown( const SActionParam& param )
{
	if(!param.m_bHitTerrain)
		return;
	
	//ManipulatorSystem.GetObject().AddGrass(param.m_ptTerrain, ORIENT_IDENTITY, VEC3(50,50,50));
}


