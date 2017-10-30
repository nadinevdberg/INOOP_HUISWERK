#include "Bus.h"
#include <iostream>




void Bus::prijsPerKm()
{
	prijs = 1.00;
	std::cout << "Een kaartje voor deze bus kost $" << prijs << std::endl;
}

void Bus::maxPassagiers()
{
	passagiers = 30;
	std::cout << "Het maximale aantal passagiers van deze bus is " << passagiers << std::endl;
}



Bus::Bus(std::string vervoersmiddel):OpenbaarVervoer(vervoersmiddel)
{
}