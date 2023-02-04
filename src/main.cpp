#include "../inc/pgh.h"

int main(void) 
{
	// Устанавливаем 8-й уровень сглаживания
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	// Объект, который, собственно, является главным окном приложения
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "PONG GAME", sf::Style::Default, settings);
		

	// Главный цикл приложения: выполняется, пока открыто окно
    while (window.isOpen())
    {
        // музыкальное сопровождение
        sf::Music music;
        music.openFromFile("sound/a_hero.ogg");
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
            switch (Menu(window))
            {
                case 1:
                    state = Start(window);
                    break;
                case 2:
                    state = Info(window);
                    break;
                case 3:
                    state = false;
                    window.close();
            }
        } while (state);

        window.clear(sf::Color(100, 100, 100, 0));

		// Отрисовка окна
        window.display();
    }

    return 0;
}

