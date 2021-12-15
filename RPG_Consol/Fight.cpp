#include "Fight.h"

void Fight::fight()
{
	Knight* knight = new Knight(20, 4, "Askar", "R");
	log.createPerson(knight);
	Mag* mag = new Mag(10, 7, "Roma", "T");
	log.createPerson(mag);
	
	knight->lossHealth(mag->useULT());
	log.ult(knight->useULT(), mag);
}
