#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "AnimalDetector.h"

//animal ontvang een bepaalde parameter van animal. alles van cat en dog valt weg. alles wat niet animal is, wordt weggegooid
//dit noemen we object slicing. 

//door & wordt er geen kpoie meer gemaakt. dit noem je reference
//geen kopie: gebruik originele object dat ik mee geef
void saySomething(Animal& animal) {
	animal.makeNoise();
}

int main() {


	//Class naam = methode (constructor)
	Animal animal1 = Animal();
	Dog animal2 = Dog();
	Cat animal3 = Cat();

	animal1.makeNoise();
	animal2.makeNoise();
	animal3.makeNoise();


	saySomething(animal1);
	saySomething(animal2);
	saySomething(animal3);

	AnimalDetector detector = AnimalDetector();
	detector.detect(animal1);
	detector.detect(animal2);
	detector.detect(animal3);

	char c;
	std::cin >> c;

	return 0;
}