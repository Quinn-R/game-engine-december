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
    
    void move(std::vector<int> moves, float dtAsSeconds, std::vector<sf::RectangleShape> objectShapes);
    
    std::vector<int> collide(int objToMove, std::vector<sf::RectangleShape> objectShapes);
};

#endif
