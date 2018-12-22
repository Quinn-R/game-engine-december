#include "../GameEngine.hpp"

void GameEngine::defaultLoop() {
	events();
	update();
	draw();
}

void GameEngine::defaultLoop(sf::Color col, std::vector<sf::RectangleShape> &rects) {
	events();
	update();
	draw(col, rects);
}