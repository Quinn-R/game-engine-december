#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "../inc/common.hpp"

class Object {
private:
	
	std::string objectType;
	sf::RectangleShape objectShape;
	
	sf::Vector2f objectPos;
	
	bool objectIsCollidable;
	
public:
	
	Object();
	Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl, int objSpeed);
	
	void setPosition(sf::Vector2f);
	sf::Vector2f getPosition();
	
	sf::RectangleShape getShape();
};

#endif
