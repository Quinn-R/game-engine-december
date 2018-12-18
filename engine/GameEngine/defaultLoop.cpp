#include "../GameEngine.hpp"

void GameEngine::defaultLoop() {
	events();
	update();
	draw();
}

void GameEngine::defaultLoop(sf::Color col, std::vector<Object> objects) {
	events();
	update();
	draw(col, objects);
}