#include "Person.h"
#include <iostream>

Person::Person():
	_Name("no name"), _Age(0)
{
	std::cout << "Person() constructor" << std::endl;
}

Person::Person(char *name, int age)
{
	this->_Name = name;
	this->_Age = age;

	std::cout << "Person(....) constructor" << std::endl;
}

Person::~Person()
{
}

