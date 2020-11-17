#include <string>
#include <iostream>
#include "FragTrap.class.hpp"

FragTrap::FragTrap() : name("noname") {
	std::cout << "🤖 Nameless FR4G-TP created" << std::endl;
}

FragTrap::FragTrap(const std::string &new_name) : name(new_name) {
	std::cout << "🤖 FR4G-TP " << new_name << " created" << std::endl;
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

void FragTrap::rangedAttack(std::string const &target) const {
	if (!hitPoints) {
		std::cout << "⛔ " << name << ": Why do I feel radioactive!? FR4G-TP " << name << " needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🏹 " << name << ": Crack shot! FR4G-TP " << name << " attacks " <<  target << " at range, causing " <<
					rangedAttackDamage << " points of damage!" << std::endl;
	}
}

void FragTrap::meleeAttack(std::string const &target) const {
	if (!hitPoints) {
		std::cout << "⛔ " << name << ": Why do I feel radioactive!? FR4G-TP " << name << " needs to be repaired so that it can attack" << std::endl;
	} else {
	std::cout << "🗡  " << name << ": Meet professor punch! FR4G-TP " << name << " attacks " << target << " in melee, causing " <<
				meleeAttackDamage << " points of damage!" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned amount) {
	if (amount <= armorDamageReduction) {
		std::cout << "🛡  " << name << ": Enterrrrr the CHAMPION! " << name << " reflected all damage!" << std::endl;
	} else {
		amount = amount - armorDamageReduction < hitPoints ? (amount - armorDamageReduction) : hitPoints;
		std::cout << "😵 " << name << ": Hit me, baby! " << name << " taken " << amount << " points of damage!" << std::endl;
		hitPoints -= amount;
	}
}

void FragTrap::beRepaired(unsigned amount) {
	amount = (amount + hitPoints < maxHitPoints) ? amount : (maxHitPoints - hitPoints);
	std::cout << "🔧 " << name << ": Make my day. " << name << " repaired " <<
				amount << " hit points!" << std::endl;
	hitPoints += amount;
	energyPoints = (amount + energyPoints < maxHitPoints) ? energyPoints + amount : maxEnergyPoints;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (energyPoints >= 25) {
		std::cout << "💥 " << name << ": " << target << "! " << randomAttack[rand() % 10] << std::endl;
		energyPoints -= 25;
	} else {
		std::cout << "⛔ " << name << ": Crap, no more shots left!" << std::endl;
	}
}

FragTrap::~FragTrap() {
	std::cout << "💔 FR4G-TP " << name << " destroyed" << std::endl;
}