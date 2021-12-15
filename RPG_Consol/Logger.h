#pragma once
#include <iostream>
#include "Hero.h"

class Logger
{
private:
	
public:
	void print(int hp);

	void ult(int hit, Hero *hero);

	void createPerson(Hero *hero);
};

