#include "../GameEngine.hpp"

void GameEngine::events() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
        window.close();
    }
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        moves[0] = 1;
    } else {
        moves[0] = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        moves[1] = 1;
    } else {
        moves[1] = 0;
    }
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        moves[2] = 1;
    } else {
        moves[2] = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        moves[3] = 1;
    } else {
        moves[3] = 0;
    }
}
