#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>

class ScavTrap {
private:
	std::string	name;
	unsigned	hitPoints;
 	unsigned	maxHitPoints;
	unsigned	energyPoints;
	unsigned	maxEnergyPoints;
	unsigned	level;
	unsigned	meleeAttackDamage;
	unsigned	rangedAttackDamage;
	unsigned	armorDamageReduction;
	std::string	randomAttack[9];

public:
	ScavTrap();
	ScavTrap(std::string const &new_name);
	ScavTrap(const ScavTrap &scavtrap);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &scavtrap);

	void initScavTrap();
	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void takeDamage(unsigned amount);
	void beRepaired(unsigned amount);
	void challengeNewcomer(std::string const &target);
};

#endif