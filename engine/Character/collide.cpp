#include "../Character.hpp"

void Character::collide(std::vector<sf::RectangleShape> &objShapes, int objCollider) {
    
    sf::Vector2f delta/* = (sf::Vector2f())*/;
    sf::Vector2f collider1;
    sf::Vector2f collider2;
    
    for(int i = 0; i < objShapes.size() - 1; i++) {
        if(i == objCollider) {
            continue;
        }
        
        delta = sf::Vector2f(objShapes[i] - objShapes[objCollider]);
        
        if(sf::FloatRect(objectBumpers[0].getGlobalBounds()).intersects(sf::FloatRect(objShapes[i].getGlobalBounds()))) {
            objectCollides[0] = 1;
        }

        if(sf::FloatRect(objectBumpers[1].getGlobalBounds()).intersects(sf::FloatRect(objShapes[i].getGlobalBounds()))) {
            objectCollides[1] = 1;
        }

        if(sf::FloatRect(objectBumpers[2].getGlobalBounds()).intersects(sf::FloatRect(objShapes[i].getGlobalBounds()))) {
            objectCollides[2] = 1;
        }

        if(sf::FloatRect(objectBumpers[3].getGlobalBounds()).intersects(sf::FloatRect(objShapes[i].getGlobalBounds()))) {
            objectCollides[3] = 1;
        }
    }
}