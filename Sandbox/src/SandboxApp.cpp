#include <Engine.h>

//This is the main file for running our program

class Sandbox : public Engine::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Engine::Application* Engine::CreateApplication() {
	return new Sandbox(); 
}