//#include "../inc/common.hpp"
#include "../engine/GameEngine.hpp"
#include "../engine/Object.hpp"

int main() {
	GameEngine eng;
	
	// (std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl, int objSpeed)
	std::vector<Object> objects;
	objects.push_back(Object());
	objects.push_back(Object("player", sf::Vector2f(32, 32), sf::Vector2f(100, 100), sf::Color::Green, 1, 0));
	
	std::vector<sf::RectangleShape> objectShapes;
	objectShapes.push_back(objects[0].getShape());
	objectShapes.push_back(objects[1].getShape());
	
	while(eng.isOpen()) {
		//(std::vector<int> moves, float dtAsSeconds, std::vector<sf::RectangleShape> objectShapes)
		objects[0].move(eng.getMoves(), eng.getTime(), objects);
		
		objectShapes[0] = objects[0].getShape();
		
		eng.defaultLoop(sf::Color::White, objectShapes);
	}
	
	return 0;
}