#include "../inc/pgh.h"
#include "../inc/Ball.h"
#include "Ball.h"

Ball::Ball(float startX, float startY, RenderWindow& window, float speed) : GameObject(startX, startY, window, speed)
{
    ballShape.setRadius(radius);
    ballShape.setPosition(position);
    do
    {
        ballAngle = (std::rand() % 360) * 2 * pi / 360;
    } while (std::abs(std::cos(ballAngle)) < 0.7f);
}

FloatRect Ball::getPosition()
{
    return ballShape.getGlobalBounds();
}

CircleShape Ball::getShape()
{
    return ballShape;
}

float Ball::getRadius()
{
    return radius;
}

void Ball::reboundTop()
{
    ballAngle = -ballAngle;
    ballShape.setPosition(ballShape.getPosition().x, radius + 0.1f);
}

void Ball::reboundBottom()
{
    ballAngle = -ballAngle;
    ballShape.setPosition(ballShape.getPosition().x, m_window.getSize().y - radius - 0.1f);
}

void Ball::reboundBat()
{
}

float Ball::speedIncrease(float increment)
{
    if (increment > 0.0f)
        Speed.setSpeed(increment);
    return Speed.getSpeed();   
}
void Ball::Update()
{
    ballShape.move(std::cos(ballAngle) * (Speed.getSpeed() - 0.1), std::sin(ballAngle) * (Speed.getSpeed() - 0.1));
}

void Ball::Draw()
{
    m_window.draw(ballShape);
}