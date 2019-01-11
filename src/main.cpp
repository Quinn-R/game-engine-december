//#include "../inc/common.hpp"
#include "../engine/GameEngine.hpp"
#include "../engine/Object.hpp"
#include "../engine/Character.hpp"
#include "../engine/Wall.hpp"

int main() {

	GameEngine eng;

	std::vector<Character> chars;
	std::vector<Wall> walls;
	std::vector<sf::RectangleShape> objectShapes;

	chars.push_back(Character());
	objectShapes.push_back(chars[0].getShape());

	for (int i = 0; i < 4; i++) {
		walls.push_back(Wall());
		objectShapes.push_back(walls[i].getShape());
	}

	while(eng.isOpen()) {
		eng.events();
		eng.update();

		chars[0].move(eng.getMoves(), eng.getTime(), objectShapes);

		objectShapes[0] = (chars[0].getShape());
		objectShapes[1] = (walls[0].getShape());
		objectShapes[2] = (walls[1].getShape());
		objectShapes[3] = (walls[2].getShape());
		objectShapes[4] = (walls[3].getShape());

		eng.clear(sf::Color::Yellow);
		eng.drawEntity(objectShapes);
		eng.drawEntity(chars[0].getBumpers());
		eng.display();
	}

	return 0;
}

/*int main() {
	GameEngine eng;

	// (std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl, int objSpeed)
	std::vector<Object> objects;
	objects.push_back(Object());
	objects.push_back(Object("wall", sf::Vector2f(32, 32), sf::Vector2f(100, 100), sf::Color::Green, 1, 0));
	objects.push_back(Object("wall", sf::Vector2f(32, 32), sf::Vector2f(132, 100), sf::Color::Green, 1, 0));
	objects.push_back(Object("wall", sf::Vector2f(32, 32), sf::Vector2f(164, 100), sf::Color::Green, 1, 0));

	std::vector<sf::RectangleShape> objectShapes;
	objectShapes.push_back(objects[0].getShape());
	objectShapes.push_back(objects[1].getShape());
	objectShapes.push_back(objects[2].getShape());
	objectShapes.push_back(objects[3].getShape());

	while(eng.isOpen()) {
		//(std::vector<int> moves, float dtAsSeconds, std::vector<sf::RectangleShape> objectShapes)
		objects[0].move(eng.getMoves(), eng.getTime(), objects);

		objectShapes[0] = objects[0].getShape();
		objectShapes[1] = objects[1].getShape();
		objectShapes[2] = objects[2].getShape();
		objectShapes[3] = objects[3].getShape();

		//eng.defaultLoop(sf::Color::White, objectShapes);
		//eng.drawEntity(objects[0].getBumpers());

		eng.events();
		eng.update();
		//draw(col, rects);
		eng.clear(sf::Color::Yellow);
		eng.drawEntity(objectShapes);
		eng.drawEntity(objects[0].getBumpers());
		eng.display();
	}

	return 0;
}*/
