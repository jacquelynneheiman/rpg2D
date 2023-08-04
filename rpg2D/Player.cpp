#include "Player.h"

Player::Player()
{

}

void Player::Update(float deltaTime)
{
	GameObject::Update(deltaTime);
}

void Player::Draw(sf::RenderWindow& gameWindow)
{
	GameObject::Draw(gameWindow);
}
