#include "../inc/pgh.h"
#include "../inc/Paddle.h"

Paddle::Paddle(float startX, float startY, RenderWindow& window) : GameObject(startX, startY, window)
{
    paddleShape.setSize(sf::Vector2f(shapeWidth, shapeHeight));
    paddleShape.setPosition(position);
}

FloatRect Paddle::getPosition()
{
    return paddleShape.getGlobalBounds();
}

RectangleShape Paddle::getShape()
{
    return paddleShape;
}

void Paddle::moveUp()
{
    position.y -= speed;
}

void Paddle::moveDown()
{
    position.y += speed;
}

void Paddle::HandleInput1(char &keyOne, char &keyTwo)
{
    if (keyOne == 'W' && (paddleShape.getPosition().y - paddleShape.getSize().y / 2 > -20.0f))
    {
        paddleShape.move(0.f, -speed);
    }
    else if (keyTwo == 'S' && (paddleShape.getPosition().y + paddleShape.getSize().y / 2 < m_window.getSize().y - 35.f))
    {
        paddleShape.move(0.f, speed);
    }
}

void Paddle::HandleInput2(char &keyThree, char &keyFour)
{
    if (keyThree == 'U' && (paddleShape.getPosition().y - paddleShape.getSize().y / 2 > -20.0f))
    {
        paddleShape.move(0.f, -speed);
    }
    else if (keyFour == 'D' && (paddleShape.getPosition().y + paddleShape.getSize().y / 2 < m_window.getSize().y - 35.f))
    {
        paddleShape.move(0.f, speed);
    }
}

void Paddle::Update()
{
    
}

void Paddle::Draw()
{
    m_window.draw(paddleShape);
}