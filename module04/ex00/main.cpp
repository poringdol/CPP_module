#include <string>
#include <iostream>
#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"

int main() {
	// Sorcerer sorc[5];
	// Sorcerer sorc()
	// Sorcerer sorc("Name");

	Sorcerer sorc1("Gandalf", "The Gray");
	std::cout << sorc1;
	sorc1.introduce();

	Sorcerer sorc2(sorc1);
	
	Victim vict1("Sheep");
	std::cout << vict1;
	vict1.introduce();

	Victim vict2(vict1);
}
