#pragma once
#include "Core.h"
namespace Serin {
	class SERIN_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	//defined in Client
	Application* CreateApplication();
}

