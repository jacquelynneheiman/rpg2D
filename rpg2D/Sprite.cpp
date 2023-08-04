#include "Sprite.h"

Sprite::Sprite()
{
	name = "Sprite";
	LoadTexture("Graphics/player.png");

	//TODO: The sprite is not showing up in the game. I removed setting the rotationa and scale, 
	//		now I see a white square. Is the texture getting set?
}

void Sprite::Update(float deltaTime)
{
	sprite.setPosition(m_Transform.position);

	Component::Update(deltaTime);
}

void Sprite::draw(sf::RenderTarget& target, sf::RenderStates state) const
{
	target.draw(sprite);
}

void Sprite::LoadTexture(string path)
{
	m_Texture.loadFromFile(path);
	sprite.setTexture(m_Texture);
	sprite.setOrigin(sprite.getLocalBounds().width / 2, sprite.getLocalBounds().height / 2);
}

void Sprite::SetTransform(Transform transform)
{
	m_Transform = transform;
}