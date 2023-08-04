#pragma once
#include <vector>
#include <string>
#include<iostream>
#include <memory>
#include <SFML/Graphics.hpp>
#include "Transform.h"
#include "Sprite.h"
#include "Component.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;

class GameObject
{
public:
	string name;
	vector<std::unique_ptr<Component>> components;
	GameObject();
	virtual void Update(float deltaTime);
	virtual void Draw(sf::RenderWindow& gameWindow);
	template<class T> void AddComponent();
};

