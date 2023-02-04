#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "pgh.h"


class GameObject
{
protected:
    Vector2f position;
    float speed;
    RenderWindow& m_window;
public:
    GameObject(float startX, float startY, RenderWindow& window);
    virtual void Draw() = 0;
    virtual void Update() = 0;
};

#endif