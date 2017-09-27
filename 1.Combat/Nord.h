#pragma once
#include "Entity.h"

class Nord : public Entity
{
public:
	Nord();
	~Nord();
	//To attack the other will ose health based on this class's damage.
	virtual void Attack(Entity& other) override;
	//To defend we will mitigate damge taken using the mArmor variable.
	virtual void Defend(int damage) override;
};
