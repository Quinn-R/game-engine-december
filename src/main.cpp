//#include "../inc/common.hpp"
#include "GameEngine.hpp"
#include "Object.hpp"

int main() {
	GameEngine eng;
	
	std::vector<Object> objects;
	
	while(eng.isOpen()) {
		eng.objectLoop(sf::Color::White, objects);
	}
	
	return 0;
}