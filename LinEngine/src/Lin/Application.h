#pragma once

#include "Core.h"

namespace Lin {
	class LIN_API Application
	{
	public:
		Application();

		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

