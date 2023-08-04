#pragma once
#include <string>
#include <SFML/Graphics.hpp>


using std::string;

class Component
{
public:
	string name;
	Component();
	virtual void Update(float deltaTime);
};

