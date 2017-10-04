#include "AnimalDetector.h"
#include <iostream>

void AnimalDetector::detect(Animal a)
{
	std::cout << "some sort of animal" << std::endl;
}

void AnimalDetector::detect(Cat c)
{
	std::cout << "It's Karel!!" << std::endl;
}

void AnimalDetector::detect(Dog d)
{
	std::cout << "It's a dog..." << std::endl;
}
