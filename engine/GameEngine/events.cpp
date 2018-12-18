#include "../GameEngine.hpp"

void GameEngine::events() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
        window.close();
    }
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        isMovingLeft = 1;
    } else {
        isMovingLeft = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        isMovingRight = 1;
    } else {
        isMovingRight = 0;
    }
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        isMovingUp = 1;
    } else {
        isMovingUp = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        isMovingDown = 1;
    } else {
        isMovingDown = 0;
    }
}
