#include "../inc/pgh.h"

// трішки позбувся дублювання коду, та 
// реалізація не денамічна, багато статичного коду, який потрібно буде власноруч додавати, або змінювати.
// sprites[0].setColor(sf::Color::Blu.... --- sprites[0] - погано, розумію, потрібно покращити...Над цим ще по працюю.

int IsMenu(sf::RenderWindow &window, std::vector<sf::Sprite> &sprites, std::string nameMenu)
{
    bool isMenu = true;
	int state = 0;
	int  menuNum = 0;

	while (isMenu)
	{
		sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        for(int i = 0; i < sprites.size(); i++)
		    sprites[i].setColor(sf::Color::White);

		window.clear(sf::Color(129, 181, 221));

        if (nameMenu == "info") {
            if (sf::IntRect(30, 600, 300, 50).contains(sf::Mouse::getPosition(window))) { sprites[1].setColor(sf::Color::Blue); menuNum = 1; }

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                if (menuNum == 1) { isMenu = false; state = true;}
            }
        }
        if (nameMenu == "start") {
            if (sf::IntRect(200, 30, 300, 50).contains(sf::Mouse::getPosition(window))) { sprites[0].setColor(sf::Color::Blue); menuNum = 1; }
            if (sf::IntRect(200, 220, 300, 50).contains(sf::Mouse::getPosition(window))) { sprites[1].setColor(sf::Color::Blue); menuNum = 2; }
            if (sf::IntRect(200, 400, 300, 50).contains(sf::Mouse::getPosition(window))) { sprites[2].setColor(sf::Color::Blue); menuNum = 3; }
    
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                if (menuNum == 1) { Games(window); isMenu = false; state = false;} 
                if (menuNum == 2) { }
                if (menuNum == 3) { isMenu = false; state = true; }
            }
        }
        if (nameMenu == "mainMenu") {
            if (sf::IntRect(60, 30, 300, 50).contains(sf::Mouse::getPosition(window))) { sprites[0].setColor(sf::Color::Blue); menuNum = 1; }
		    if (sf::IntRect(60, 120, 300, 50).contains(sf::Mouse::getPosition(window))) { sprites[1].setColor(sf::Color::Blue); menuNum = 2; }
	        if (sf::IntRect(60, 230, 300, 50).contains(sf::Mouse::getPosition(window))) { sprites[2].setColor(sf::Color::Blue); menuNum = 3; }
 
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                if (menuNum == 1) { isMenu = false, state = 1; }
                if (menuNum == 2) { isMenu = false; state = 2; }
                if (menuNum == 3) { isMenu = false; state = 3; }
            }
        }

        for(int i = 0; i < sprites.size(); i++)
		    window.draw(sprites[i]);
		
		window.display();
	}
    return state;
}