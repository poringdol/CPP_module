#include <string>
#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap() {
	std::cout << "🤖 Nameless NINJA created" << std::endl;
	name = "noname";
	hitPoints = 60;
 	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(const std::string &new_name) {
	std::cout << "🤖 NINJA " << new_name << " created" << std::endl;
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

void NinjaTrap::initNinjaTrap() {
	hitPoints = 60;
 	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorDamageReduction = 0;
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
	std::cout << "💔 NINJA " << name << " destroyed" << std::endl;
}

// void NinjaTrap::ninjaShoebox(ninjatrap &claptrap, std::string const &target) {
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
