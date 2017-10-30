#pragma once
#include "OpenbaarVervoer.h"


class Metro:public OpenbaarVervoer {

public:
	Metro(std::string vervoersmiddel);
	void prijsPerKm();
	void maxPassagiers();

	float prijs;
	int passagiers;

};

