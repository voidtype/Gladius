#include "main.h"
#include <cstdio>
#include <iostream>
#include <string>
#include "Gladius.h"

int
main(void){
	std::cout << Gladius::instance()->get_version() << std::endl;
	printf("lol commit!!!!");
	std::string s;
	std::cin.get();
	return printf("HELLO WORLD!\n");
}
