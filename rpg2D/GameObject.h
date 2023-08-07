#pragma once
#include <vector>
#include <string>
#include<iostream>
#include <memory>
#include <SFML/Graphics.hpp>
#include "Component.h"
#include "Transform.h"
#include "Sprite.h"
#include "Health.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;

class GameObject
{
public:
	std::unique_ptr<Transform> transform;
	string name;
	vector<std::unique_ptr<Component>> components;
	GameObject();
	virtual void Update(float deltaTime);
	virtual void Draw(sf::RenderWindow& gameWindow);
	template<class T> void AddComponent();
};

template <class T>
void GameObject::AddComponent()
{
	T tComponent;
	std::unique_ptr<T> ptrComponent = std::make_unique<T>(tComponent);
	components.push_back(std::move(ptrComponent));
}

