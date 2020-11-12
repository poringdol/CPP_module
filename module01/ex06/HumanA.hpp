#ifndef HUMANA_H
#define HUMANA_H

#include <string>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string n_name, Weapon &n_weapon);
	void attack() const;

private:
	std::string	 name;
	const Weapon &weapon;
};

#endif