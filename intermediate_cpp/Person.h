#pragma once

// use inheretance for for student and teacher
class Person
{
	private:
		char *_Name;
	protected:
		char *_otherName;
		int _Age;
	public:
		Person();
		Person(char *name, int age);
		~Person();

		char *Name() const { return _Name; }
		void Name(char *name) { this->_Name = name; }

		int Age() const { return _Age; }
		void Age(int age) { this->_Age = age; }
};
