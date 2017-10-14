#include "Broodje.h"

#include <string>
#include <iostream>


Broodje::Broodje(std::string type)
{
	_type = type;
}

Broodje::Broodje() {
	std::cout << "Broodje: constructor" << std::endl;
}

Broodje::~Broodje()
{
	std::cout << "Broodje: deconstructor" << std::endl;
}
