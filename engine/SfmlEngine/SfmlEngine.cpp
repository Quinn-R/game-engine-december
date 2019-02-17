#include "../SfmlEngine.hpp"

SfmlEngine::SfmlEngine() {
	windowRes.x = sf::VideoMode::getDesktopMode().width;
	windowRes.y = sf::VideoMode::getDesktopMode().height;
	
	window.create(sf::VideoMode(windowRes.x, windowRes.y), "", sf::Style::Fullscreen);
	view.reset(sf::FloatRect(-100, -100, (windowRes.x - 16) /*/ 6*/, (windowRes.y - 16) /*/ 6*/));
	window.setView(view);
	
	for(int i = 0; i < 4; i++) {
		moves.push_back(0);
	}
	
	gameType = 0;
}