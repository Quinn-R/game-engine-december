#include "../Character.hpp"

/*void Character::setBumperSize()
{
    objectBumpers[0].setSize(sf::Vector2f(1, getSize().y));
    objectBumpers[1].setSize(sf::Vector2f(1, getSize().y));
    objectBumpers[2].setSize(sf::Vector2f(getSize().x, 1));
    objectBumpers[3].setSize(sf::Vector2f(getSize().x, 1));
}*/

void Character::setBumperSize()
{
    objectBumpers[0].setSize(sf::Vector2f(1, getSize().y - 2));
    objectBumpers[1].setSize(sf::Vector2f(1, getSize().y - 2));
    objectBumpers[2].setSize(sf::Vector2f(getSize().x - 2, 1));
    objectBumpers[3].setSize(sf::Vector2f(getSize().x - 2, 1));
}
