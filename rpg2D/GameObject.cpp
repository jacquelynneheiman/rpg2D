#include "GameObject.h"

GameObject::GameObject()
{
	name = "GameObject";

	AddComponent<Sprite>();

	transform = std::make_unique<Transform>(Transform());
}

void GameObject::Update(float deltaTime)
{
	for (int i = 0; i < components.size(); i++)
	{
		if (components[i])
		{
			if (components[i].get()->name == "Sprite")
			{
				Sprite* sprite = dynamic_cast<Sprite*>(components[i].get());

				if (sprite != nullptr)
				{
					sprite->SetTransform(transform.get());
				}
			}

			components[i].get()->Update(deltaTime);
		}
	}
}

void GameObject::Draw(sf::RenderWindow& gameWindow)
{
	for (int i = 0; i < components.size(); i++)
	{
		if (components[i])
		{
			sf::Drawable* drawable = dynamic_cast<sf::Drawable*>(components[i].get());

			if (drawable != nullptr)
			{
				gameWindow.draw(*drawable);
			}
		}
	}
}

template <class T>
void GameObject::AddComponent()
{
	T tComponent;
	std::unique_ptr<T> ptrComponent = std::make_unique<T>(tComponent);
	components.push_back(std::move(ptrComponent));

	cout << tComponent.name << endl;
}
