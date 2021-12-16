#include "Elf.h"

std::string Elf::getClassPerson()
{
    return this->classPerson;
}

int Elf::getHealthPoint()
{
    return this->healthPoint;
}

int Elf::getPower()
{
    return this->power;
}

std::string Elf::getFirstName()
{
    return this->firstName;
}

std::string Elf::getSecondName()
{
    return this->secondName;
}

void Elf::lossHealth(int healthPoint)
{
    this->healthPoint = this->healthPoint - healthPoint;
}

int Elf::useULT()
{
    return 12;
}
