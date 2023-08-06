#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

using sf::Keyboard;

class Player :
    public GameObject
{
private:
    float m_MoveSpeed = 100;
    float m_RotateSpeed = 30;
public:
    Player();
    void Update(float deltaTime) override;
    void Update(float deltaTime, sf::Vector2i mousePosition);
    void Draw(sf::RenderWindow& gameWindow) override;
};

