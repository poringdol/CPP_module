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
	
ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
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

void ScavTrap::initScavTrap() {
	hit_points = 100;
 	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
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