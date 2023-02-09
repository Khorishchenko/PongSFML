#include "../inc/pgh.h"

bool Info(sf::RenderWindow &window, const std::vector<std::string> &menuInfo) 
{
    sf::Texture aboutTexture, returnTexture;
    aboutTexture.loadFromFile(menuInfo[0]);
    returnTexture.loadFromFile(menuInfo[1]);

    sf::Sprite about(aboutTexture), retur(returnTexture);
    about.setPosition(330, 0);
    retur.setPosition(30, 600);

    bool isMenu = true;
    bool state = false;
    int  menuNum = 0;

    while(isMenu) 
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color(129, 181, 221));

        retur.setColor(sf::Color::White);
        if (sf::IntRect(30, 600, 300, 50).contains(sf::Mouse::getPosition(window))) { retur.setColor(sf::Color::Blue); menuNum = 1; }


		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (menuNum == 1) { isMenu = false; state = true;}
 
		}
 
        window.draw(about);
		window.draw(retur);
		
		window.display();
    }
    return state;
}