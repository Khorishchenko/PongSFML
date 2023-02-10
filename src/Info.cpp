#include "../inc/pgh.h"

bool Info(sf::RenderWindow &window, const std::vector<std::string> &menuInfo) 
{
    std::vector<sf::Texture> infoTexture{sf::Texture(), sf::Texture()};
    infoTexture[0].loadFromFile(menuInfo[0]);
    infoTexture[1].loadFromFile(menuInfo[1]);


    std::vector<sf::Sprite> sprites{sf::Sprite(infoTexture[0]), sf::Sprite(infoTexture[1])};
    sprites[0].setPosition(330, 0);
    sprites[1].setPosition(30, 600);

    return IsMenu(window, sprites, "info");
}