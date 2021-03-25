#pragma once
#include "Core.h"

namespace Engine {
	// in order to use this class dll type
	// we need to export it using dlll export
	class ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	Application* CreateApplication();
	//to be define in client class
}

