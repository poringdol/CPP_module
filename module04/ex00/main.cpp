#include <string>
#include <iostream>
#include "Sorcerer.class.hpp"

int main() {
	Sorcerer sorc1("Gandalf", "The Gray");
	std::cout << sorc1;

	Sorcerer sorc2(sorc1);
	std::cout << sorc2;
}
