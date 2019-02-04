#include "../Character.hpp"

void Character::setBumperPosition()
{
    objectBumpers[0].setPosition(sf::Vector2f(getPosition().x - 1, getPosition().y));
    objectBumpers[1].setPosition(sf::Vector2f(getPosition().x + getSize().x, getPosition().y));
    objectBumpers[2].setPosition(sf::Vector2f(getPosition().x, getPosition().y - 1));
    objectBumpers[3].setPosition(sf::Vector2f(getPosition().x, getPosition().y + getSize().y));
}