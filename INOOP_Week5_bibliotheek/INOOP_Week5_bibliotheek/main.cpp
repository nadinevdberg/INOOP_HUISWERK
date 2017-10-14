#include <iostream>
#include "Boek.h"
#include "Boekenkast.h"

void verwisselBoek(Boekenkast* nieuwBoek) {
	std::cout << "Boek gekregen " << std::endl;
	nieuwBoek->toon();
	nieuwBoek->voegToe("Costa Del Sol");
	nieuwBoek->toon();
	nieuwBoek->voegToe("Laat niet los");


}


int main() {

	Boekenkast* nieuwBoek = new Boekenkast();
	nieuwBoek->toon();
	nieuwBoek->voegToe("Drift");
	nieuwBoek->toon();
	nieuwBoek->voegToe("Mont Blanc");
	nieuwBoek->toon();

	verwisselBoek(nieuwBoek);
	nieuwBoek->toon();

	char c;
	std::cin >> c;
	return 0;
}
