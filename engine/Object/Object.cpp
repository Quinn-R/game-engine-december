#include "../Object.hpp"

Object::Object() {
	objectShape.setSize(sf::Vector2f(32, 32));
	objectShape.setPosition(sf::Vector2f(0, 0));
	
	isCollidable = 0;
	objectSpeed = 4;
}
