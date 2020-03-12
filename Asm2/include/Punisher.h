#ifndef _Punisher_H_
#define _Punisher_H_

#include "FamilyMember.h"

class Member;

class PunishBehavior
{
	public:
		virtual void performPunish(Member* attacker, Member* enemy) = 0;
};

class WhipPunish : public PunishBehavior
{
	public:
		virtual void performPunish(Member* attacker, Member* enemy);
};

class HandPunish : public PunishBehavior
{
	public:
		virtual void performPunish(Member* attacker, Member* enemy);
};

class DusterPunish : public PunishBehavior
{
	public:
		virtual void performPunish(Member* attacker, Member* enemy);
};

#endif 