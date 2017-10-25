#include <iostream>
#include "main.h"
#include <fstream>
#include <string>

#define FILE "D:\\School\\HKU Leerjaar 2\\C++\\INOOP_HUISWERK\\StringDing\\Debug\\hello.txt"

int main() {
	char ch;
	char ch2;
	std::ifstream in_stream; //uit een bestand lezen
	in_stream.open(FILE);
	if (!in_stream) {
		std::cout << "probleem met inladen! " << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open("C:	\\Users\\Nadine\\Desktop\\testout.txt");  //maak een file aan
	if (!out_stream) {
		std::cout << "probleem met outstream inladen! " << std::endl;
		exit(1);
	}

	bool skip = true;

	while (!in_stream.eof()) {
		in_stream >> ch; //leest 1e karakter
		in_stream >> ch2; // leest 2e karakter

		skip = !skip;

		if (!skip) {

			out_stream << ch;
		}
	}

	out_stream.close();
	in_stream.close();




	
/*
	in_stream >> std::noskipws;
	std::string data;


	

	while (!in_stream.eof()) {
		getline(in_stream, data);
		std::cout << data;
		in_stream >> ch;
		
		std::cout << ch;
	}
	*/
	in_stream.close();

	char key; 
	std::cin >> key;
	return 0;
}