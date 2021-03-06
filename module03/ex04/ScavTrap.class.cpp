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

void ScavTrap::setHitPoints(int i) {hitPoints = i;}
void ScavTrap::setMaxHitPoints(int i) {maxHitPoints = i;}
void ScavTrap::setEnergyPoints(int i) {energyPoints = i;}
void ScavTrap::setMaxEnergyPoints(int i) {maxEnergyPoints = i;}
void ScavTrap::setLevel(int i) {level = i;}
void ScavTrap::setMeleeAttackDamage(int i) {meleeAttackDamage = i;}
void ScavTrap::setRangedAttackDamage(int i) {rangedAttackDamage = i;}
void ScavTrap::setArmorDamageReduction(int i) {armorDamageReduction = i;}
void ScavTrap::setMeeleAttackMessage() {meleeAttackMessage = ": Meat confetti! SC4V-TP ";}
void ScavTrap::setRangedAttackMessage() {rangeAttackMessage = ": Ha ha ha! Suck it! SC4V-TP ";}
void ScavTrap::setRangeNoHitPointsMessage() {noHitPointsMessage = ": Why do I even feel pain?! SC4V-TP ";}
void ScavTrap::setRandomAttack() {
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

void ScavTrap::initScavTrap() {
	setHitPoints();
	setMaxHitPoints();
	setEnergyPoints();
	setMaxEnergyPoints();
	setLevel();
	setMeleeAttackDamage();
	setRangedAttackDamage();
	setArmorDamageReduction();
	setMeeleAttackMessage();
	setRangedAttackMessage();
	setRangeNoHitPointsMessage();
	setRandomAttack();
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