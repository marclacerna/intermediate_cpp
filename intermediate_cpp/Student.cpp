#include "Student.h"
#include <iostream>

Student::Student() :
	_course("[no course selected]")
{
	std::cout << "Student() constructor" << std::endl;
}

Student::Student(char * name, int age, char *course)
	: Person(name, age), _course(course)
{
	std::cout << "Student(....) constructor" << std::endl;
}

Student::~Student()
{
}

void Student::SitInClass()
{
	std::cout << "Sitting in " << _course <<std::endl;
}