/*
   argParser

   A framework for managing the input args

   A reinvented wheel by Lesley Phillips

   argParserTest /? /dir:c:\data /r:"hello world"
   argParserTest /? /dir c:\data /r "hello world"
   argParserTest /? /dir c:\data /r """hello world"""

*/

#include <iostream>

void argParse(int argc, char* argv[]) {
	for (int i = 1; i < argc; ++i) {
		std::cout << argv[i] <<"\n";
	}
}

int main(int argc, char* argv[]) {
	if (argc > 1) {
		argParse(argc, argv);
	}
	else {
		std::cout << "No args.\n";
	}
}

