#include "../GameEngine.hpp"

void GameEngine::update() {
	dt = clock.restart();
	dtAsSeconds = dt.asSeconds();
}
