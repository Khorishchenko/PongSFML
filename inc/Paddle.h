#ifndef PADDLE_H
#define PADDLE_H

#include "pgh.h"
#include "GameObject.h"


class Paddle : public GameObject
{
private:
    RectangleShape paddleShape;
    const int shapeWidth = 10;
    const int shapeHeight = 50;
public:
    Paddle(float startX, float startY, RenderWindow& window);
    FloatRect getPosition();
    RectangleShape getShape();
    void moveUp();
    void moveDown();
    void HandleInput1(char &keyOne, char &keyTwo);
    void HandleInput2(char &keyThree, char &keyFour);
    void Update() override;
    void Draw() override;
};

#endif