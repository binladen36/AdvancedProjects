#ifndef _FamilyMember_H_
#define _FamilyMember_H_

#include <string>
#include "Punisher.h"
using namespace std;

class PunishBehavior;

class Member 
{
	protected:
		string name;
		double damage;
		PunishBehavior* behavior;
	public:
		//Constructor
		Member(string name, double damage) : name(name), damage(damage), behavior(0) {}
		
		void attack(Member *enemy);
		void setPunishBehavior(PunishBehavior* behavior);
		
		const string& getName() const { return this->name; }
		void setDamage(double damage) { this->damage = damage; }
		double getDamage() const { return this->damage; }
};

class Dad : public Member
{
	public:
		Dad(string name, double damage) : Member(name, damage) { }
		
		
};

#endif 