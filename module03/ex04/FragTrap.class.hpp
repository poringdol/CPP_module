#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include "ClapTrap.class.hpp"

class FragTrap : virtual public ClapTrap {
protected:
	void setHitPoints(int i = 100);
	void setMaxHitPoints(int i = 100);
	void setEnergyPoints(int i = 100);
	void setMaxEnergyPoints(int i = 100);
	void setLevel(int i = 1);
	void setMeleeAttackDamage(int i = 30);
	void setRangedAttackDamage(int i = 20);
	void setArmorDamageReduction(int i = 5);
	void setMeeleAttackMessage();
	void setRangedAttackMessage();
	void setRangeNoHitPointsMessage();
	void setRandomAttack();
	void initFragTrap();
	std::string	randomAttack[9];

public:
	FragTrap();
	FragTrap(std::string const &new_name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();

	FragTrap &operator=(const FragTrap &fragtrap);

	void vaulthunter_dot_exe(std::string const &target);
};

#endif