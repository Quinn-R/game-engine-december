#include "../SfmlEngine.hpp"

void SfmlEngine::drawEntity(std::vector<sf::RectangleShape> &rects) {
	//window.clear();
	
	for (unsigned int i = 0; i < rects.size(); i++) {
        window.draw(rects[i]);
    }
	
	//window.display();
}

/*
void SfmlEngine::draw() {
	window.clear(sf::Color::White);
    window.display();
}

void SfmlEngine::draw(sf::Color col, std::vector<sf::RectangleShape> objectShapes) {
	window.clear(col);
	
    for (unsigned int i = 0; i < objectShapes.size(); i++) {
        window.draw(objectShapes[i]);
    }

    window.display();
}
*/