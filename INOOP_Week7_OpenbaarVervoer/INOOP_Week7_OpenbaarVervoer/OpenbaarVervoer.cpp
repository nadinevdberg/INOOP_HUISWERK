#include "OpenbaarVervoer.h"	
#include <iostream>


void OpenbaarVervoer::prijsPerKm() {
	std::cout << "prijs per kilometer" << std::endl;
}


OpenbaarVervoer::OpenbaarVervoer(const std::string& vervoersmiddel) : vervoersmiddel(vervoersmiddel){
}



OpenbaarVervoer::OpenbaarVervoer()
{
	std::cout << "Openbaar Vervoer" << std::endl;
}


