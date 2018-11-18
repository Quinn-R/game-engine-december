#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class GameEngine
{
private:
	
	sf::Vector2i windowRes;
	sf::RenderWindow window;
	
	bool isMovingLeft;
	bool isMovingRight;
	bool isMovingUp;
	bool isMovingDown;
	
public:
	
	void defaultLoop();
	void init();
	void events();
	void update();
	void draw();
	
};

void GameEngine::defaultLoop() {
	init();
	
	while(window.isOpen()) {
		events();
		update();
		draw();
	}
}

void GameEngine::init() {
	windowRes.x = sf::VideoMode::getDesktopMode().width;
	windowRes.y = sf::VideoMode::getDesktopMode().height;
	
	window.create(sf::VideoMode(windowRes.x, windowRes.y), "", sf::Style::Fullscreen);
	
	isMovingLeft = 0;
	isMovingRight = 0;
	isMovingUp = 0;
	isMovingDown = 0;
}

void GameEngine::events() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
        window.close();
    }
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        isMovingLeft = 1;
    } else {
        isMovingLeft = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        isMovingRight = 1;
    } else {
        isMovingRight = 0;
    }
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        isMovingUp = 1;
    } else {
        isMovingUp = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        isMovingDown = 1;
    } else {
        isMovingDown = 0;
    }
}

void GameEngine::update() {
	
}

void GameEngine::draw() {
	window.clear(sf::Color::White);
	
	/*
    for (unsigned int i = 0; i < objects.size(); i++) {
        window.draw(objects[i].getObjShape());
    }
	*/

    window.display();
}

#endif
