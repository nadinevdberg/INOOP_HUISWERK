#pragma once
#include "Boek.h"

class Boekenkast
{
public:
	Boekenkast();
	void toon();
	void voegToe(std::string titel);


private:
	Boek* boek = new Boek();
};

