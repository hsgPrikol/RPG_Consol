#pragma once
#include <iostream>
#include "Hero.h"
#include "Logger.h"
#include "Knight.h"
#include "Mag.h"
#include "Elf.h"
#include <time.h>
#include <vector>

class Fight
{
private:
	Logger log;
	int countPersons = 0;
	std::vector<Hero*> arrayHeroes;
	
public:

	void test(int value);

	void setCountPersons();

	void fight();

	void changeClassPerson(int value);

	void createPerson();
	
	void formationTeams();

	int getRandom(int min, int max);
};

