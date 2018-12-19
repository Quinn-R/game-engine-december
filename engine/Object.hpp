#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Object {
private:
	
	std::string objectType;
	sf::RectangleShape objectShape;
	
	bool isCollidable;
	int objectSpeed;
	
public:
	
	Object();
	Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPosition, bool isCol, int objSpeed);
	
	void setPosition(sf::Vector2f);
	sf::Vector2f getPosition();
	
	sf::RectangleShape getShape();
    
    void move();
    
    void collide(std::vector<Object> objects);
};

#endif
