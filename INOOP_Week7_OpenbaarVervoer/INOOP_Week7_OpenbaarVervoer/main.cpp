#include <iostream>	
#include <vector>
#include "OpenbaarVervoer.h"
#include "Trein.h"
#include "Bus.h"
#include "Metro.h"


void saySomething(OpenbaarVervoer& vervoer) {
	vervoer.prijsPerKm();
	vervoer.maxPassagiers();
}

void saySomething(OpenbaarVervoer* vervoer) {
	vervoer->prijsPerKm();
}


int main() {
	Metro metro1 = Metro("Utrecht Centraal");
	metro1.prijsPerKm();

	saySomething(metro1);

	std::cout << "hallo" <<std::endl;

	char key;
	std::cin >> key;
	
	return 0;
}