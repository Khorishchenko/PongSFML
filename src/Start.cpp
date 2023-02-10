#include "../inc/pgh.h"

bool Start(sf::RenderWindow &window, const std::vector<std::string> &menuStart) 
{
	std::vector<sf::Texture> startTexture{sf::Texture(), sf::Texture(), sf::Texture()};
	startTexture[0].loadFromFile(menuStart[0]);
	startTexture[1].loadFromFile(menuStart[1]);
	startTexture[2].loadFromFile(menuStart[2]);


	std::vector<sf::Sprite> sprites{sf::Sprite(startTexture[0]), sf::Sprite(startTexture[0]), sf::Sprite(startTexture[2])};
	sprites[0].setPosition(300, 30);
	sprites[1].setPosition(300, 220);
	sprites[2].setPosition(300, 400);

	return IsMenu(window, sprites, "start");
}
