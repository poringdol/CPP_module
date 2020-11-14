#include <string>
#include <iostream>
#include "SuperTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "FragTrap.class.hpp"

SuperTrap::SuperTrap() : ClapTrap(), NinjaTrap(), FragTrap() {
	std::cout << "🤖 Nameless SUPER TRAP created" << std::endl;
	name = "noname";
	initSuperTrap();
}

SuperTrap::SuperTrap(const std::string &new_name) : ClapTrap(new_name), NinjaTrap(new_name), FragTrap(new_name) {
	std::cout << "🤖 SUPER TRAP " << new_name << " created" << std::endl;
	name = new_name;
	initSuperTrap();
}

SuperTrap::SuperTrap(const SuperTrap &supertrap) {
	*this = supertrap;
}
	
SuperTrap& SuperTrap::operator=(const SuperTrap &supertrap) {
	name = supertrap.name;
	hit_points = supertrap.hit_points;
	max_hit_points = supertrap.max_hit_points;
	energy_points = supertrap.energy_points;
	max_energy_points = supertrap.max_energy_points;
	level = supertrap.level;
	melee_attack_damage = supertrap.melee_attack_damage;
	ranged_attack_damage = supertrap.ranged_attack_damage;
	armor_damage_reduction = supertrap.armor_damage_reduction;
	return (*this);
}

void SuperTrap::initSuperTrap() {
	hit_points = FragTrap::hit_points;
 	max_hit_points = FragTrap::max_hit_points;
	energy_points = NinjaTrap::energy_points;
	max_energy_points = NinjaTrap::max_energy_points;
	level = 1;
	melee_attack_damage = NinjaTrap::melee_attack_damage;
	ranged_attack_damage = FragTrap::ranged_attack_damage;
	armor_damage_reduction = FragTrap::armor_damage_reduction;
}

void SuperTrap::rangedAttack(std::string const &target) const {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) const {
	NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap() {
	std::cout << "💔 SUPER TRAP " << name << " destroyed" << std::endl;
	// std::cout << "💔 SUPER TRAP" << " destroyed" << std::endl;
}