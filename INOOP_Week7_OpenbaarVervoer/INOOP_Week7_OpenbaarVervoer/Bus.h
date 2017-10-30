#pragma once
#include "OpenbaarVervoer.h"

class Bus:public OpenbaarVervoer
{
public:
	Bus(std::string vervoersmiddel);
	void prijsPerKm();
	void maxPassagiers();

	float prijs;
	int passagiers;


};

