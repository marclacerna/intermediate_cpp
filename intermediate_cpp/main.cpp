#include "moduletwo.h"

int main(int argc, char *argv[])
{
	Student student1("Marc", "Lacerna", 24, 1111, "Everts Ave", 1111);
	Student student2("Clarice", "Labrado", 21, 2222, "Rockwell", 2222);
	Student student3;

	Student *arrayOfStudents = new Student[3];
	arrayOfStudents[0] = student1;
	arrayOfStudents[1] = student2;
	arrayOfStudents[2] = student3;

	Teacher teacher;

	Course IntermediateCpp( arrayOfStudents , teacher);

	
}