#include "../Character.hpp"

void Character::move(std::vector<int> &moves, float dtAsSeconds, std::vector<sf::RectangleShape> &objects) {
    collide(objects);

    sf::Vector2f objectPos = getPosition();

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
    
    //std::cout << "collide: " << objectCollides[0] << objectCollides[1] << objectCollides[2] << objectCollides[3] << std::endl;
    
    resetCollide();
    setPosition(objectPos);
    setBumperPosition();
}
