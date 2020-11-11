#include <string>
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string n_name) {
	name = n_name;
}

void HumanB::setWeapon(Weapon n_weapon) {
	weapon = n_weapon;
}

void HumanB::attack() {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
