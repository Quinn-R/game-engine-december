#include "../Character.hpp"

void Character::collide(std::vector<sf::RectangleShape> &objShapes, int objCollider) {
    for(int i = 0; i < objShapes.size() - 1; i++) {
        if(i == objCollider) {
            continue;
        }
        
        delta = sf::Vector2f(objShapes[i].getPosition() - objShapes[objCollider].getPosition());
        intersect = sf::Vector2f(delta.x - (objShapes[i].getSize().x / 2 + objShapes[objCollider].getSize().x / 2), 
                    delta.y - (objShapes[i].getSize().y / 2 + objShapes[objCollider].getSize().y / 2));
        
        if(intersect.x < 0 && intersect.y < 0) {
            if(intersect.x > intersect.y) {
                if(delta.x < 0) {
                    objectCollides[0] = 1;
                } else {
                    objectCollides[1] = 1;
                }
            } else {
                if(delta.y < 0) {
                    objectCollides[2] = 1;
                } else {
                    objectCollides[3] = 1;
                }
            }
        }
    }
}