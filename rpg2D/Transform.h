#pragma once
#include "Component.h"
#include <SFML/Graphics.hpp>

using sf::Vector2f;

class Transform :
    public Component
{
public:
    const Vector2f up = Vector2f(0, 1);
    const Vector2f down = Vector2f(0, -1);
    const Vector2f right = Vector2f(1, 0);
    const Vector2f left = Vector2f(-1, 0);

    Vector2f position;
    Vector2f rotation;
    Vector2f scale;

    Vector2f localPosition;

    Transform();
    void Update(float deltaTime) override;
};

