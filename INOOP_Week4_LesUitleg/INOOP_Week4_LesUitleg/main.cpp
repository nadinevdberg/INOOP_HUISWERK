#include <iostream>

#include "Broodje.h"
#include "Broodmandje.h"

void geefMandjeDoor( Broodmandje* mandje) {
	std::cout << "Mandje gekregen " << std::endl;
	mandje->toon();
	
	mandje->voegToe("Croissant");
	mandje->toon();

}


int main() {

	Broodmandje* mandje = new Broodmandje();
	mandje->toon();
	mandje->voegToe("Ciabatta");
	mandje->toon();

	geefMandjeDoor(mandje);
	mandje->toon();




	char c;
	std::cin >> c;

	return 0;
}

// * bij een pointer
// -> zoek object dat bij deze pointer hoort