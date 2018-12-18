#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Object.hpp"

class GameEngine {
private:
	
	sf::Vector2i windowRes;
	sf::RenderWindow window;
	
	bool isMovingLeft;
	bool isMovingRight;
	bool isMovingUp;
	bool isMovingDown;
	
	sf::Clock clock;
    sf::Time dt;
	float dtAsSeconds;
	
public:
	
	GameEngine();
	
	bool isOpen();
	
	void defaultLoop();
	void defaultLoop(sf::Color col, std::vector<Object> objects);
	
	void events();
	void update();
	void draw();
	void draw(sf::Color col, std::vector<Object> objects);
};

#endif
