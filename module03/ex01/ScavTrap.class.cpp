#include <string>
#include <iostream>
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap() : name("noname") {
	(void)level;
	std::cout << "🤖 Nameless SC4V-TP created" << std::endl;
}

ScavTrap::ScavTrap(const std::string &new_name) : name(new_name) {
	std::cout << "🤖 SC4V-TP " << new_name << " created" << std::endl;
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

void ScavTrap::rangedAttack(std::string const &target) const {
	if (!hitPoints) {
		std::cout << "⛔ " << name << ": Why do I even feel pain?! " << name <<
					 " needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🏹 " << name << ": Ha ha ha! Suck it! SC4V-TP " << name <<
					 " attacks " <<  target << " at range, causing " <<
					 rangedAttackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::meleeAttack(std::string const &target) const {
	if (!hitPoints) {
		std::cout << "⛔ " << name << ": Why do I even feel pain?! SC4V-TP " <<
					 name << " needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🗡  " << name << ": Meat confetti! SC4V-TP " << name << " attacks " <<
					 target << " in melee, causing " <<
					 meleeAttackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned amount) {
	if (amount <= armorDamageReduction) {
		std::cout << "🛡  " << name << ": Enterrrrr the CHAMPION! " <<
					 name << " reflected all damage!" << std::endl;
	} else {
		amount = amount - armorDamageReduction < hitPoints ?
				(amount - armorDamageReduction) : hitPoints;
		std::cout << "😵 " << name << ": Ow hohoho, that hurts! Yipes! " <<
					 name << " taken " << amount << " points of damage!" << std::endl;
		hitPoints -= amount;
	}
}

void ScavTrap::beRepaired(unsigned amount) {
	unsigned energy = (amount + energyPoints < maxEnergyPoints) ?
					  amount : (maxEnergyPoints - energyPoints);
	amount = (amount + hitPoints < maxHitPoints) ? amount : (maxHitPoints - hitPoints);
	std::cout << "🔧 " << name << ": Healsies! " << name << " repaired " <<
				amount << " hit points and " << energy << " energy points!" << std::endl;
	hitPoints += amount;
	energyPoints += energy;
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