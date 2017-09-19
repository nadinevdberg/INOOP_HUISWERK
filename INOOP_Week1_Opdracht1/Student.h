#pragma once
#include <string>
class Student
{
public:
	Student();
	~Student(); // blijkbaar vernietigd dit het object. deconstructor. 
	std::string name;
	std::string studieRichting;

};

