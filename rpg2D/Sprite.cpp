#include "Sprite.h"
#include "TextureManager.h"

Sprite::Sprite()
{
	name = "Sprite";
	LoadTexture("Graphics/player.png");

	//TODO: The sprite is not showing up in the game. I removed setting the rotationa and scale, 
	//		now I see a white square. Is the texture getting set?
}

void Sprite::Update(float deltaTime)
{
	sprite.setPosition(m_Transform->position);
	sprite.setRotation(m_Transform->rotation.x);

	Component::Update(deltaTime);
}

void Sprite::LoadTexture(string const& path)
{
	sprite.setTexture(TextureManager::GetTexture(path));
	sprite.setOrigin(sprite.getLocalBounds().width / 2, sprite.getLocalBounds().height / 2);
}

void Sprite::SetTransform(Transform* transform)
{
	m_Transform = transform;
}

void Sprite::draw(sf::RenderTarget& target, sf::RenderStates state) const
{
	target.draw(sprite);
}