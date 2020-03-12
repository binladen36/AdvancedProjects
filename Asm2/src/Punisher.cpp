#include <iostream>
#include "Punisher.h"

void WhipPunish::performPunish(Member *attacker, Member* enemy)
{
	cout << attacker->getName() << " whips " << enemy->getName() << endl;
};

void HandPunish::performPunish(Member *attacker, Member* enemy)
{
	cout << attacker->getName() << " slaps " << enemy->getName() << endl;
}

void DusterPunish::performPunish(Member *attacker, Member* enemy)
{
	cout << attacker->getName() << " slashes " << enemy->getName() << endl;
}