//#include "../inc/common.hpp"
#include "../engine/GameEngine.hpp"
#include "../engine/Object.hpp"

int main() {
	GameEngine eng;
	
	std::vector<Object> objects;
	objects.push_back(Object());
	
	std::vector<sf::RectangleShape> objectShapes;
	objectShapes.push_back(objects[0].getShape());
	
	while(eng.isOpen()) {
		//(std::vector<int> moves, float dtAsSeconds, std::vector<sf::RectangleShape> objectShapes)
		objects[0].move(eng.getMoves(), /*eng.getTime()*/ 0.4f, objectShapes);
		
		objectShapes[0] = objects[0].getShape();
		
		eng.defaultLoop(sf::Color::White, objectShapes);
	}
	
	return 0;
}