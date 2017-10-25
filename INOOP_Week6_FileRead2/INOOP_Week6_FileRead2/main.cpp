#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#define FILE "D://School//HKU Leerjaar 2//C++//INOOP_HUISWERK//hello.txt"
#define FILE1 "D://School//HKU Leerjaar 2//C++//INOOP_HUISWERK//shade1.txt"
#define FILE2 "D://School//HKU Leerjaar 2//C++//INOOP_HUISWERK//shade2.txt"

int main() {
	char ch;
	std::string result;
	std::ifstream in_stream;  //uit een bestand lezen

	in_stream.open(FILE);   //open file

	if (!in_stream) { //als file niet geopend kan worden
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);  //sluit programma af
	}

	std::ofstream out_stream; //bestand schrijven
	out_stream.open("D:\\School\\HKU Leerjaar 2\\C++\\INOOP_HUISWERK\\INOOP_Week6_FileRead2\\helloOut.txt");
	if (!out_stream) {
		std::cout << "Probleem bij outstream" << std::endl;
		exit(1);
	}



	//voeg alle karakter in 1 string (result)
	while (!in_stream.eof()) {
		in_stream >> ch; //leest 1e karakter

		result = result + ch;

	}


	//lees formaat van de string én lees hem achterstevoren uit
	for (int i = result.size() - 1; i >= 0; i--) {

		out_stream << result.at(i);
	}

	in_stream.close();
	out_stream.close();

	//------------------------------------------------------------------------------------------------

	std::ifstream in_stream1;
	std::ifstream in_stream2;
	std::ofstream of_stream1;

	std::string result1;
	std::string result2;

	in_stream1.open(FILE1);
	in_stream2.open(FILE2);

	of_stream1.open("D:\\School\\HKU Leerjaar 2\\C++\\INOOP_HUISWERK\\INOOP_Week6_FileRead2\\mixedHello.txt");
	std::vector<std::string> result1vector;
	std::vector<std::string> result2vector;
	in_stream1 >> std::noskipws;
	in_stream2 >> std::noskipws;

	while (!in_stream1.eof()) {

		getline(in_stream1, result1);
		result1vector.push_back(result1);
	}

	while (!in_stream2.eof()) {
		getline(in_stream2, result2);
		result2vector.push_back(result2);
	}


	in_stream1.close();
	in_stream2.close();
	std::cout << result1vector.size() << std::endl;
	std::cout << result2vector.size() << std::endl;

	


	for (int i =0; i < result1vector.size(); i++) {
		std::cout << result1vector.at(i) << std::endl;
		std::cout << result2vector.at(i) << std::endl;
		of_stream1 << result1vector.at(i) << std::endl;
		of_stream1 << result2vector.at(i) << std::endl;

		//out_stream << result1.at(i);
	}




	char key;
	std::cin >> key;
	return 0;
}