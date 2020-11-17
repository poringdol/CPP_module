#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>

class ScavTrap {
private:
	std::string	name;
	unsigned	hitPoints = 100;
 	unsigned	maxHitPoints = 100;
	unsigned	energyPoints = 50;
	unsigned	maxEnergyPoints = 50;
	unsigned	level = 1;
	unsigned	meleeAttackDamage = 20;
	unsigned	rangedAttackDamage = 15;
	unsigned	armorDamageReduction = 3;
	std::string	randomAttack[9] = {"I did a challenge? I did a challenge!",
									"Pain school is now in session. Ready for the PUNCHline?!",
									"Gloves are comin' off!",
									"Now I will dominate!",
									"Burn, baby, burn!",
									"I will prove to you my robotic superiority!",
									"Man versus machine! Very tiny streamlined machine!",
									"A million baddies, and you wanna hit me? Aww!",
									"Ha ha ha! Fall before your robot overlord!"};

public:
	ScavTrap();
	ScavTrap(std::string const &new_name);
	ScavTrap(const ScavTrap &scavtrap);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &scavtrap);

	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void takeDamage(unsigned amount);
	void beRepaired(unsigned amount);
	void challengeNewcomer(std::string const &target);
};

#endif