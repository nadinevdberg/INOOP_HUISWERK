#pragma once
#include "Animal.h"

//cat inherit animal
class Cat: public Animal  
{
public:
	void makeNoise() override;
};

