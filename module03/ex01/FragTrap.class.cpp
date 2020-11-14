#include <string>
#include <iostream>
#include "FragTrap.class.hpp"

FragTrap::FragTrap() : name("noname") {
	(void)level;
	std::cout << "🤖 Nameless FR4G-TP created" << std::endl;
}

FragTrap::FragTrap(const std::string &new_name) : name(new_name) {
	std::cout << "🤖 FR4G-TP " << new_name << " created" << std::endl;
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

void FragTrap::rangedAttack(std::string const &target) const {
	if (!hit_points) {
		std::cout << "⛔ " << name << ": Why do I feel radioactive!? FR4G-TP " << name <<
					 "needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🏹 " << name << ": Crack shot! FR4G-TP " <<
					 name << " attacks " <<  target << " at range, causing " <<
					 ranged_attack_damage << " points of damage!" << std::endl;
	}
}

void FragTrap::meleeAttack(std::string const &target) const {
	if (!hit_points) {
		std::cout << "⛔ " << name << ": Why do I feel radioactive!? FR4G-TP " <<
					 name << " needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🗡  " << name << ": Meet professor punch! FR4G-TP " << name <<
					 " attacks " << target << " in melee, causing " <<
					 melee_attack_damage << " points of damage!" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned amount) {
	if (amount <= armor_damage_reduction) {
		std::cout << "🛡  " << name << ": Enterrrrr the CHAMPION! " <<
					 name << " reflected all damage!" << std::endl;
	} else {
		amount = amount - armor_damage_reduction < hit_points ?
				 (amount - armor_damage_reduction) : hit_points;
		std::cout << "😵 " << name << ": Hit me, baby! " << name <<
					 " taken " << amount << " points of damage!" << std::endl;
		hit_points -= amount;
	}
}

void FragTrap::beRepaired(unsigned amount) {
	unsigned energy = (amount + energy_points < max_energy_points) ?
					  amount : (max_energy_points - energy_points);
	amount = (amount + hit_points < max_hit_points) ? amount : (max_hit_points - hit_points);
	std::cout << "🔧 " << name << ": Healsies! " << name << " repaired " <<
				amount << " hit points and " << energy << " energy points!" << std::endl;
	hit_points += amount;
	energy_points += energy;
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