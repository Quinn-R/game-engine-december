#include "../Object.hpp"

Object::Object() {
	objectType = "player";
	
	objectShape.setSize(sf::Vector2f(32, 32));
	objectShape.setPosition(sf::Vector2f(0, 0));
	objectShape.setFillColor(sf::Color::Blue);
	
	objectIsCollidable = 0;
	objectSpeed = 100;
	
	for(int i = 0; i < 4; i++) {
		objectCollides.push_back(0);
		
		objectBumpers.push_back(sf::RectangleShape());
		objectBumpers[i].setFillColor(sf::Color::Black);
	}
	
	setBumperSize();
	setBumperPosition();
}

Object::Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool objIsColl, int objSpeed) {
	objectType = objType;
	
	objectShape.setSize(objSize);
	objectShape.setPosition(objPos);
	objectShape.setFillColor(col);
	
	objectIsCollidable = objIsColl;
	objectSpeed = objSpeed;
	
	for(int i = 0; i < 4; i++) {
		objectCollides.push_back(0);
		objectBumpers.push_back(sf::RectangleShape());
	}
	
	setBumperSize();
	setBumperPosition();
}