#ifndef GAME_H
#define GAME_H

#include "Paddle.h"
#include "Ball.h"
#include "pgh.h"

class Game
{
private:
    std::unique_ptr<Paddle> player1;
    std::unique_ptr<Paddle> player2;
    std::unique_ptr<Ball> ball;
    Font font;
    Text pause;
    Text gameOver;
    Text restart;
    bool isPaused;
    bool isGameOver;
    bool isRestart;
public:
    RenderWindow& m_window;
    const unsigned int m_windowWidth;
    const unsigned int m_windowHeight;
public:
    Game(RenderWindow& window, const unsigned int& windowWidth, const unsigned int& windowHeight);
    RenderWindow& GetWindow();
    void RestartGame();
    void HandleCollision();
    void HandleInput(char keyOne, char keyTwo, char keyThree, char keyFour);
    void Update();
    void Draw();
    void Run();
};

#endif