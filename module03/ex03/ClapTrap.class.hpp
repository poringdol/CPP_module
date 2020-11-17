#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap {
protected:
	std::string	name;
	unsigned	hitPoints = 0;
 	unsigned	maxHitPoints = 0;
	unsigned	energyPoints = 0;
	unsigned	maxEnergyPoints = 0;
	unsigned	level = 0;
	unsigned	meleeAttackDamage = 0;
	unsigned	rangedAttackDamage = 0;
	unsigned	armorDamageReduction = 0;
	std::string	randomAttack[9];

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