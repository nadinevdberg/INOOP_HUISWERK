#include <iostream>

#include "Broodje.h"
#include "Broodmandje.h"



int main() {

	Broodmandje mandje1 = Broodmandje();
	mandje1.toon();

	std::cout << "-- - mandje1 " << std::endl;
	mandje1.voegToe("ciabatta");
	mandje1.toon();

//	Broodmandje mandje2 = mandje1; // mandje 2 aanmaken op basis van mandje 1
	
	Broodmandje mandje2;
	mandje2 = mandje1; //geen nieuw object, object bestaat al. giet gewoon de waarde van 1 over naar 2 (assignment)
	std::cout << "-- - mandje2  " << std::endl;
	mandje2.toon();
	
	mandje1.voegToe("croissant");
	std::cout << "-- - mandje1 " << std::endl;
	mandje1.toon();

	std::cout << "-- - mandje2 " << std::endl;
	mandje2.toon();

	char c;
	std::cin >> c;

	return 0;
}

// * bij een pointer
// -> zoek object dat bij deze pointer hoort