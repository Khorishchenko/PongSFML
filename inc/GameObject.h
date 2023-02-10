#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "pgh.h"
#include "MovableObject.h"


class GameObject
{
protected:
    Vector2f position;
    MovableObject Speed;
    RenderWindow& m_window;
public:
    GameObject(float startX, float startY, RenderWindow& window, float speed);
    virtual void Draw() = 0;
    virtual void Update() = 0;
};

#endif