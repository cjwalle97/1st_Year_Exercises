#include "Nord.h"

Nord::Nord()
{
	m_name = "Ulfric";
	m_health = 300;
	m_armor = 35;
	m_speed = 420;
	m_damage = 15;
}

Nord::~Nord()
{
}

void Nord::Attack(Entity & other)
{
	std::cout << m_name << " is attacking " << other.m_name << std::endl;
	std::cout << "with " << m_damage << " damage." << std::endl;
	std::cout << "current health is " << m_health << std::endl;
	std::cout << "current armor is " << m_armor << std::endl;
	std::cout << "current speed is " << m_speed << std::endl;
}

void Nord::Defend(int damage)
{

}