#pragma once
#include <iostream>

class Hero
{
private: 
		
public: 
	virtual void lossHealth(int healthPoint);
	
	virtual int useULT();

	virtual std::string getClassPerson();
	virtual int getHealthPoint() ;
	virtual int getPower();
	virtual std::string getFirstName();
	virtual std::string getSecondName();
};

