#include "moduletwo.h"
#include <iostream>

Teacher::Teacher()
{
}

Teacher::Teacher(char * _FirstName, char * _LastName, int _Age, int _Address, char * _City, int _Phone)
{
	this->_FirstName = _FirstName;
	this->_LastName = _LastName;
	this->_Age = _Age;
	this->_Address = _Address;
	this->_City = _City;
	this->_Phone = _Phone;
}

Teacher::~Teacher() :
	_FirstName("fname"), _LastName("lname"), _Age(0), _Address(0), _City("city"), _Phone(000000000)
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

Student::Student():
	_FirstName("fname"), _LastName("lname"), _Age(0), _Address(0), _City("city"), _Phone(000000000)
{
}

Student::Student(char * _FirstName, char * _LastName, int _Age, int _Address, char * _City, int _Phone)
{
	this->_FirstName = _FirstName;
	this->_LastName = _LastName;
	this->_Age = _Age;
	this->_Address = _Address;
	this->_City = _City;
	this->_Phone = _Phone;
}

Student::~Student()
{
}

void Student::SitInClass()
{
	std::cout << "Sitting in main theater" << std::endl;
}

Course::Course()
{
}

Course::Course(Student&, Student&, Student&, Teacher&)
{
	Student student[3] = {
		this-> 
	}
}

Course::~Course()
{
}
