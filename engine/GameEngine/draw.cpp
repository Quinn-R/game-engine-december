#include "../GameEngine.hpp"

void GameEngine::draw() {
	window.clear(sf::Color::White);
    window.display();
}

void GameEngine::draw(sf::Color col, std::vector<Object> objects) {
	window.clear(col);
	
    for (unsigned int i = 0; i < objects.size(); i++) {
        window.draw(objects[i].getShape());
    }

    window.display();
}
