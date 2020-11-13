#include <string>
#include <iostream>
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap() {
	std::cout << "🤖 Nameless SC4V-TP created" << std::endl;
	name = "noname";
	hit_points = 100;
 	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(const std::string &new_name) {
	std::cout << "🤖 SC4V-TP " << new_name << " created" << std::endl;
	name = new_name;
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