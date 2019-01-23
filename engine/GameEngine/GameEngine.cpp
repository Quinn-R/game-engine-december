#include "../GameEngine.hpp"

GameEngine::GameEngine() {
	windowRes.x = sf::VideoMode::getDesktopMode().width;
	windowRes.y = sf::VideoMode::getDesktopMode().height;
	
	window.create(sf::VideoMode(/*windowRes.x, windowRes.y*/500, 500), ""/*, sf::Style::Fullscreen*/);
	view.reset(sf::FloatRect(0.f, 0.f, /*windowRes.x / 8, windowRes.y / 8*/500/2, 500/2));
	window.setView(view);
	
	for(int i = 0; i < 4; i++) {
		moves.push_back(0);
	}
}