#include "../GameEngine.hpp"

void GameEngine::draw() {
	clear();
	display();
}

void GameEngine::draw(sf::Color col, std::vector<sf::RectangleShape> &rects) {
	clear(col);
	drawEntity(rects);
	display();
}