#include "../Object.hpp"

Object::Object() {
	objectType = "player";
	objectShape.setSize(sf::Vector2f(32, 32));
	objectShape.setPosition(sf::Vector2f(0, 0));
	objectShape.setFillColor(sf::Color::Blue);
	
	isCollidable = 0;
	objectSpeed = 4;
}

Object::Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, bool isColl, int objSpeed) {
	objectType = objType;
	
	objectShape.setSize(objSize);
	objectShape.setPosition(objPos);
	
	isCollidable = isColl;
	objectSpeed = objSpeed;
}