#include "../inc/pgh.h"

int Menu(sf::RenderWindow &window, const std::vector<std::string>& mainMenu) 
{
	std::vector<sf::Texture> mainMenuTexture{sf::Texture(), sf::Texture(), sf::Texture()};
	mainMenuTexture[0].loadFromFile(mainMenu[0]);
	mainMenuTexture[1].loadFromFile(mainMenu[1]);
	mainMenuTexture[2].loadFromFile(mainMenu[2]);
	mainMenuTexture[3].loadFromFile(mainMenu[3]);

	std::vector<sf::Sprite> sprites{sf::Sprite(mainMenuTexture[0]), sf::Sprite(mainMenuTexture[1]), 
									sf::Sprite(mainMenuTexture[2]), sf::Sprite(mainMenuTexture[3])};
	sprites[0].setPosition(60, 30);
	sprites[1].setPosition(60, 120);
	sprites[2].setPosition(60, 230);
	sprites[3].setPosition(500, 0);

	return IsMenu(window, sprites, "mainMenu");
}