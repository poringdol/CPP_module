#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap() {
	std::cout << "🤖 Nameless CLAPTRAP created" << std::endl;
	initClapTrap();
}

ClapTrap::ClapTrap(const std::string &new_name) {
	std::cout << "🤖 CLAPTRAP " << name << " created" << std::endl;
	initClapTrap();
	setName(new_name);
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	*this = claptrap;
}
	
ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
	name = claptrap.name;
	hitPoints = claptrap.hitPoints;
	maxHitPoints = claptrap.maxHitPoints;
	energyPoints = claptrap.energyPoints;
	maxEnergyPoints = claptrap.maxEnergyPoints;
	level = claptrap.level;
	meleeAttackDamage = claptrap.meleeAttackDamage;
	rangedAttackDamage = claptrap.rangedAttackDamage;
	armorDamageReduction = claptrap.armorDamageReduction;
	return (*this);
}

void ClapTrap::rangedAttack(std::string const &target) const {
	if (!hitPoints) {
		std::cout << "⛔ " << name <<  noHitPointsMessage << name <<
					 " needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🏹 " << name << rangeAttackMessage << name <<
					 " attacks " <<  target << " at range, causing " <<
					 rangedAttackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::meleeAttack(std::string const &target) const {
	if (!hitPoints) {
		std::cout << "⛔ " << name <<  noHitPointsMessage << name <<
					 " needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🗡  " << name << meleeAttackMessage << name <<
						" attacks " << target << " in melee, causing " <<
						meleeAttackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned amount) {
	if (amount <= armorDamageReduction) {
		std::cout << "🛡  " << name << ": Enterrrrr the CHAMPION! " << name <<
					 " reflected all damage!" << std::endl;
	} else {
		amount = amount - armorDamageReduction < hitPoints ?
				(amount - armorDamageReduction) : hitPoints;
		std::cout << "😵 " << name << ": Ow hohoho, that hurts! Yipes! " << name <<
					 " taken " << amount << " points of damage!" << std::endl;
		hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned amount) {
	unsigned energy = (amount + energyPoints < maxEnergyPoints) ?	
					  amount : (maxEnergyPoints - energyPoints);
	amount = (amount + hitPoints < maxHitPoints) ?
			 amount : (maxHitPoints - hitPoints);
	std::cout << "🔧 " << name << ": Healsies! " << name << " repaired " <<
				amount << " hit points and " << energy << " energy points!" << std::endl;
	hitPoints += amount;
	energyPoints += energy;
}

ClapTrap::~ClapTrap() {
	std::cout << "💔 CLAPTRAP " << name << " destroyed" << std::endl;
}

void ClapTrap::setName(std::string str) {name = str;}
void ClapTrap::setHitPoints(unsigned u) {hitPoints = u;}
void ClapTrap::setMaxHitPoints(unsigned u) {maxHitPoints = u;}
void ClapTrap::setEnergyPoints(unsigned u) {energyPoints = u;}
void ClapTrap::setMaxEnergyPoints(unsigned u) {maxEnergyPoints = u;}
void ClapTrap::setLevel(unsigned u) {level = u;}
void ClapTrap::setMeleeAttackDamage(unsigned u) {meleeAttackDamage = u;}
void ClapTrap::setRangedAttackDamage(unsigned u) {rangedAttackDamage = u;}
void ClapTrap::setArmorDamageReduction(unsigned u) {armorDamageReduction = u;}
void ClapTrap::setMeleeAttackMessage(std::string str) {meleeAttackMessage = str;}
void ClapTrap::setRangeAttackMessage(std::string str) {rangeAttackMessage = str;}
void ClapTrap::setNoHitPointsMessage(std::string str) {noHitPointsMessage = str;}
void ClapTrap::initClapTrap() {
	setName();
	setHitPoints();
	setMaxHitPoints();
	setEnergyPoints();
	setMaxEnergyPoints();
	setLevel();
	setMeleeAttackDamage();
	setRangedAttackDamage();
	setArmorDamageReduction();
	setMeleeAttackMessage();
	setRangeAttackMessage();
	setNoHitPointsMessage();
}