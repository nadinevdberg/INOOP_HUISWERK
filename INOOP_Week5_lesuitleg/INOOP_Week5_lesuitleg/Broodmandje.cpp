#include "Broodmandje.h"
#include <iostream>



Broodmandje::Broodmandje()
{
	std::cout << "Broodmandje: constructor" << std::endl;
}

Broodmandje::~Broodmandje()
{
	std::cout << "Broodmandje: destructor" << std::endl;
	delete broodje;
}



void Broodmandje::toon()
{

	std::cout << "Brood in mandje: " << broodje->_type << std::endl;

}

void Broodmandje::voegToe(std::string type)
{
	delete broodje;
	broodje = new Broodje(type);
}

Broodmandje::Broodmandje(const Broodmandje & anderMandje) //hierdoor hoeven de mandjes geen broodjes te delen
{
	broodje = new Broodje();
	broodje->_type = anderMandje.broodje->_type; // we nemen broodje uit ander mandje en daar kopiëren we het type van

}

Broodmandje & Broodmandje::operator=(const Broodmandje & anderMandje)
{
	if (this != &anderMandje) { //bescherm jezelf door je pc niet te laten crashen wanneer je per ongeluk naar jezelf refereert (mandje 2 = mandje 2 bijvoorbeeld)
		delete broodje; //unknown broodje weggooien
		broodje = new Broodje(); //broodje met pointer (eigen broodje)
		broodje->_type = anderMandje.broodje->_type;  //type overzetten naar eigen broodje
	}
	return *this;
}


