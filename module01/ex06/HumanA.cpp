#include <string>
#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string n_name, Weapon& n_weapon) {
	name = n_name;
	weapon = n_weapon;
}

void HumanA::setWeapon(Weapon n_weapon) {
	weapon = n_weapon;
}

void HumanA::attack() {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
