#include "Student.h"
#include "Teacher.h"
#include <iostream>

int main(int argc, char *argv[])
{
	Student student1;
	std::cout << student1.Age() << std::endl;

	Student student2("marc lacerna", 24, "koala101");
	student2.SitInClass();

	Teacher teach("drblu", 99, "koala101");
	teach.GradeStudent();
	
}