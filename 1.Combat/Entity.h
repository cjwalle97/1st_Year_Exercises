#pragma once
#include <iostream>
#include <string>

class Entity
{
public:
	Entity()
	{

	}
	~Entity()
	{

	}

	virtual void Attack(Entity & target) = 0;
	virtual void Defend(int damage) = 0;

	int m_health;
	int m_speed;
	int m_damage;
	int m_armor;
	std::string m_name;
};