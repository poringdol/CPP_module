#include <string>
#include <iostream>
#include "SuperTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "FragTrap.class.hpp"

SuperTrap::SuperTrap() : ClapTrap(), NinjaTrap(), FragTrap() {
	std::cout << "🤖🤖🤖 Nameless SUPER TRAP created" << std::endl;
	name = "noname";
	initSuperTrap();
}

SuperTrap::SuperTrap(const std::string &new_name) : ClapTrap(new_name), NinjaTrap(new_name), FragTrap(new_name) {
	std::cout << "🤖🤖🤖 SUPER TRAP " << new_name << " created" << std::endl;
	name = new_name;
	initSuperTrap();
}

SuperTrap::SuperTrap(const SuperTrap &supertrap) {
	*this = supertrap;
}
	
SuperTrap &SuperTrap::operator=(const SuperTrap &supertrap) {
	name = supertrap.name;
	hitPoints = supertrap.hitPoints;
	maxHitPoints = supertrap.maxHitPoints;
	energyPoints = supertrap.energyPoints;
	maxEnergyPoints = supertrap.maxEnergyPoints;
	level = supertrap.level;
	meleeAttackDamage = supertrap.meleeAttackDamage;
	rangedAttackDamage = supertrap.rangedAttackDamage;
	armorDamageReduction = supertrap.armorDamageReduction;
	return (*this);
}

void SuperTrap::initSuperTrap() {
	FragTrap::setHitPoints();
	FragTrap::setMaxHitPoints();
	NinjaTrap::setEnergyPoints();
	NinjaTrap::setMaxEnergyPoints();
	FragTrap::setLevel();
	NinjaTrap::setMeleeAttackDamage();
	FragTrap::setRangedAttackDamage();
	FragTrap::setArmorDamageReduction();
	FragTrap::setRangedAttackMessage();
	NinjaTrap::setMeeleAttackMessage();
}

SuperTrap::~SuperTrap() {
	std::cout << "💔💔💔 SUPER TRAP " << name << " destroyed" << std::endl;
	// std::cout << "💔💔💔 SUPER TRAP" << " destroyed" << std::endl;
}