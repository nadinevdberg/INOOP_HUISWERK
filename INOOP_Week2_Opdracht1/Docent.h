#pragma once
#include "Persoon.h"
class Docent : public Persoon
{
public:
	Docent(string naam, int leeftijd);
	string docentNaam;
	int getAge();
	string getName();
	int docentLeeftijd;
	int uurloon;
};

