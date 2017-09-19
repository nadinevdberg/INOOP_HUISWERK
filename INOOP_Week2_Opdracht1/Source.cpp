#include <iostream>
using namespace std;
#include "Persoon.h"
#include "Student.h"
#include "Docent.h"


int main() {
	//std::cout << "HAAAAAAAAAAAAAALLO" << std::endl;
	
	// Ik wil een nieuwe docent 
	// met eigenschappen afkomstig van persoon
	// vervolgens wil ik deze eigenschappen 'cout-en'


// code hieronder werkt niet
//	Docent docent1;
	//docent1.age = 35;

	//cout << "leeftijd" << docent1.getAge << "." << endl;


	Docent leraar("Pieter", 45);
	Student student("Hans", 18);
	cout << "Vandaag heb je les van " << leraar.getName() << ". " << "Deze docent is "<<leraar.getAge()<< " jaar oud."<< endl;
	cout << "Hallo, " << student.getName() << "! " << "Je bent nu " << student.getAge() << " jaar oud. Gefeliciteerd!" << endl;

	
	char key; // zorgt dat je zwarte scherm niet meteen verdwijnt. Hiervoor kan ook een breakpoint toegevoegd worden.
	std::cin >> key;
	return 0;
	

	
	
	
}