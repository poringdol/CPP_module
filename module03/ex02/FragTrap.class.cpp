#include <string>
#include <iostream>
#include "FragTrap.class.hpp"

FragTrap::FragTrap() {
	std::cout << "🤖 Nameless FR4G-TP created" << std::endl;
	name = "noname";
	initFragTrap();
}

FragTrap::FragTrap(const std::string &new_name) {
	std::cout << "🤖 FR4G-TP " << new_name << " created" << std::endl;
	name = new_name;
	initFragTrap();
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
	*this = fragtrap;
}
	
FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
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

void FragTrap::initFragTrap() {
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
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
	std::cout << "💔 FR4G-TP " << name << " destroyed" << std::endl;
}