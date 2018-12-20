#include "../Object.hpp"

void Object::collide(int objToMove, std::vector<Object> &objects) {
    
    for(int i = 0; i < objects.size(); i++) {
        if(i == objToMove) {
            continue;
        }
        
        if(sf::FloatRect(objectBumpers[0].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))) {
            objectCollides[0] = 1;
        } else {
            objectCollides[0] = 0;
        }
        
        if(sf::FloatRect(objectBumpers[1].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))) {
            objectCollides[1] = 1;
        } else {
            objectCollides[1] = 0;
        }
        
        if(sf::FloatRect(objectBumpers[2].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))) {
            objectCollides[2] = 1;
        } else {
            objectCollides[2] = 0;
        }
        
        if(sf::FloatRect(objectBumpers[3].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))) {
            objectCollides[3] = 1;
        } else {
            objectCollides[3] = 0;
        }
    }
}