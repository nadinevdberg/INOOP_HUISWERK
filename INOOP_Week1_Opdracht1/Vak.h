#pragma once
#include <string>

class Vak
{
public:
	Vak();
	~Vak();
	std::string name;			//naam van het vak
	std::string locatie;		// lokaal
	std::string studieRichting; //studierichting desbetreffend vak
	std::string datum;			//datum van het desbetreffende vak
	std::string lokaal;			//lokaal
	
	int beginTijd;				//begintijd les
	int eindTijd;				//eindtijd les
	
	
	
};

