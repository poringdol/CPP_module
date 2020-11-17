#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>

class FragTrap {
private:
	std::string	name;
	unsigned	hitPoints = 100;
 	unsigned	maxHitPoints = 100;
	unsigned	energyPoints = 100;
	unsigned	maxEnergyPoints = 100;
	unsigned	level = 1;
	unsigned	meleeAttackDamage = 30;
	unsigned	rangedAttackDamage = 20;
	unsigned	armorDamageReduction = 5;
	std::string	randomAttack[9] = {"Come over here, I'll gnaw your legs off!",
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

	FragTrap &operator=(const FragTrap &fragtrap);
	
	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void takeDamage(unsigned amount);
	void beRepaired(unsigned amount);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif