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
	void objectLoop(sf::Color col, std::vector<Object> objects);
	
	void events();
	void update();
	void draw();
	void draw(sf::Color col, std::vector<Object> objects);
};

GameEngine::GameEngine() {
	windowRes.x = sf::VideoMode::getDesktopMode().width;
	windowRes.y = sf::VideoMode::getDesktopMode().height;
	
	window.create(sf::VideoMode(windowRes.x, windowRes.y), "", sf::Style::Fullscreen);
	
	isMovingLeft = 0;
	isMovingRight = 0;
	isMovingUp = 0;
	isMovingDown = 0;
}

bool GameEngine::isOpen() {
	return window.isOpen();
}

void GameEngine::defaultLoop() {
	events();
	update();
	draw();
}

void GameEngine::objectLoop(sf::Color col, std::vector<Object> objects) {
	events();
	update();
	draw(col, objects);
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
	dt = clock.restart();
	dtAsSeconds = dt.asSeconds();
}

void GameEngine::draw() {
	window.clear(sf::Color::White);
    window.display();
}

void GameEngine::draw(sf::Color col, std::vector<Object> objects) {
	window.clear(col);
	
    for (unsigned int i = 0; i < objects.size(); i++) {
        window.draw(objects[i].getShape());
    }

    window.display();
}

#endif
