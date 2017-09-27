#include "Spartan.h"

Spartan::Spartan()
{
	m_name = "MasterChief ";
	m_health = 100;
	m_armor = 200;
	m_speed = 10;
	m_damage = 9001;
}

Spartan::~Spartan()
{
}

void Spartan::Attack(Entity & other)
{
	std::cout << m_name << "is attacking " << other.m_name << std::endl;
	std::cout << "with damge " << m_damage << std::endl;
	std::cout << "current health is " << m_health << std::endl;
	std::cout << "current armor is " << m_armor << std::endl;
	std::cout << "current speed is " << m_speed << std::endl;
}

void Spartan::Defend(int other)
{

}