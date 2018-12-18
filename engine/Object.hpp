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
	Object(std::string, sf::RectangleShape, bool, int);
	
	void setPosition(int, int);
	sf::Vector2f getPosition();
	
	sf::RectangleShape getShape();
    
    void move();
    
    void collide(std::vector<Object> objects);
};

#endif
