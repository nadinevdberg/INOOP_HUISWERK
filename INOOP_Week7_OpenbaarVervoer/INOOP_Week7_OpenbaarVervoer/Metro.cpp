#include <iostream>
#include "Metro.h"





void Metro::prijsPerKm()
{
	prijs = 1.30;
	std::cout << "Een kaartje voor deze metro kost $" << prijs << std::endl;
	
}

void Metro::maxPassagiers() {
	passagiers = 45;
	std::cout << "Het maximale aantal passagiers van deze metro is " << passagiers << std::endl;
}

Metro::Metro(std::string vervoersmiddel) : OpenbaarVervoer(vervoersmiddel) {}
