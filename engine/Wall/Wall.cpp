#include "../Object.hpp"

Wall::Wall() {
	Object();
}

Wall::Wall(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col) {
	Object(objType, objSize, objPos, col);
}