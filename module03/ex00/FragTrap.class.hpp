#ifndef FragTrap_H
#define FragTrap_H

#include <string>

class FragTrap {
private:
	std::string	name;
	unsigned	hit_points = 100;
 	unsigned	max_hit_points = 100;
	unsigned	energy_points = 100;
	unsigned	max_energy_points = 100;
	unsigned	level = 1;
	unsigned	melee_attack_damage = 30;
	unsigned	ranged_attack_damage = 20;
	unsigned	armor_damage_reduction = 5;
	std::string	random_attack[10] = {"Come over here, I'll gnaw your legs off!",
									"I fart rainbows! Bask in my aura of death!",
									"Lightening! Kukachow! Zippity doodah!",
									"Burn, baby, burn!",
									"Meet professor punch!",
									"Take two bullets, then call me in the morning.",
									"I brought you a present: EXPLOSIONS!",
									"Dance battle! Or, you know... regular battle.",
									"Don't bother with plastic surgery - there's NO fixing that!",
									"Did someone feel something? I am NOT sorry!"};

public:
	FragTrap();
	FragTrap(std::string const &new_name);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned amount);
	void beRepaired(unsigned amount);
	void vaulthunter_dot_exe(std::string const &target);
	~FragTrap();
};

#endif