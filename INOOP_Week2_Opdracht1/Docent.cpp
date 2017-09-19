	#include "Docent.h"



Docent::Docent(string naam, int leeftijd)
{
	docentNaam = naam;
	docentLeeftijd = leeftijd;
} 

int Docent::getAge() {
	return docentLeeftijd;
}

string Docent::getName()
{
	return docentNaam;
}

