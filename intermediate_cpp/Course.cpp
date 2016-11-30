#include "Course.h"
#include <iostream>

// remeber to add a "delete" 
// how to print array of objs


Course::Course()
	:_studentCount(0),  _teacherCount(0)
{
}

Course::Course(char *course)
	:_studentCount(0), _teacherCount(0)
{
	this->_course = course;
}

Course::~Course()
{
}

void Course::AddPerson(Student &student)
{
	_arrayOfStudents[_studentCount] = student;
	_studentCount += 1;
}

void Course::AddPerson(Teacher &teacher)
{
	*(_arrayOfTeachers + _teacherCount) = teacher;
	_teacherCount += 1;
}

void Course::displayStudents()
{
	std::cout << "STUDENT(S) LIST" << std::endl;
	for each(Student i in _arrayOfStudents)
	{
		std::cout << "Name: " << i.Name();
		std::cout << " ,Age: " << i.Age() << std::endl;
	}
}

void Course::displayTeachers()
{
	std::cout << "TEACHER LIST" << std::endl;
	for each(Teacher i in _arrayOfTeachers)
	{		
		std::cout << "Name: " << i.Name();
		std::cout << " ,Age: " << i.Age() << std::endl;
	}
}
