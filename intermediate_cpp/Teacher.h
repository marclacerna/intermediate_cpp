#pragma once

#include "Person.h"

class Teacher : public Person
{
private:
	char *_course;

public:
	Teacher();
	Teacher(char *name, int age, char *course);
	~Teacher();
	void GradeStudent();
	void SitInClass();
};