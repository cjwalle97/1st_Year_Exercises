#pragma once
#include "Entity.h"

class Robot : public Entity
{
public:
	Robot();
	~Robot();
	//To attack th other will lose health based on this classes damage
	virtual void Attack(Entity& other) override;
	//To defend we will mitigate damage taken using the mArmor variable
	virtual void Defend(int damage) override;
};