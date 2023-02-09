#include "../inc/pgh.h"


enum mainMenu
{
    start = 1,
    info
};

int main(void) 
{
	// Устанавливаем 8-й уровень сглаживания
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	// Объект, который, собственно, является главным окном приложения
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "PONG GAME", sf::Style::Default, settings);
		
    std::vector<std::string> mainMenu{"images/111.png", "images/222.png", "images/333.png", "images/pingPong.png"};
    std::vector<std::string> menuStart{"images/444.png", "images/555.png", "images/return.png"};
    std::vector<std::string> menuInfo{"images/about.png", "images/return.png"};

    std::map<std::string, std::string> gameMusic;
    gameMusic["mainMusic"] = "sound/a_hero.ogg";

	// Главный цикл приложения: выполняется, пока открыто окно
    while (window.isOpen())
    {
        // музыкальное сопровождение
        sf::Music music;
        music.openFromFile(gameMusic["mainMusic"]);
        music.play();
        music.setLoop(true);

		// Обрабатываем очередь событий в цикле
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
		window.clear(sf::Color(129, 181, 221, 0));

        bool state = false;
        do {
            switch (Menu(window, mainMenu))
            {
                case 1:
                    state = Start(window, menuStart);
                    break;
                case 2:
                    state = Info(window, menuInfo);
                    break;
                case 3:
                    state = false;
                    window.close();
            }
        } while (state);

		// Отрисовка окна
        window.display();
    }

    return 0;
}

