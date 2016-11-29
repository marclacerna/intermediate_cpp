#include "Teacher.h"
#include "Student.h"
#include "Course.h"
#include <iostream>

// remeber to add a "delete" 
// how to print array of objs


Course::Course()
	:_arrayOfStudents(new Student[3]),_studentCount(0),_arrayOfTeachers(new Teacher) , _teacherCount(0)
{
}

Course::Course(char *course, int noStudents)
	: _studentCount(0), _teacherCount(0), _arrayOfTeachers(new Teacher)
{
	this->_arrayOfStudents = new Student[noStudents];
	this->_course = course;
}

Course::~Course()
{
}

void Course::AddPerson(Student &student)
{
	*(_arrayOfStudents + _studentCount) = student;
	_studentCount += 1;
}

void Course::AddPerson(Teacher &teacher)
{
	*(_arrayOfTeachers + _teacherCount) = teacher;
	_teacherCount += 1;
}

void Course::displayStudents() const
{
// ???
	for (int i = 0; i < _studentCount; i++)
	{
		std::cout << _arrayOfStudents->Name << std::endl;
	}
}
