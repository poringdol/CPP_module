#include <iostream>
#include <string>
#include "Pony.hpp"

Pony::Pony(void) {
	return;
}

Pony::~Pony(void) {
	std::cout << "Goodbye, " << name << std::endl;
}
