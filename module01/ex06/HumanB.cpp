#include <string>
#include <iostream>
#include <stdexcept>
#include "HumanB.hpp"

HumanB::HumanB(std::string n_name) {
	name = n_name;
	weapon = NULL;
}

void HumanB::setWeapon(Weapon &n_weapon) {
	weapon = &n_weapon;
}

void HumanB::attack() const {
	if (weapon == NULL)
		throw (std::out_of_range("Weapon uninitialiazed"));
	std::cout << name << " attacks with his " << (*weapon).getType() << std::endl;
}
