#include "../Character.hpp"

void Character::collide(std::vector<sf::RectangleShape> &objects) {
    for(int i = 0; i < objects.size(); i++) {
        
    }
}


/*
void Character::collide(std::vector<sf::RectangleShape> &objects) {
    for(int i = 0; i < objects.size(); i++) {
        if(sf::FloatRect(objectBumpers[0].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))) {
            objectCollides[0] = 1;
        }

        if(sf::FloatRect(objectBumpers[1].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))) {
            objectCollides[1] = 1;
        }

        if(sf::FloatRect(objectBumpers[2].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))) {
            objectCollides[2] = 1;
        }

        if(sf::FloatRect(objectBumpers[3].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))) {
            objectCollides[3] = 1;
        }
    }
}
*/
