#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include <iostream>

int main(int argc, char *argv[])
{
	Student student1;
	std::cout << student1.Age() << std::endl;

	Student student2("marc lacerna", 24, "koala101");
	student2.SitInClass();

	Teacher teach1;
	Teacher teach("drblu", 99, "koala101");
	teach.GradeStudent();

	Course Period1("Math");
	Period1.AddPerson(student1);
	Period1.AddPerson(student2);
	Period1.AddPerson(teach1);
	Period1.AddPerson(teach);
	Period1.displayCourse();
	Period1.displayStudents();
	Period1.displayTeachers();
	
}