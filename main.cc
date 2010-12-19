#include "main.h"
#include <cstdio>
#include <iostream>
#include <string>
#include "Gladius.h"

int
main(int argc, char** argv){
	if (std::string(argv[1]) == "test"){
		Gladius::set_test();
		std::cout<<"test was selected!" << std::endl;
	}
	std::cout << Gladius::instance()->get_version() << std::endl;
	printf(argv[1]);
	std::string s;
	std::cin.get();
	return printf("HELLO WORLD!\n");
}
