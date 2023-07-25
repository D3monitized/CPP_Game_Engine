#include "Window.h"


namespace Engine {
	sf::RenderWindow* Window::s_appWindow = nullptr; 

	void Window::Init(unsigned int width, unsigned int height, char title[]) {
		s_appWindow = new sf::RenderWindow(sf::VideoMode(width, height), title);
	}

	void Window::DrawWindow(sf::Drawable* element) {
		s_appWindow->draw(*element);
	}

	void Window::DisplayWindow() {
		s_appWindow->display(); 
	}

	bool Window::IsWindowOpen() {
		return s_appWindow->isOpen(); 
	}

	void Window::CloseWindow() {
		s_appWindow->close();
		delete s_appWindow; 
	}
}