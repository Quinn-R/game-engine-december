#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "../inc/common.hpp"
#include "Object.hpp"

class Character: public Object{
private:

	std::vector<int> objectCollides;
	std::vector<sf::RectangleShape> objectBumpers;

	int objectSpeed;

public:

	Character();
	Character(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool objIsColl, int objSpeed);

	void move(std::vector<int> &moves, float dtAsSeconds, int objToMove, std::vector<sf::RectangleShape> &objects);
  	void collide(int objToMove, std::vector<sf::RectangleShape> &objects);

	void setBumperSize();
	void setBumperPosition();

	std::vector<sf::RectangleShape>& getBumpers();
};

#endif
