#include "stdafx.h"
#include "ActionNone.h"
#include "Manipulator/ManipulatorScene.h"

void ActionNone::Enter()
{
	//清空选中物体
	ManipulatorSystem.GetObject().ClearSelection();
	ManipulatorSystem.GetObject().SetCurEditMode(ManipulatorObject::eEditMode_None);
}
