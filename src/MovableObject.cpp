#include "MovableObject.h"
#include "../inc/pgh.h"

MovableObject::MovableObject(float speed) : m_speed(speed)
{
}
void MovableObject::setSpeed(float speed) 
{
    m_speed = speed;
}

float MovableObject::getSpeed() 
{
    return m_speed;
}