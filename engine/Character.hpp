#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "../inc/common.hpp"
#include "Object.hpp"

class Character: public Object{
private:
	
	sf::Vector2f delta;
    sf::Vector2f intersect;
	
	std::vector<int> objectCollides;
	//std::vector<int> objectMoves;
	//std::vector<sf::RectangleShape> objectBumpers;

	int objectSpeed;

public:

	Character();
	Character(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool objIsColl, int objSpeed);
	
	void move(std::vector<int> &moves, float dtAsSeconds,std::vector<sf::RectangleShape> &objects, int objCollider);
  	void collide(std::vector<sf::RectangleShape> &objects, int objCollider);
	
	void resetCollide();

	//void setBumperSize();
	//void setBumperPosition();

	//std::vector<sf::RectangleShape>& getBumpers();
};

#endif
