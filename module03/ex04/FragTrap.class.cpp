#include <string>
#include <iostream>
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
	
FragTrap& FragTrap::operator=(const FragTrap &fragtrap) {
	name = fragtrap.name;
	hit_points = fragtrap.hit_points;
	max_hit_points = fragtrap.max_hit_points;
	energy_points = fragtrap.energy_points;
	max_energy_points = fragtrap.max_energy_points;
	level = fragtrap.level;
	melee_attack_damage = fragtrap.melee_attack_damage;
	ranged_attack_damage = fragtrap.ranged_attack_damage;
	armor_damage_reduction = fragtrap.armor_damage_reduction;
	return (*this);
}

void FragTrap::setHitPoints(int i) {hit_points = i;}
void FragTrap::setMaxHitPoints(int i) {max_hit_points = i;}
void FragTrap::setEnergyPoints(int i) {energy_points = i;}
void FragTrap::setMaxEnergyPoints(int i) {max_energy_points = i;}
void FragTrap::setLevel(int i) {level = i;}
void FragTrap::setMeleeAttackDamage(int i) {melee_attack_damage = i;}
void FragTrap::setRangedAttackDamage(int i) {ranged_attack_damage = i;}
void FragTrap::setArmorDamageReduction(int i) {armor_damage_reduction = i;}

void FragTrap::initFragTrap() {
	setHitPoints();
	setMaxHitPoints();
	setEnergyPoints();
	setMaxEnergyPoints();
	setLevel();
	setMeleeAttackDamage();
	setRangedAttackDamage();
	setArmorDamageReduction();
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (energy_points >= 25) {
		std::cout << "💥 " << name << ": " << target << "! " << random_attack[rand() % 9] << std::endl;
		energy_points -= 25;
	} else {
		std::cout << "⛔ " << name << ": Crap, no more shots left!" << std::endl;
	}
}

FragTrap::~FragTrap() {
	std::cout << "💔💔 FR4G-TP " << name << " destroyed" << std::endl;
}