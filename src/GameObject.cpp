#include "../inc/pgh.h"
#include "../inc/GameObject.h"

GameObject::GameObject(float startX, float startY, sf::RenderWindow& window, float speed) : m_window(window)
{
    position.x = startX;
    position.y = startY;
    Speed.setSpeed(speed);
}