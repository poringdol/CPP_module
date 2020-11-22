#include <string>
#include <iostream>
#include <cstdlib>
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap() {
	std::cout << "🤖 Nameless SC4V-TP created" << std::endl;
	name = "noname";
	initScavTrap();
}

ScavTrap::ScavTrap(const std::string &new_name) {
	std::cout << "🤖 SC4V-TP " << new_name << " created" << std::endl;
	name = new_name;
	initScavTrap();
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
	*this = scavtrap;
}
	
ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
	name = scavtrap.name;
	hitPoints = scavtrap.hitPoints;
	maxHitPoints = scavtrap.maxHitPoints;
	energyPoints = scavtrap.energyPoints;
	maxEnergyPoints = scavtrap.maxEnergyPoints;
	level = scavtrap.level;
	meleeAttackDamage = scavtrap.meleeAttackDamage;
	rangedAttackDamage = scavtrap.rangedAttackDamage;
	armorDamageReduction = scavtrap.armorDamageReduction;
	return (*this);
}

void ScavTrap::initScavTrap() {
	hitPoints = 100;
 	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
	meleeAttackMessage = ": Meat confetti! SC4V-TP ";
	rangeAttackMessage = ": Ha ha ha! Suck it! SC4V-TP ";
	noHitPointsMessage = ": Why do I even feel pain?! SC4V-TP ";
	std::string attack[9]= {"I did a challenge? I did a challenge!",
							"Pain school is now in session. Ready for the PUNCHline?!",
							"Gloves are comin' off!",
							"Now I will dominate!",
							"Burn, baby, burn!",
							"I will prove to you my robotic superiority!",
							"Man versus machine! Very tiny streamlined machine!",
							"A million baddies, and you wanna hit me? Aww!",
							"Ha ha ha! Fall before your robot overlord!"};
	for (int i = 0; i < 9; i++) {
		randomAttack[i] = attack[i];
	}
}

void ScavTrap::challengeNewcomer(std::string const &target) {
	if (energyPoints >= 25) {
		std::cout << "💥 " << name << ": " << target << "! " << randomAttack[rand() % 9] << std::endl;
		energyPoints -= 25;
	} else {
		std::cout << "⛔ " << name << ": Where'd all my bullets go?" << std::endl;
	}
}

ScavTrap::~ScavTrap() {
	std::cout << "💔 SC4V-TP " << name << " destroyed" << std::endl;
}