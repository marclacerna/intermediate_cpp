#include "Course.h"
#include <iostream>


Course::Course()
	:_studentCount(0),  _teacherCount(0)
{
}

Course::Course(char *course)
	: _studentCount(0), _teacherCount(0)
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


#pragma region dynamic array (create, display and deletion)

Course::Course(char * course, int size)
	: _studentCount(0), _teacherCount(0)
{
	this->_course = course;
	this->_dynArrOfStudents = new Student[size];
}

void Course::dynAddPerson(Student & student)
{
	_dynArrOfStudents[_studentCount] = student;
	_studentCount += 1;
}

void Course::displayDyanmicStudents(int size)
{
	std::cout << "DYNAMIC STUDENTS" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Name: " << _dynArrOfStudents[i].Name();
		std::cout << " ,Age: " << _dynArrOfStudents[i].Age() << std::endl;
	}

	delete[] _dynArrOfStudents;
}

#pragma endregion


