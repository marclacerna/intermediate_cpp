#include "Teacher.h"
#include <iostream>

Teacher::Teacher()
	:_course("[no course selected]")
{
	std::cout << "Teacher() constructor" << std::endl;
}

Teacher::Teacher(char * name, int age, char * course)
	: Person(name, age), _course(course)
{
	std::cout << "Teacher(....) constructor" << std::endl;
}

Teacher::~Teacher()
{
}

void Teacher::GradeStudent()
{
	std::cout << "Student graded" << std::endl;
}

void Teacher::SitInClass()
{
	std::cout << "Sitting at front of class" << std::endl;
}
