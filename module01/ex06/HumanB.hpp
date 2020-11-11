#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string n_name);
	void setWeapon(Weapon n_weapon);
	void attack();

private:
	std::string	name;
	Weapon		weapon;
};


#endif