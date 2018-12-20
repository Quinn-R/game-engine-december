#include "../Object.hpp"

void Object::setBumperSize()
{
    objectBumpers[0].setSize(sf::Vector2f(1, objectShape.getSize().y));
    objectBumpers[1].setSize(sf::Vector2f(1, objectShape.getSize().y));
    objectBumpers[2].setSize(sf::Vector2f(objectShape.getSize().x, 1));
    objectBumpers[3].setSize(sf::Vector2f(objectShape.getSize().x, 1));
}