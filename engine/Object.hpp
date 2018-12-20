#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class Object {
private:
	
	std::string objectType;
	sf::RectangleShape objectShape;
	
	sf::Vector2f objectPos;
	
	std::vector<int> objectCollides;
	std::vector<sf::RectangleShape> objectBumpers;
	
	bool objectIsCollidable;
	int objectSpeed;
	
public:
	
	Object();
	Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl, int objSpeed);
	
	void setPosition(sf::Vector2f);
	sf::Vector2f getPosition();
	
	sf::RectangleShape getShape();
	std::vector<sf::RectangleShape>& getBumpers();
	
	void setBumperSize();
	void setBumperPosition();
    
    void move(std::vector<int> &moves, float dtAsSeconds, std::vector<Object> &objects);
    void collide(int objToMove, std::vector<Object> &objects);
};

#endif
