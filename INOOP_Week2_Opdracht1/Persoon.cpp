#include "Persoon.h"
#include <iostream>


Persoon::Persoon()
{
}

 string Persoon::getName(string naam)
{
	name = naam;
	return name;
}

 int Persoon::getAge(int leeftijd)
{
	age = leeftijd;
	return age;
}


