#pragma once
#include "Boek.h"
#include <vector>

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
	std::vector<Boek*> boekenlijst; //hier maak ik, in de kast, de lijst aan


private:
	Boek* boek = new Boek();
};

