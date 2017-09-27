#pragma once

#include "Entity.h"

class Dragon :
	public Entity
{
public:
	Dragon(int h, int d, int a, std::string n);
	~Dragon();

	// inflicts damage on targeted Entity
	void Attack(Entity & target) override;
	// Mitigates damage taken using Armor
	void Defend(int damage) override;
};