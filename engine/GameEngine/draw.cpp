#include "../GameEngine.hpp"

void GameEngine::draw() {
	window.clear(sf::Color::White);
    window.display();
}

void GameEngine::draw(sf::Color col, std::vector<sf::RectangleShape> objectShapes) {
	window.clear(col);
	
    for (unsigned int i = 0; i < objectShapes.size(); i++) {
        window.draw(objectShapes[i]);
    }

    window.display();
}
