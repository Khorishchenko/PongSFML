#include "../inc/pgh.h"

int Menu(sf::RenderWindow &window) 
{
	sf::Texture menuTextureOne, menuTextureTwo, menuTextureThree, menuBackground;
	menuTextureOne.loadFromFile("images/111.png");
	menuTextureTwo.loadFromFile("images/222.png");
	menuTextureThree.loadFromFile("images/333.png");
	menuBackground.loadFromFile("images/pingPong.png");

	sf::Sprite menuOne(menuTextureOne), menuTwo(menuTextureTwo), menuThree(menuTextureThree), menuBg(menuBackground);
	menuOne.setPosition(60, 30);
	menuTwo.setPosition(60, 120);
	menuThree.setPosition(60, 230);
	menuBg.setPosition(500, 0);
 
	bool isMenu = true;
	int  state = 0;
	int  menuNum = 0;


	while (isMenu)
	{
		sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
		
		menuOne.setColor(sf::Color::White);
		menuTwo.setColor(sf::Color::White);
		menuThree.setColor(sf::Color::White);
		menuNum = 0;
		window.clear(sf::Color(129, 181, 221));
 
		if (sf::IntRect(60, 30, 300, 50).contains(sf::Mouse::getPosition(window))) { menuOne.setColor(sf::Color::Blue); menuNum = 1; }
		if (sf::IntRect(60, 120, 300, 50).contains(sf::Mouse::getPosition(window))) { menuTwo.setColor(sf::Color::Blue); menuNum = 2; }
		if (sf::IntRect(60, 230, 300, 50).contains(sf::Mouse::getPosition(window))) { menuThree.setColor(sf::Color::Blue); menuNum = 3; }
 
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (menuNum == 1) { isMenu = false, state = 1; }
			if (menuNum == 2) { isMenu = false; state = 2; }
			if (menuNum == 3) { isMenu = false; state = 3; }
		}
 
		window.draw(menuBg);
		window.draw(menuOne);
		window.draw(menuTwo);
		window.draw(menuThree);
		
		window.display();
	}

	return state;
}