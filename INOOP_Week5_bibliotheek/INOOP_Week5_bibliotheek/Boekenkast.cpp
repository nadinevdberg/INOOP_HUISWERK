#include "Boekenkast.h"
#include "Boek.h"
#include <iostream>	



Boekenkast::Boekenkast()
{
	std::cout << "Boekenkast: constructor" << std::endl;
}

Boekenkast::~Boekenkast()
{
	std::cout << "Boekenkast: deconstructor" << std::endl;
	delete boek;
}

void Boekenkast::toon()
{
	
	std::cout << "Momenteel houdt u het boek "<< boek->_titel<< " vast." << std::endl;
}

void Boekenkast::voegToe(std::string titel)
{
	boek = new Boek(titel);
}

Boekenkast::Boekenkast(const Boekenkast & andereKast)
{
	boek = new Boek();
	boek->_titel = andereKast.boek->_titel; //maak kopie van boek uit andere kast
}

Boekenkast & Boekenkast::operator=(const Boekenkast & andereKast)
{
	if (this != &andereKast) {
		delete boek;
		boek = new Boek();
		boek->_titel = andereKast.boek->_titel;
	}
	return *this;
}


