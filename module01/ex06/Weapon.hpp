#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
	Weapon();
	Weapon(std::string new_weapon);
	void setType(std::string new_weapon);
	const std::string& getType() const;

private:
	std::string weapon;
};

#endif