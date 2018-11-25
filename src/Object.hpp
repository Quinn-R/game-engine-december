#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Object {
private:
	
	std::string objectType;
	sf::RectangleShape objectShape;
	bool canCollide;
	int objectSpeed;
	
public:
	
	void init(std::string, sf::RectangleShape, bool, int);
	
	void setPosition(int, int);
	sf::Vector2f getPosition();
	
	void getShape
};

#endif
