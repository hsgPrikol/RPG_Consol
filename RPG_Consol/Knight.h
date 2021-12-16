#pragma once
#include "Hero.h"
#include "Logger.h"

class Knight : public Hero
{
public:
	Knight(std::string classPerson, int healthPoint, int power, std::string firstName, std::string secondName)
	{
		this->classPerson = classPerson;
		this->healthPoint = healthPoint;
		this->power = power;
		this->firstName = firstName;
		this->secondName = secondName;
		Logger log;
		
	}
private:
	std::string classPerson;
	int healthPoint;
	int power;
	std::string firstName;
	std::string secondName;


public:
	std::string getClassPerson();
	int getHealthPoint();
	int getPower();
	std::string getFirstName();
	std::string getSecondName();


	void lossHealth(int healthPoint);
	int useULT();

};

