#include <iostream>	
#include <vector>
#include "OpenbaarVervoer.h"
#include "Trein.h"
#include "Bus.h"
#include "Metro.h"

// Deze opdracht is gemaakt in samenwerking met Noura


int main() {
	Metro metro1 = Metro("Utrecht Centraal");
	Trein trein1 = Trein("Utrecht CS");
	Bus bus1 = Bus("Utrecht Jaarburg");

	metro1.prijsPerKm();
	metro1.maxPassagiers();
	trein1.prijsPerKm();
	trein1.maxPassagiers();
	bus1.prijsPerKm();
	bus1.maxPassagiers();

	std::cout << "\nDe metro levert in totaal $" << metro1.prijs*metro1.passagiers <<" op." <<std::endl;
	std::cout << "\nDe trein levert in totaal $" << trein1.prijs*trein1.passagiers << " op." << std::endl;
	std::cout << "\nDe bus levert in totaal $" << bus1.prijs*bus1.passagiers << " op." << std::endl; 


	

	char key;
	std::cin >> key;
	
	return 0;
}