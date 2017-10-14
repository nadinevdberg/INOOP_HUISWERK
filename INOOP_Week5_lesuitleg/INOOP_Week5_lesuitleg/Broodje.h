#pragma once
#include <string>

class Broodje
{
public:
	Broodje();
	virtual ~Broodje();
	Broodje(std::string type);

	std::string _type = "onbekend";

private:

};

