#ifndef FragTrap_H
#define FragTrap_H

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
	void initFragTrap();
	std::string	random_attack[9] = {"Come over here, I'll gnaw your legs off!",
									"I fart rainbows! Bask in my aura of death!",
									"Lightening! Kukachow! Zippity doodah!",
									"Meet professor punch!",
									"Take two bullets, then call me in the morning.",
									"I brought you a present: EXPLOSIONS!",
									"Dance battle! Or, you know... regular battle.",
									"Don't bother with plastic surgery - there's NO fixing that!",
									"Did someone feel something? I am NOT sorry!"};

public:
	FragTrap();
	FragTrap(std::string const &new_name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();

	FragTrap& operator=(const FragTrap &fragtrap);

	void vaulthunter_dot_exe(std::string const &target);
};

#endif