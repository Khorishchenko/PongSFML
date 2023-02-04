#include "../inc/pgh.h"
#include "../inc/Game.h"

void Games(sf::RenderWindow &window) 
{
    Game game(window, windowWidth, windowHeight);
    game.Run();
}