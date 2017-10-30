#include <iostream>
#include "Metro.h"





void Metro::prijsPerKm()
{
	prijs = 1;
	std::cout << "Kaartje kost €" << prijs << ".00" << std::endl;
	
}

void Metro::maxPassagiers() {
	passagiers = 45;
	std::cout << "Het maximale aantal passagiers is " << passagiers << std::endl;
}

Metro::Metro(std::string vervoersmiddel) : OpenbaarVervoer(vervoersmiddel) {}
