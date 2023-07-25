#pragma once

#include "Core.h"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

namespace Engine {
	class ENGINE_API Window {
	public:
		static void Init(unsigned int width, unsigned int height, char title[]); //Initialize all settings
		static void DrawWindow(sf::Drawable* element); 
		static void DisplayWindow(); 
		static void CloseWindow(); 
		static bool IsWindowOpen(); 
	private: 
		static sf::RenderWindow* s_appWindow; 
	};
}
