#pragma once

#include "Person.h"

class Student :public Person
{
private:
	char *_course;

public:
	Student();
	Student(char *name, int age, char *course);
	~Student();
	void SitInClass();
};