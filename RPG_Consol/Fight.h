#pragma once
#include <iostream>
#include "Hero.h"
#include "Logger.h"
#include "Knight.h"
#include "Mag.h"

class Fight
{
private:
	Hero *hero;
	Hero *hero1;
	Logger log;

public:

	void fight();
	
};

