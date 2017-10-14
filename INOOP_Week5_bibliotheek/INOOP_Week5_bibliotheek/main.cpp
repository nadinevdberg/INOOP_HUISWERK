#include <iostream>
#include "Boek.h"
#include "Boekenkast.h"
#include <vector>


int main() {

	//vector<Boek*> boeken;


	Boekenkast thriller = Boekenkast();
	thriller.toon();

	std::cout << "----- Boekenkast genre 'Thriller' " << std::endl;

	thriller.voegToe("De Da Vinci Code");
	thriller.toon();

	Boekenkast horror = thriller;
	//horror.voegToe("It");
	horror.toon();

	Boekenkast drama;
	drama = thriller;
	std::cout << "--- Boekenkast genre 'Drama'" << std::endl;
	drama.toon();

	thriller.voegToe("Het Juvenalis Dilemma");
	std::cout << "--- Boekenkast genre 'Thriller' " << std::endl;
	thriller.toon();

	std::cout << "--- Boekenkast genre 'Horror'" << std::endl;
	horror.toon();




	char c;
	std::cin >> c;
	return 0;
}
