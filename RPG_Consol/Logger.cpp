#include "Logger.h"

void Logger::print(int hp)
{
	std::cout << hp;
}

void Logger::ult(int hit, Hero *hero)
{
	std::cout << "use ult " << hit << "left hp ";
}

void Logger::createPerson(Hero *hero)
{
	std::cout << "Created Person with the following characteristics:\n";
	std::cout << "Class Person is " << hero->getClassPerson() << ";\n";
	std::cout << "Firstname is " << hero->getFirstName() << ";\n";
	std::cout << "Secondname is " << hero->getSecondName() << ";\n";
	std::cout << "Health point is " << hero->getHealthPoint() << ";\n";
	std::cout << "Power is " << hero->getPower() << ";\n\n";
}

void Logger::enterCountsPersons()
{
	std::cout << "Enter value for will create counts Person\n";
}
