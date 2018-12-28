#include "../Object.hpp"

void Object::collide(int objToMove, std::vector<Object> &objects) {
    
    std::cout << "objects: " << objects.size() << std::endl;
    for(int i = 0; i < objects.size(); i++) {
        if(i == objToMove) {
            std::cout << "i: " << i << std::endl;
            continue;
        }
        
        if(sf::FloatRect(objectBumpers[0].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))/* && objects[i].objectIsCollidable == 1*/) {
            //objectPos.x -= 1;
            objectCollides[0] = 1;
        } else {
            objectCollides[0] = 0;
        }
        
        if(sf::FloatRect(objectBumpers[1].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))/* && objects[i].objectIsCollidable == 1*/) {
            objectCollides[1] = 1;
        } else {
            objectCollides[1] = 0;
        }
        
        if(sf::FloatRect(objectBumpers[2].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))/* && objects[i].objectIsCollidable == 1*/) {
            objectCollides[2] = 1;
        } else {
            objectCollides[2] = 0;
        }
        
        if(sf::FloatRect(objectBumpers[3].getGlobalBounds()).intersects(sf::FloatRect(objects[i].getShape().getGlobalBounds()))/* && objects[i].objectIsCollidable == 1*/) {
            objectCollides[3] = 1;
        } else {
            objectCollides[3] = 0;
        }
    }
}