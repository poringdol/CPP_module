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
	
ScavTrap& ScavTrap::operator=(const ScavTrap &scavtrap) {
	name = scavtrap.name;
	hit_points = scavtrap.hit_points;
	max_hit_points = scavtrap.max_hit_points;
	energy_points = scavtrap.energy_points;
	max_energy_points = scavtrap.max_energy_points;
	level = scavtrap.level;
	melee_attack_damage = scavtrap.melee_attack_damage;
	ranged_attack_damage = scavtrap.ranged_attack_damage;
	armor_damage_reduction = scavtrap.armor_damage_reduction;
	return (*this);
}

void ScavTrap::setHitPoints(int i) {hit_points = i;}
void ScavTrap::setMaxHitPoints(int i) {max_hit_points = i;}
void ScavTrap::setEnergyPoints(int i) {energy_points = i;}
void ScavTrap::setMaxEnergyPoints(int i) {max_energy_points = i;}
void ScavTrap::setLevel(int i) {level = i;}
void ScavTrap::setMeleeAttackDamage(int i) {melee_attack_damage = i;}
void ScavTrap::setRangedAttackDamage(int i) {ranged_attack_damage = i;}
void ScavTrap::setArmorDamageReduction(int i) {armor_damage_reduction = i;}

void ScavTrap::initScavTrap() {
	setHitPoints();
	setMaxHitPoints();
	setEnergyPoints();
	setMaxEnergyPoints();
	setLevel();
	setMeleeAttackDamage();
	setRangedAttackDamage();
	setArmorDamageReduction();
}

void ScavTrap::challengeNewcomer(std::string const &target) {
	if (energy_points >= 25) {
		std::cout << "💥 " << name << ": " << target << "! " << random_attack[rand() % 9] << std::endl;
		energy_points -= 25;
	} else {
		std::cout << "⛔ " << name << ": Where'd all my bullets go?" << std::endl;
	}
}

ScavTrap::~ScavTrap() {
	std::cout << "💔 SC4V-TP " << name << " destroyed" << std::endl;
}