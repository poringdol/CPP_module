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
	
NinjaTrap& NinjaTrap::operator=(const NinjaTrap &ninjatrap) {
	name = ninjatrap.name;
	hit_points = ninjatrap.hit_points;
	max_hit_points = ninjatrap.max_hit_points;
	energy_points = ninjatrap.energy_points;
	max_energy_points = ninjatrap.max_energy_points;
	level = ninjatrap.level;
	melee_attack_damage = ninjatrap.melee_attack_damage;
	ranged_attack_damage = ninjatrap.ranged_attack_damage;
	armor_damage_reduction = ninjatrap.armor_damage_reduction;
	return (*this);
}

void NinjaTrap::setHitPoints(int i) {hit_points = i;}
void NinjaTrap::setMaxHitPoints(int i) {max_hit_points = i;}
void NinjaTrap::setEnergyPoints(int i) {energy_points = i;}
void NinjaTrap::setMaxEnergyPoints(int i) {max_energy_points = i;}
void NinjaTrap::setLevel(int i) {level = i;}
void NinjaTrap::setMeleeAttackDamage(int i) {melee_attack_damage = i;}
void NinjaTrap::setRangedAttackDamage(int i) {ranged_attack_damage = i;}
void NinjaTrap::setArmorDamageReduction(int i) {armor_damage_reduction = i;}

void NinjaTrap::initNinjaTrap() {
	setHitPoints();
	setMaxHitPoints();
	setEnergyPoints();
	setMaxEnergyPoints();
	setLevel();
	setMeleeAttackDamage();
	setRangedAttackDamage();
	setArmorDamageReduction();
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
