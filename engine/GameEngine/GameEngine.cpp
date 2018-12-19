#include "../GameEngine.hpp"

GameEngine::GameEngine() {
	windowRes.x = sf::VideoMode::getDesktopMode().width;
	windowRes.y = sf::VideoMode::getDesktopMode().height;
	
	window.create(sf::VideoMode(windowRes.x, windowRes.y), "", sf::Style::Fullscreen);
	
	moves.reserve(4);
}