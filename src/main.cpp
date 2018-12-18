//#include "../inc/common.hpp"
#include "../engine/GameEngine.hpp"
#include "../engine/Object.hpp"

int main() {
	GameEngine eng;
	
	std::vector<Object> objects;
	
	while(eng.isOpen()) {
		eng.defaultLoop(sf::Color::White, objects);
	}
	
	return 0;
}