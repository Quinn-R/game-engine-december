#include "../Wall.hpp"

Wall::Wall() : Object::Object() {
	//Object();
}

//Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl);
Wall::Wall(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl) : Object::Object(objType, objSize, objPos, col, isColl) {
	//Object(objType, objSize, objPos, col, isColl);
}
