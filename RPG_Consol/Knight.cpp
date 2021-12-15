#include "Knight.h"

int Knight::getHealthPoint()
{
    return this->healthPoint;
}

int Knight::getPower()
{
    return this->power;
}

std::string Knight::getFirstName()
{
    return this->firstName;
}

std::string Knight::getSecondName()
{
    return this->secondName;
}

void Knight::lossHealth(int healthPoint)
{
    this->healthPoint = this->healthPoint - healthPoint;
}

int Knight::useULT()
{
    return 12;
}
