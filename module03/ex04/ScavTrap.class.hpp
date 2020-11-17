#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>
#include "ClapTrap.class.hpp"

class ScavTrap : virtual public ClapTrap{
private:
	void setHitPoints(int i = 60);
	void setMaxHitPoints(int i = 60);
	void setEnergyPoints(int i = 120);
	void setMaxEnergyPoints(int i = 120);
	void setLevel(int i = 1);
	void setMeleeAttackDamage(int i = 60);
	void setRangedAttackDamage(int i = 5);
	void setArmorDamageReduction(int i = 0);
	void setMeeleAttackMessage();
	void setRangedAttackMessage();
	void setRangeNoHitPointskMessage();
	void initScavTrap();
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
	
	void challengeNewcomer(std::string const &target);
};

#endif