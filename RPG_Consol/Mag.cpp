#include "Mag.h"

std::string Mag::getClassPerson()
{
    return this->classPerson;
}

int Mag::getHealthPoint()
{
    return this->healthPoint;
}

int Mag::getPower()
{
    return this->power;
}

std::string Mag::getFirstName()
{
    return this->firstName;
}

std::string Mag::getSecondName()
{
    return this->secondName;
}

void Mag::lossHealth(int healthPoint)
{
    this->healthPoint = this->healthPoint - healthPoint;
}

int Mag::useULT()
{
    return 10;
}

