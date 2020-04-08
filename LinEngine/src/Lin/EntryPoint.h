#pragma once

#include "Application.h"

#ifdef LIN_PLATFORM_WINDOWS

extern Lin::Application* Lin::CreateApplication();

int main(int argc, char* argv[])
{
	Lin::Application* app = Lin::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#else
	#error LinEngine only support windows
#endif