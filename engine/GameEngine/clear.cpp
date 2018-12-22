#include "../GameEngine.hpp"

void GameEngine::clear() {
	window.clear(sf::Color::White);
}

void GameEngine::clear(sf::Color col) {
	window.clear(col);
}