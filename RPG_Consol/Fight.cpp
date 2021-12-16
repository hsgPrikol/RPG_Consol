#include "Fight.h"

void Fight::test(int value)
{

}

void Fight::setCountPersons()
{
	log.enterCountsPersons();
	std::cin >> this->countPersons;
}

void Fight::fight()
{
	/*Knight* knight = new Knight(20, 4, "Askar", "R");
	log.createPerson(knight);
	Mag* mag = new Mag(10, 7, "Roma", "T");
	log.createPerson(mag);

	knight->lossHealth(mag->useULT());
	log.ult(knight->useULT(), mag);*/
}

void Fight::changeClassPerson(int value)
{
	switch (value)
	{
	case 0:
	{
		Knight* knight1 = new Knight("Knight", 10, 2, "Rima", "Dur");
		arrayHeroes.push_back(knight1);
		break;
	}
	case 1:
	{
		Mag* mag = new Mag("Mag", 3, 4, "Kolya", "Kir");
		arrayHeroes.push_back(mag);
		break;
	}
	case 2:
	{
		Elf* elf = new Elf("Elf", 3, 4, "Vova", "Kost");
		arrayHeroes.push_back(elf);
		break;
	}
	default:
		break;
	}
}

void Fight::createPerson()
{
	for (int i = 0; i < this->countPersons; i++)
	{
		changeClassPerson(getRandom(0, 2));
	}
}

void Fight::formationTeams()
{
	for (int i = 0; i < arrayHeroes.size(); i++)
	{
		log.createPerson(arrayHeroes[i]);
	}
}

int Fight::getRandom(int min, int max)
{
	rand();
	/*srand(time(NULL));*/
	
	return min + rand() % (max - min + 1);
}
