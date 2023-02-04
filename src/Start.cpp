#include "../inc/pgh.h"

bool Start(sf::RenderWindow &window) 
{
	sf::Texture menuTextureOne, menuTextureTwo, menuTextureThree;
	menuTextureOne.loadFromFile("images/444.png");
	menuTextureTwo.loadFromFile("images/555.png");
	menuTextureThree.loadFromFile("images/return.png");

	sf::Sprite menuOne(menuTextureOne), menuTwo(menuTextureTwo), menuThree(menuTextureThree);

	menuOne.setPosition(300, 30);
	menuTwo.setPosition(300, 220);
	menuThree.setPosition(300, 400);

	bool isMenu = true;
	bool state = false;
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
 
		if (sf::IntRect(200, 30, 300, 50).contains(sf::Mouse::getPosition(window))) { menuOne.setColor(sf::Color::Blue); menuNum = 1; }
		if (sf::IntRect(200, 220, 300, 50).contains(sf::Mouse::getPosition(window))) { menuTwo.setColor(sf::Color::Blue); menuNum = 2; }
		if (sf::IntRect(200, 400, 300, 50).contains(sf::Mouse::getPosition(window))) { menuThree.setColor(sf::Color::Blue); menuNum = 3; }
 
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (menuNum == 1) { Games(window); isMenu = false; state = false;} 
			if (menuNum == 2) { }
			if (menuNum == 3) { isMenu = false; state = true; }
		}
 
		window.draw(menuOne);
		window.draw(menuTwo);
		window.draw(menuThree);
		
		window.display();
	}
	
	return state;
}
