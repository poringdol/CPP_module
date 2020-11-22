#include <string>
#include <iostream>
#include <cstdlib>
#include "FragTrap.class.hpp"

FragTrap::FragTrap() {
	std::cout << "🤖🤖 Nameless FR4G-TP created" << std::endl;
	name = "noname";
	initFragTrap();
}

FragTrap::FragTrap(const std::string &new_name) {
	std::cout << "🤖🤖 FR4G-TP " << new_name << " created" << std::endl;
	name = new_name;
	initFragTrap();
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
	*this = fragtrap;
}
	
FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
	name = fragtrap.name;
	hitPoints = fragtrap.hitPoints;
	maxHitPoints = fragtrap.maxHitPoints;
	energyPoints = fragtrap.energyPoints;
	maxEnergyPoints = fragtrap.maxEnergyPoints;
	level = fragtrap.level;
	meleeAttackDamage = fragtrap.meleeAttackDamage;
	rangedAttackDamage = fragtrap.rangedAttackDamage;
	armorDamageReduction = fragtrap.armorDamageReduction;
	return (*this);
}

void FragTrap::setHitPoints(int i) {hitPoints = i;}
void FragTrap::setMaxHitPoints(int i) {maxHitPoints = i;}
void FragTrap::setEnergyPoints(int i) {energyPoints = i;}
void FragTrap::setMaxEnergyPoints(int i) {maxEnergyPoints = i;}
void FragTrap::setLevel(int i) {level = i;}
void FragTrap::setMeleeAttackDamage(int i) {meleeAttackDamage = i;}
void FragTrap::setRangedAttackDamage(int i) {rangedAttackDamage = i;}
void FragTrap::setArmorDamageReduction(int i) {armorDamageReduction = i;}
void FragTrap::setMeeleAttackMessage() {meleeAttackMessage = ": Meet professor punch! FR4G-TP ";}
void FragTrap::setRangedAttackMessage() {rangeAttackMessage = ": Crack shot! FR4G-TP ";}
void FragTrap::setRangeNoHitPointsMessage() {noHitPointsMessage = ": Why do I feel radioactive!? FR4G-TP ";}
void FragTrap::setRandomAttack() {
	std::string attack[9]= {"Come over here, I'll gnaw your legs off!",
							"I fart rainbows! Bask in my aura of death!",
							"Lightening! Kukachow! Zippity doodah!",
							"Meet professor punch!",
							"Take two bullets, then call me in the morning.",
							"I brought you a present: EXPLOSIONS!",
							"Dance battle! Or, you know... regular battle.",
							"Don't bother with plastic surgery - there's NO fixing that!",
							"Did someone feel something? I am NOT sorry!"};
	for (int i = 0; i < 9; i++) {
		randomAttack[i] = attack[i];
	}
}

void FragTrap::initFragTrap() {
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

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (energyPoints >= 25) {
		std::cout << "💥 " << name << ": " << target << "! " << randomAttack[rand() % 9] << std::endl;
		energyPoints -= 25;
	} else {
		std::cout << "⛔ " << name << ": Crap, no more shots left!" << std::endl;
	}
}

FragTrap::~FragTrap() {
	std::cout << "💔💔 FR4G-TP " << name << " destroyed" << std::endl;
}