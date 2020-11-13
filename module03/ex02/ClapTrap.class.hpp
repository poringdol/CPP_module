#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap {
protected:
	std::string	name;
	unsigned	hit_points;
 	unsigned	max_hit_points;
	unsigned	energy_points;
	unsigned	max_energy_points;
	unsigned	level;
	unsigned	melee_attack_damage;
	unsigned	ranged_attack_damage;
	unsigned	armor_damage_reduction;
	std::string	random_attack[9];

public:
	ClapTrap();
	ClapTrap(std::string const &new_name);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned amount);
	void beRepaired(unsigned amount);
	~ClapTrap();
};

#endif