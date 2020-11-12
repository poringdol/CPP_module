#include <string>
#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string n_name, Weapon &n_weapon) : weapon(n_weapon) {
	name = n_name;
}

void HumanA::attack() const {
	std::cout << name << " attacks with his " <<
				 weapon.getType() << std::endl;
}
