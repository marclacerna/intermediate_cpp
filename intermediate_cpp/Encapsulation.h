#pragma once
#include "Person.h"

class Encapsulation : public Person
{
public:
	/*  can access member var _Age and _otherName due to Protected.
		name var is private, therefore cannot be accessed
	*/
	Encapsulation() {}
	int AGE() const { return _Age; }
	void AGE(int age) { this->_Age = age; }

	char *OName() const { return _otherName; }
	void OName(char *name) { _otherName = name; }

};

