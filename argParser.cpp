/*
   argParser

   A framework for managing the input args

   A reinvented wheel by Lesley Phillips

*/

#include <vector>
#include <iostream>
#include <string>

struct arg {
	std::string value {};
};

void argParse(int argc, char* argv[]) {
	int i = 1;
	for (i = 1; i < argc; ++i) {
		std::cout << argv[i] <<"\n";
	}
}


int main(int argc, char* argv[]) {
	if (argc > 1) argParse(argc, argv);
}

