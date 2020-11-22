#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>

class FragTrap {
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
	FragTrap();
	FragTrap(std::string const &new_name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();

	FragTrap &operator=(const FragTrap &fragtrap);

	void initFragTrap();
	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void takeDamage(unsigned amount);
	void beRepaired(unsigned amount);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif