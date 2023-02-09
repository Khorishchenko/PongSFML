#ifndef MOVABLEOBJECT_H
#define MOVABLEOBJECT_H

class MovableObject
{
private:
    float m_speed;
public:
    MovableObject(float speed = 0.0f);
    void setSpeed(float speed);
    float getSpeed();
};


#endif