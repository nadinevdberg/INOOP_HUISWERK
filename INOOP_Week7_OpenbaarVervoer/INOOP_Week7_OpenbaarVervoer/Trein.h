#pragma once
#include "OpenbaarVervoer.h"


class Trein:public OpenbaarVervoer {

public:
	Trein(std::string vervoersmiddel);
	void prijsPerKm();
	void maxPassagiers();

	float prijs;
	int passagiers;
};

