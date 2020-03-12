#include <iostream>
#include "FamilyMember.h"

void Member::attack(Member *enemy)
{
	if(this->behavior)
		this->behavior->performPunish(this, enemy);
	//else
}

void Member::setPunishBehavior(PunishBehavior *behavior)
{
	this->behavior = behavior;
}