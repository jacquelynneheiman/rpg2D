#include "Player.h"

Player::Player()
{
	transform->position = Vector2f(960, 520);
}

void Player::Update(float deltaTime, sf::Vector2i mousePosition)
{
	Vector2f directionToMouse(mousePosition.x - transform->position.x, mousePosition.y - transform->position.y);

	float magnitude = sqrt((directionToMouse.x * directionToMouse.x) + (directionToMouse.y * directionToMouse.y));
	directionToMouse = directionToMouse / magnitude;

	float rotation = atan2(directionToMouse.y, directionToMouse.x) * 180 / 3.1415;
	transform->rotation.x = rotation;

	if (magnitude >= 0.05f)
	{
		if (Keyboard::isKeyPressed(Keyboard::W))
		{
			transform->position += directionToMouse * m_MoveSpeed * deltaTime;
		}

		if (Keyboard::isKeyPressed(Keyboard::S))
		{
			transform->position -= directionToMouse * m_MoveSpeed * deltaTime;
		}
	}

	GameObject::Update(deltaTime);
}

void Player::Update(float deltaTime)
{

}

void Player::Draw(sf::RenderWindow& gameWindow)
{
	GameObject::Draw(gameWindow);
}
