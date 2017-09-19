#pragma once
#include "Persoon.h"

class Student : public Persoon {
public:
	Student( string naam, int leeftijd);
	int koffiePerDag;
	string studentNaam;
	int studentLeeftijd;

	int getAge();
	string getName();

};


