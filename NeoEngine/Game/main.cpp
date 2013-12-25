#include <string>
#include <vector>
#include <Windows.h>
#include <exception>


#include "Prerequiestity.h"
#include "Application.h"


int main()
{
	try
	{
		Application app;
		app.Init();
		app.Run();
		app.ShutDown();
	}
	catch (std::exception* e)
	{
		MessageBoxA(nullptr, e->what(), "Some error occur!", MB_ICONERROR | MB_OK);
	}

	return 0;
}
