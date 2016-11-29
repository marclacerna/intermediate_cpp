#pragma once
#include "Student.h"
#include "Teacher.h"

class Course
{
private:
	Student *_arrayOfStudents;
	int _studentCount;
	Teacher *_arrayOfTeachers;
	int _teacherCount;
	char *_course;
public:
	Course();
	Course(char *course, int noStudents);
	~Course();
	void AddPerson(Student &student);
	void AddPerson(Teacher &teacher);
	
	char *displayCourse() const { return _course; }
	void displayStudents() const;
	//void displayTeachers() const;
};