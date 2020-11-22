#include <string>
#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap() {
	std::cout << "🤖🤖 Nameless NINJA created" << std::endl;
	name = "noname";
	initNinjaTrap();
}

NinjaTrap::NinjaTrap(const std::string &new_name) {
	std::cout << "🤖🤖 NINJA " << new_name << " created" << std::endl;
	name = new_name;
	initNinjaTrap();
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjatrap) {
	*this = ninjatrap;
}
	
NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ninjatrap) {
	name = ninjatrap.name;
	hitPoints = ninjatrap.hitPoints;
	maxHitPoints = ninjatrap.maxHitPoints;
	energyPoints = ninjatrap.energyPoints;
	maxEnergyPoints = ninjatrap.maxEnergyPoints;
	level = ninjatrap.level;
	meleeAttackDamage = ninjatrap.meleeAttackDamage;
	rangedAttackDamage = ninjatrap.rangedAttackDamage;
	armorDamageReduction = ninjatrap.armorDamageReduction;
	return (*this);
}

void NinjaTrap::setHitPoints(int i) {hitPoints = i;}
void NinjaTrap::setMaxHitPoints(int i) {maxHitPoints = i;}
void NinjaTrap::setEnergyPoints(int i) {energyPoints = i;}
void NinjaTrap::setMaxEnergyPoints(int i) {maxEnergyPoints = i;}
void NinjaTrap::setLevel(int i) {level = i;}
void NinjaTrap::setMeleeAttackDamage(int i) {meleeAttackDamage = i;}
void NinjaTrap::setRangedAttackDamage(int i) {rangedAttackDamage = i;}
void NinjaTrap::setarmorDamageReduction(int i) {armorDamageReduction = i;}
void NinjaTrap::setMeeleAttackMessage() {meleeAttackMessage = ": Meet professor punch! NINJA ";}
void NinjaTrap::setRangedAttackMessage() {rangeAttackMessage = ": Crack shot! NINJA ";}
void NinjaTrap::setRangeNoHitPointsMessage() {noHitPointsMessage = ": Why do I feel radioactive!? NINJA ";}

void NinjaTrap::initNinjaTrap() {
	setHitPoints();
	setMaxHitPoints();
	setEnergyPoints();
	setMaxEnergyPoints();
	setLevel();
	setMeleeAttackDamage();
	setRangedAttackDamage();
	setarmorDamageReduction();
	setMeeleAttackMessage();
	setRangedAttackMessage();
	setRangeNoHitPointsMessage();
}

void NinjaTrap::ninjaShoebox(FragTrap &claptrap, std::string const &target) {
	claptrap.vaulthunter_dot_exe(target);
}

void NinjaTrap::ninjaShoebox(ScavTrap &claptrap, std::string const &target) {
	claptrap.challengeNewcomer(target);
}

void NinjaTrap::ninjaShoebox(ClapTrap &claptrap, std::string const &target) {
	claptrap.meleeAttack(target);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &claptrap, std::string const &target) {
	claptrap.rangedAttack(target);
}

NinjaTrap::~NinjaTrap() {
	std::cout << "💔💔 NINJA " << name << " destroyed" << std::endl;
}

// void NinjaTrap::ninjaShoebox(FragTrap &claptrap, std::string const &target) {
// 	claptrap.meleeAttack(target);
// }

// void NinjaTrap::ninjaShoebox(ScavTrap &claptrap, std::string const &target) {
// 	claptrap.meleeAttack(target);
// }

// void NinjaTrap::ninjaShoebox(ClapTrap &claptrap, std::string const &target) {
// 	claptrap.meleeAttack(target);
// }

// void NinjaTrap::ninjaShoebox(NinjaTrap &claptrap, std::string const &target) {
// 	claptrap.meleeAttack(target);
// }
