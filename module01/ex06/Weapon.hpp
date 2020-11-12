#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
	Weapon();
	Weapon(const std::string &new_weapon);
	void setType(const std::string &new_weapon);
	const std::string &getType() const;

private:
	std::string weapon;
};

#endif