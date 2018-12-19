#include "../GameEngine.hpp"

void GameEngine::defaultLoop() {
	events();
	update();
	draw();
}

void GameEngine::defaultLoop(sf::Color col, std::vector<sf::RectangleShape> objectShapes) {
	events();
	update();
	draw(col, objectShapes);
}