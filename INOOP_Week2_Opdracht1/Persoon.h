#pragma once
#include <string>
using namespace std;

class Persoon
{
public:
	Persoon();
	
	string name;
	int age;

	virtual int getAge(int leeftijd);
	virtual string getName(string naam);
};

// gebruiken in main
// nieuwe docent waaran ik alles print
// student print alles waar ik in zit
// cout print functie c++