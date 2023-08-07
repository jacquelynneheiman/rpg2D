#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include "Sprite.h"
#include "Health.h"

using sf::Keyboard;

class Player :
    public GameObject
{
private:
    sf::Vector2u m_Resolution;
    float m_MoveSpeed = 100;
    float m_RotateSpeed = 30;
public:
    Player();
    Player(sf::Vector2u resolution);
    void Update(float deltaTime) override;
    void Update(float deltaTime, sf::Vector2i mousePosition);
    void Draw(sf::RenderWindow& gameWindow) override;
    template<class T> void AddComponent();
};

template<class T>
inline void Player::AddComponent()
{
    T tComponent;
    std::unique_ptr<T> ptrComponent = std::make_unique<T>(tComponent);
    components.push_back(std::move(ptrComponent));

    cout << tComponent.name << endl;
}
