#include <string>
#include "Weapon.hpp"

Weapon::Weapon() : weapon("none") {}

Weapon::Weapon(const std::string &new_weapon) : weapon (new_weapon) {}

void Weapon::setType(const std::string &new_weapon) {
	weapon = new_weapon;
}

const std::string &Weapon::getType() const {
	return (weapon);
}