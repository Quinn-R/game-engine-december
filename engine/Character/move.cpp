#include "../Character.hpp"

void Character::move(std::vector<int> &moves, float dtAsSeconds, std::vector<Object> &objects) {
    collide(0, objects);
    //setBumperPosition();
    
    sf::Vector2f objectPos;
    
    if(moves[0] == 1 && objectCollides[0] == 0) {
        objectPos.x -= objectSpeed * dtAsSeconds;
    }
    
    if(moves[1] == 1 && objectCollides[1] == 0) {
        objectPos.x += objectSpeed * dtAsSeconds;
    }
    
    if(moves[2] == 1 && objectCollides[2] == 0) {
        objectPos.y -= objectSpeed * dtAsSeconds;
    }
    
    if(moves[3] == 1 && objectCollides[3] == 0) {
        objectPos.y += objectSpeed * dtAsSeconds;
    }
    
    /*objectShape.*/setPosition(objectPos);
    setBumperPosition();
}

/*
void Object::update(float elapsedTime)
{
	if(isMovingLeft)
    {
        objPos.x -= speed * elapsedTime;
    }
    if(isMovingRight)
    {
        objPos.x += speed * elapsedTime;
    }
    
    objShape.setPosition(objPos);
}
*/