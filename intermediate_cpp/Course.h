#pragma once
#include "Student.h"
#include "Teacher.h"

class Course
{
private:
	int _studentCount;
	int _teacherCount;

protected:
	//c++ has static array, need to reallocate if want to resize. std::vector is recommended
	Student _arrayOfStudents[3];
	Teacher _arrayOfTeachers[3];
	char *_course;
public:
	Course();
	Course(char *course);
	~Course();
	void AddPerson(Student &student);
	void AddPerson(Teacher &teacher);
	
	char *displayCourse() const { return _course; }
	void displayStudents();
	void displayTeachers();
};