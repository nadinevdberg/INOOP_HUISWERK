#include "Trein.h"
#include <iostream>

void Trein::prijsPerKm()
{
	prijs = 2.00;
	std::cout << "Een kaartje voor deze trein kost $" << prijs << std::endl;
	
}


void Trein::maxPassagiers()
{
	passagiers = 120;
	std::cout << "Het maximale aantal passagiers van deze trein is " << passagiers << std::endl;
}


Trein::Trein(std::string vervoersmiddel) : OpenbaarVervoer(vervoersmiddel) {}