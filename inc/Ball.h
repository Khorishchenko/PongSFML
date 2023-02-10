#ifndef BALL_H
#define BALL_H

#include "GameObject.h"
#include "Paddle.h"
#include "pgh.h"


class Ball : public GameObject
{
private:
    CircleShape ballShape;
    const float radius = 10.0f;
public:
    float ballAngle = 0.0f;
    const float pi = 3.14159f;
public:
    Ball(float startX, float startY, RenderWindow& window, float speed = 0.4f);
    FloatRect getPosition();
    CircleShape getShape();
    float speedIncrease(float increment = 0.0f);
    float getRadius();
    void reboundTop();
    void reboundBottom();
    void reboundBat();
    void Update() override;
    void Draw() override;
};

#endif