#pragma once

#include "Core.h"
#include "Window.h"

namespace Engine {
	class ENGINE_API Application {
	public:
		Application();
		virtual ~Application(); //We'll want to override this in our application to free memory and such. 

		void Run(); 
	};

	//We declare that this function exists and we define it in the application we want to create and run.
	Application* CreateApplication(); 
}
