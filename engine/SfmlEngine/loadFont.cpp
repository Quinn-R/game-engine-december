#include "../SfmlEngine.hpp"

void SfmlEngine::loadFont() {
    if (!fnt.loadFromFile("UbuntuMono-B.ttf")) {
        std::cout << "Error loading font" << std::endl;
    }
}

void SfmlEngine::loadFont(std::string fntName) {
    if (!fnt.loadFromFile(fntName)) {
        std::cout << "Error loading font" << std::endl;
    }
}