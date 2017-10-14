#pragma once
#include "Broodje.h"

class Broodmandje
{
public:
	Broodmandje();
	virtual ~Broodmandje(); //destructor
	void toon();
	void voegToe(std::string type);
	Broodmandje(const Broodmandje& anderMandje); // als bron voor data ander mandje (copy constructor)
	
	//als je == gebruikt in een assignment context, dan moet je daar deze fucntie voor gaan gebruiken (assignment operator)
	Broodmandje& operator =(const Broodmandje&);

private:
	
	Broodje* broodje = new Broodje(); //geeft adres van het object terug
};

