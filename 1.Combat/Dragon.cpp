#include "Dragon.h"

Dragon::Dragon(int h, int d, int a, std::string n)
{
	m_health = h;
	m_damage = d;
	m_armor = a;
	m_name = n;
}

Dragon::~Dragon()
{

}

void Dragon::Attack(Entity & target)
{
	std::cout << m_name << " is attacking " << target.m_name << std::endl;
	std::cout << "With damage " << m_damage << std::endl;
	std::cout << "Current Health = " << m_health << std::endl;
}

void Dragon::Defend(int damage)
{

}
