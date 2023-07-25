#pragma once

//Here we check if we're running this program on windows. 
#ifdef ENGINE_PLATFORM_WINDOWS

//here we declare that a function exists, that returns a pointer to the program we want to run in our engine. 
extern Engine::Application* Engine::CreateApplication();

//This is our main entry point for our engine. This is where the program will start, run and end. 
int main(int argc, char** argv) {
	Engine::Log::Init(); 
	ENGINE_CORE_WARN("Initialized Log");
	ENGINE_CLIENT_INFO("Initialized Log");

	Engine::Window::Init(600, 400, "Application Window");
	
	auto app = Engine::CreateApplication(); 
	app->Run();
	delete app; 
}

#endif