#include "../Object.hpp"

void Object::setBumperPosition()
{
    objectBumpers[0].setPosition(sf::Vector2f(objectShape.getPosition().x - 1, objectShape.getPosition().y));
    objectBumpers[1].setPosition(sf::Vector2f(objectShape.getPosition().x + objectShape.getSize().x, objectShape.getPosition().y));
    objectBumpers[2].setPosition(sf::Vector2f(objectShape.getPosition().x, objectShape.getPosition().y - 1));
    objectBumpers[3].setPosition(sf::Vector2f(objectShape.getPosition().x, objectShape.getPosition().y + objectShape.getSize().y));
}