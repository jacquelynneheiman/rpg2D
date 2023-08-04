#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Player :
    public GameObject
{
public:
    Player();
    void Update(float deltaTime) override;
    void Draw(sf::RenderWindow& gameWindow) override;
};

