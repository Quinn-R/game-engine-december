#include "../Object.hpp"

void Object::move(std::vector<int> moves, float dtAsSeconds, std::vector<sf::RectangleShape> objectShapes) {
    std::vector<int> collides = collide(0, objectShapes);
    
    if(moves[0] == 1 && collides[0] == 0) {
        objectShape.setPosition(sf::Vector2f((objectSpeed * dtAsSeconds), 0));
    }
    
    if(moves[1] == 1 && collides[1] == 0) {
        objectShape.setPosition(sf::Vector2f((-1 * (objectSpeed * dtAsSeconds)), 0));
    }
    
    if(moves[2] == 1 && collides[2] == 0) {
        objectShape.setPosition(sf::Vector2f(0, (-1 * (objectSpeed * dtAsSeconds))));
    }
    
    if(moves[3] == 1 && collides[3] == 0) {
        objectShape.setPosition(sf::Vector2f(0, (objectSpeed * dtAsSeconds)));
    }
}