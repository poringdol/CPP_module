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

void ScavTrap::rangedAttack(std::string const &target) const {
	if (!hit_points) {
		std::cout << "⛔ " << name << ": Why do I even feel pain?! " << name <<
					 " needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🏹 " << name << ": Ha ha ha! Suck it! SC4V-TP " << name <<
					 " attacks " <<  target << " at range, causing " <<
					 ranged_attack_damage << " points of damage!" << std::endl;
	}
}

void ScavTrap::meleeAttack(std::string const &target) const {
	if (!hit_points) {
		std::cout << "⛔ " << name << ": Why do I even feel pain?! SC4V-TP " <<
					 name << " needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🗡  " << name << ": Meat confetti! SC4V-TP " << name << " attacks " <<
					 target << " in melee, causing " <<
					 melee_attack_damage << " points of damage!" << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned amount) {
	if (amount <= armor_damage_reduction) {
		std::cout << "🛡  " << name << ": Enterrrrr the CHAMPION! " <<
					 name << " reflected all damage!" << std::endl;
	} else {
		amount = amount - armor_damage_reduction < hit_points ?
				(amount - armor_damage_reduction) : hit_points;
		std::cout << "😵 " << name << ": Ow hohoho, that hurts! Yipes! " <<
					 name << " taken " << amount << " points of damage!" << std::endl;
		hit_points -= amount;
	}
}

void ScavTrap::beRepaired(unsigned amount) {
	unsigned energy = (amount + energy_points < max_energy_points) ?
					  amount : (max_energy_points - energy_points);
	amount = (amount + hit_points < max_hit_points) ? amount : (max_hit_points - hit_points);
	std::cout << "🔧 " << name << ": Healsies! " << name << " repaired " <<
				amount << " hit points and " << energy << " energy points!" << std::endl;
	hit_points += amount;
	energy_points += energy;
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