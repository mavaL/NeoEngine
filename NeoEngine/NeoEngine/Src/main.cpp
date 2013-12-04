#include "stdafx.h"
#include "Application.h"


SGlobalEnv			g_env;


int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	try
	{
		Application app;
		app.Init(hInstance);
		app.Run();
		app.ShutDown();
	}
	catch (std::exception* e)
	{
		MessageBoxA(nullptr, e->what(), "Some error occur!", MB_ICONERROR | MB_OK);
	}

	return 0;
}
