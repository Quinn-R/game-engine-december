#include "../Character.hpp"

Character::Character() {
	Object();
	
	objectSpeed = 100;
	
	for(int i = 0; i < 4; i++) {
		objectCollides.push_back(0);
		
		objectBumpers.push_back(sf::RectangleShape());
		objectBumpers[i].setFillColor(sf::Color::Black);
	}
	
	setBumperSize();
	setBumperPosition();
}

Character::Character(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool objIsColl, int objSpeed) {
	Object(objType, objSize, objPos, col, objIsColl);
	
	objectSpeed = objSpeed;
	
	for(int i = 0; i < 4; i++) {
		objectCollides.push_back(0);
		objectBumpers.push_back(sf::RectangleShape());
	}
	
	setBumperSize();
	setBumperPosition();
}