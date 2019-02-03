#include "../SfmlEngine.hpp"

SfmlEngine::SfmlEngine() {
	windowRes.x = sf::VideoMode::getDesktopMode().width;
	windowRes.y = sf::VideoMode::getDesktopMode().height;
	
	window.create(sf::VideoMode(windowRes.x, windowRes.y), "", sf::Style::Fullscreen);
	view.reset(sf::FloatRect(-500.f, -500.f, windowRes.x, windowRes.y));
	window.setView(view);
	
	for(int i = 0; i < 4; i++) {
		moves.push_back(0);
	}
	
	gameType = 0;
}