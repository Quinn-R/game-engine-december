#include "../Object.hpp"

Object::Object() {
	objectType = "na";
	
	objectShape.setSize(sf::Vector2f(32, 32));
	objectShape.setPosition(sf::Vector2f(0, 0));
	objectShape.setFillColor(sf::Color::Blue);
}

Object::Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col) {
	objectType = objType;
	
	objectShape.setSize(objSize);
	objectShape.setPosition(objPos);
	objectShape.setFillColor(col);
}