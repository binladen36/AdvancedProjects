#include <iostream>
#include "FamilyMember.h"

int main(int argc, char **argv)
{
	Member orc("Urbul", 5.0);
	WhipPunish axe;
	orc.setPunishBehavior(&axe);
	
	Member dragon("Bymarth, The Deathlord", 500.0);
	HandPunish fire;
	dragon.setPunishBehavior(&fire);
	
	Dad player("Gandalf", 10.0);
	DusterPunish sword;
	player.setPunishBehavior(&sword);
	
	orc.attack(&player);
	dragon.attack(&player);
	
	player.attack(&dragon);
	
	//the dragon is hard to defeat -> switch weapon on runtime
	player.setPunishBehavior(&axe);
	player.attack(&dragon);
	
	return 0;
}