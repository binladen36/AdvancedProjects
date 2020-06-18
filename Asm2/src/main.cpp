#include <iostream>
#include "FamilyMember.h"
#include "Program.h"

int main(int argc, char **argv)
{
	Member daughter("Girl", 5.0);
	HandPunish hand;
	daughter.setPunishBehavior(&hand);
	
	Member son("Boy", 15.0);
	WhipPunish whip;
	son.setPunishBehavior(&whip);
	
	Dad dad("Papa", 100.0);
	DusterPunish duster;
	dad.setPunishBehavior(&duster);
	
	//punish time
	dad.punish(&daughter);
	dad.punish(&son);
	daughter.punish(&dad);
	dad.punish(&daughter);
	
	//change punish
	dad.setPunishBehavior(&whip);
	dad.punish(&son);
	dad.punish(&daughter);

	Program program;
    program.run();
	
	return 0;
}