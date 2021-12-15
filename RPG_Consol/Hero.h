#pragma once
#include <iostream>

class Hero
{
private: 
		
public: 
	virtual void lossHealth(int healthPoint) = 0;
	
	virtual int useULT() = 0;


	virtual int getHealthPoint() = 0;
	virtual int getPower() = 0;
	virtual std::string getFirstName() = 0;
	virtual std::string getSecondName() = 0;
};

