#include "Boekenkast.h"
#include "Boek.h"
#include <iostream>	



Boekenkast::Boekenkast()
{
}

void Boekenkast::toon()
{
	
	std::cout << "Momenteel houdt u het boek "<< boek->_titel<< " vast." << std::endl;
}

void Boekenkast::voegToe(std::string titel)
{
	boek = new Boek(titel);
}


