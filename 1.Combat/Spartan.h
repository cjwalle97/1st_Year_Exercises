#pragma once

#include "Entity.h"

class Spartan : public Entity
{
public:
	Spartan();
	~Spartan();
	
	//to attack the other will lose health based on this classes damage
	virtual void Attack(Entity& other) override;
	//to defend we will mitigate damage taken using the mArmor variable
	virtual void Defend(int damage) override;
};