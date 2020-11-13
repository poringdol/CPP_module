#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>

class ScavTrap {
private:
	std::string	name;
	unsigned	hit_points = 100;
 	unsigned	max_hit_points = 100;
	unsigned	energy_points = 50;
	unsigned	max_energy_points = 50;
	unsigned	level = 1;
	unsigned	melee_attack_damage = 20;
	unsigned	ranged_attack_damage = 15;
	unsigned	armor_damage_reduction = 3;
	std::string	random_attack[8] = {"I did a challenge? I did a challenge!",
									"Pain school is now in session. Ready for the PUNCHline?!",
									"Gloves are comin' off!",
									"Now I will dominate!",
									"I will prove to you my robotic superiority!",
									"Man versus machine! Very tiny streamlined machine!",
									"A million baddies, and you wanna hit me? Aww!",
									"Ha ha ha! Fall before your robot overlord!"};

public:
	ScavTrap();
	ScavTrap(std::string const &new_name);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned amount);
	void beRepaired(unsigned amount);
	void challengeNewcomer(std::string const &target);
	~ScavTrap();
};

#endif