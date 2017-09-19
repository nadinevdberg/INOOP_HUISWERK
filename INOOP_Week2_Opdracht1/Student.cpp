#include "Student.h"



Student::Student(string naam, int leeftijd)
{
	studentNaam = naam;
	studentLeeftijd = leeftijd;
}

int Student::getAge()
{
	return studentLeeftijd;
}

string Student::getName()
{
	return studentNaam;
}
