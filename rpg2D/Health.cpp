#include "Health.h"

Health::Health()
{
	m_CurrentHealth = MAX_HEALTH;
	std::cout << "Health Component Added\nHealth: " << m_CurrentHealth << std::endl;
}

Health::Health(float startingHealth)
{
	m_CurrentHealth = startingHealth;
	std::cout << "Health Component Added\nHealth: " << m_CurrentHealth << std::endl;
}

void Health::Update(float deltaTime)
{
	
}

void Health::Heal(float amount)
{
	std::cout << "Healing for " << amount << " hp" << std::endl;

	if (m_CurrentHealth + amount <= MAX_HEALTH)
	{
		m_CurrentHealth += amount;
	}
	else
	{
		float healthOverflow = (m_CurrentHealth + amount) - MAX_HEALTH;
		m_CurrentHealth += amount - healthOverflow;
	}

	std::cout << "Health: " << m_CurrentHealth << std::endl;
}

void Health::TakeDamage(float amount)
{
	std::cout << "Taking " << amount << " of damage" << std::endl;

	if (m_CurrentHealth - amount <= MIN_HEALTH)
	{
		Die();
	}
	else
	{
		m_CurrentHealth -= amount;
	}

	std::cout << "Health: " << m_CurrentHealth << std::endl;
}

void Health::Die()
{
	// Create death logic here
	std::cout << "Dying..." << std::endl;
}
