#include <iostream>
#include "Boek.h"
#include "Boekenkast.h"
#include <vector>


int main() {



	Boekenkast thriller = Boekenkast();
	thriller.toon();

	std::cout << "----- Boekenkast genre 'Thriller' " << std::endl;

	thriller.voegToe("De Da Vinci Code");
	thriller.toon();

	Boekenkast horror = thriller;
	horror.voegToe("It");
	horror.toon();

	Boekenkast drama;
	drama = thriller;
	std::cout << "--- Boekenkast genre 'Drama'" << std::endl;
	drama.voegToe("Drift");
	drama.voegToe("Op een onbewoond eiland");
	drama.voegToe("Costa del Sol");
	drama.voegToe("Nieuwe Buren");
	drama.toon();

	thriller.voegToe("Het Juvenalis Dilemma");
	std::cout << "--- Boekenkast genre 'Thriller' " << std::endl;
	thriller.toon();

	std::cout << "--- Boekenkast genre 'Horror'" << std::endl;
	horror.toon();

	std::cout << "de boekenlijst van de categorie 'thriller' bestaat uit " << thriller.boekenlijst.size() << " boeken" << std::endl;
	std::cout << "de boekenlijst van de categorie 'drama' bestaat uit " << drama.boekenlijst.size() << " boeken" << std::endl;
	std::cout << "de boekenlijst van de categorie 'horror' bestaat uit " << horror.boekenlijst.size() << " boeken" << std::endl;



	char c;
	std::cin >> c;
	return 0;
}
