#include "Transform.h"

Transform::Transform()
{
	name = "Transform";
}

void Transform::Update(float deltaTime)
{
	Component::Update(deltaTime);
}