#ifndef WALL_HPP
#define WALL_HPP

#include "../inc/common.hpp"
#include "Object.hpp"

class Wall: public Object{
private:
	
	
	
public:
	
	Wall();
	Wall(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl);
};

#endif
