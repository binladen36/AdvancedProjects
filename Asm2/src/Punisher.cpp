#include <iostream>
#include "Punisher.h"

void WhipPunish::performPunish(Member *attacker, Member* enemy)
{
	cout << attacker->getName() << " crushes " << enemy->getName() << endl;
};

void HandPunish::performPunish(Member *attacker, Member* enemy)
{
	cout << attacker->getName() << " slashes " << enemy->getName() << endl;
}

void DusterPunish::performPunish(Member *attacker, Member* enemy)
{
	cout << attacker->getName() << " scorches " << enemy->getName() << endl;
}