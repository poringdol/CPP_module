#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap {
protected:
	std::string	name;
	unsigned	hit_points = 0;
 	unsigned	max_hit_points = 0;
	unsigned	energy_points = 0;
	unsigned	max_energy_points = 0;
	unsigned	level = 0;
	unsigned	melee_attack_damage = 0;
	unsigned	ranged_attack_damage = 0;
	unsigned	armor_damage_reduction = 0;
	std::string	random_attack[9];

public:
	ClapTrap();
	ClapTrap(std::string const &new_name);
	ClapTrap(const ClapTrap &claptrap);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &claptrap);
	
	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void takeDamage(unsigned amount);
	void beRepaired(unsigned amount);
};

#endif