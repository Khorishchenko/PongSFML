#include "../inc/pgh.h"
#include "../inc/Paddle.h"

Paddle::Paddle(float startX, float startY, RenderWindow& window, float speed) : GameObject(startX, startY, window, speed)
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
    position.y -= Speed.getSpeed();
}

void Paddle::moveDown()
{
    position.y += Speed.getSpeed();
}

void Paddle::HandleInput1(char keyW, char keyS)
{
    // std::cout << event.key.code << std::endl;
    // if ((event.type == Event::KeyPressed && event.key.code == 22)
    //     && (paddleShape.getPosition().y - paddleShape.getSize().y / 2 > -20.0f))
    // {
    //     paddleShape.move(0.f, -Speed.getSpeed());
    // }
    // else if ((event.type == Event::KeyPressed && event.key.code == 18)
    //     && (paddleShape.getPosition().y + paddleShape.getSize().y / 2 < m_window.getSize().y - 35.f))
    // {
    //     paddleShape.move(0.f, Speed.getSpeed());
    // }

    
    if (keyW == 'W' && (paddleShape.getPosition().y - paddleShape.getSize().y / 2 > -20.0f))
    {
        paddleShape.move(0.f, -Speed.getSpeed());
    }
    if (keyS == 'S' && (paddleShape.getPosition().y + paddleShape.getSize().y / 2 < m_window.getSize().y - 35.f))
    {
        paddleShape.move(0.f, Speed.getSpeed());
    }
}

void Paddle::HandleInput2(sf::Event &event)
{
    if ((event.type == Event::KeyPressed && event.key.code == sf::Keyboard::Up) 
        && (paddleShape.getPosition().y - paddleShape.getSize().y / 2 > -20.0f))
    {
        paddleShape.move(0.f, -Speed.getSpeed());
    }
    else if ((event.type == Event::KeyPressed && event.key.code == sf::Keyboard::Down)
        && (paddleShape.getPosition().y + paddleShape.getSize().y / 2 < m_window.getSize().y - 35.f))
    {
        paddleShape.move(0.f, Speed.getSpeed());
    }
}

void Paddle::Update()
{
    
}

void Paddle::Draw()
{
    m_window.draw(paddleShape);
}