#pragma once
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

class AnimalDetector
{
public:

	//overloading -- meerdere versies van zelfde methode met verschillende parameters
	void detect(Animal a);
	void detect(Cat c);
	void detect(Dog d);
};


