#pragma once
#include "Component.h"
#include <iostream>

class Health :
    public Component
{
private:
    const float MAX_HEALTH = 100;
    const float MIN_HEALTH = 0;
    
    float m_CurrentHealth;
    
public:
    Health();
    Health(float startingHealth);
    void Update(float deltaTime) override;
    void Heal(float amount);
    void TakeDamage(float amount);
    void Die();
};

