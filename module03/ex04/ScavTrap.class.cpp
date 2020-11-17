#include <string>
#include <iostream>
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
void ScavTrap::setRangeNoHitPointskMessage() {noHitPointsMessage = ": Why do I even feel pain?! SC4V-TP ";}

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
	setRangeNoHitPointskMessage();
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