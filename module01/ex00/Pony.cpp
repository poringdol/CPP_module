#include <iostream>
#include <string>
#include "Pony.hpp"

Pony::Pony(void) {
	std::cout << name << " is born" << std::endl;
	return;
}

Pony::~Pony(void) {
	std::cout << "Goodbye, " << name << std::endl;
}
