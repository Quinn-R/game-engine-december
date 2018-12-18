#include "../GameEngine.hpp"

GameEngine::GameEngine() {
	windowRes.x = sf::VideoMode::getDesktopMode().width;
	windowRes.y = sf::VideoMode::getDesktopMode().height;
	
	window.create(sf::VideoMode(windowRes.x, windowRes.y), "", sf::Style::Fullscreen);
	
	isMovingLeft = 0;
	isMovingRight = 0;
	isMovingUp = 0;
	isMovingDown = 0;
}