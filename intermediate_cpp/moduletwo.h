#pragma once

// use inheretance for for student and teacher
class Student
{
	private:
		char *_FirstName;
		char *_LastName;
		int _Age;
		int _Address;
		char *_City;
		int _Phone;
	public:
		Student();
		Student(
			char *_FirstName,
			char *_LastName,
			int _Age,
			int _Address,
			char *_City,
			int _Phone);
		~Student();
		char *FName() const { return _FirstName; }
		void FName() { this->_FirstName = _FirstName; }

		char *LName() const { return _LastName; }
		void LName() { this->_LastName = _LastName; }

		char *City() const { return _City; }
		void City() { this->_City = _City; }

		int Age() const { return _Age; }
		void Age() { this->_Age = _Age; }

		int Address() const { return _Address; }
		void Address() { this->_Address = _Address; }

		int Phone() const { return _Phone; }
		void Phone() { this->_Phone = _Phone; }

		void SitInClass();
};

class Teacher
{
	private:
		char *_FirstName;
		char *_LastName;
		int _Age;
		int _Address;
		char *_City;
		int _Phone;
	public:
		Teacher();
		Teacher(
			char *_FirstName,
			char *_LastName,
			int _Age,
			int _Address,
			char *_City,
			int _Phone);
		~Teacher();
		char *FName() const { return _FirstName; }
		void FName() { this->_FirstName = _FirstName; }

		char *LName() const { return _LastName; }
		void LName() { this->_LastName = _LastName; }

		char *City() const { return _City; }
		void City() { this->_City = _City; }

		int Age() const { return _Age; }
		void Age() { this->_Age = _Age; }

		int Address() const { return _Address; }
		void Address() { this->_Address = _Address; }

		int Phone() const { return _Phone; }
		void Phone() { this->_Phone = _Phone; }

		void GradeStudent();
		void SitInClass();
};

class Course
{
	public:
		Course();
		Course(Student *students, Teacher *teacher);
		~Course();
	private:
		char *_CourseName;




};
