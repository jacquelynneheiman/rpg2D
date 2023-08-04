#pragma once
#include "Component.h"
#include "Transform.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class Sprite :
    public Component, public sf::Drawable
{
private:
    sf::Texture m_Texture;
    Transform m_Transform;

protected:
    void draw(sf::RenderTarget& target, sf::RenderStates state) const;

public:
    sf::Sprite sprite;
    Sprite();
    void Update(float deltaTime) override;
    void LoadTexture(string path);
    void SetTransform(Transform transform);
};

