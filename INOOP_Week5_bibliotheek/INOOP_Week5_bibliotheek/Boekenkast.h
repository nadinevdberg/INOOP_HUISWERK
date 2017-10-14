#pragma once
#include "Boek.h"

class Boekenkast
{
public:
	Boekenkast();
	virtual ~Boekenkast(); //deconstructor
	void toon();
	void voegToe(std::string titel);

	//copy constructor
	Boekenkast(const Boekenkast& andereKast);

	//assignment operator
	Boekenkast& operator =(const Boekenkast&);

private:
	Boek* boek = new Boek();
};

