#pragma once
#include "Component.h"
#include <SFML/Graphics.hpp>

using sf::Vector2f;

class Transform :
    public Component
{
public:
    Vector2f position;
    Vector2f rotation;
    Vector2f scale;

    Transform();
    void Update(float deltaTime) override;
};

