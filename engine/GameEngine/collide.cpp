#include "../Object.hpp"

std::vector<int> Object::collide(int objToMove, std::vector<sf::RectangleShape> objectShapes) {
    std::vector<int> collides;
    collides.reserve(4);
    
    for(int i = 0; i < objectShapes.size(); i++) {
        if(i == objToMove) {
            continue;
        }
        
        if(1) {
            
        }
    }
    
    return collides;
}