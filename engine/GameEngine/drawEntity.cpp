#include "../GameEngine.hpp"

void GameEngine::drawEntity(std::vector<sf::RectangleShape> &rects) {
	//window.clear();
	
	for (unsigned int i = 0; i < rects.size(); i++) {
        window.draw(rects[i]);
    }
	
	//window.display();
}