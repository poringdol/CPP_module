#include <string>
#include <iostream>
#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap() : name("noname") {
	std::cout << "🤖🤖 Nameless CLAPTRAP created" << std::endl;
}

ClapTrap::ClapTrap(const std::string &new_name) : name(new_name) {
	std::cout << "🤖🤖 CLAPTRAP " << name << " created" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target) {
	if (!hit_points) {
		std::cout << "⛔ Why do I even feel pain?! " << name << " needs to be repaired so that it can attack" << std::endl;
	} else {
		std::cout << "🏹 " << name << ": Ha ha ha! Suck it! CLAPTRAP " << name << " attacks " <<  target << " at range, causing " <<
					ranged_attack_damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::meleeAttack(std::string const &target) {
	if (!hit_points) {
		std::cout << "⛔ " << name << ": Why do I even feel pain?! CLAPTRAP " << name << " needs to be repaired so that it can attack" << std::endl;
	} else {
	std::cout << "🗡  " << name << ": Meat confetti! CLAPTRAP " << name << " attacks " << target << " in melee, causing " <<
				melee_attack_damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned amount) {
	if (amount <= armor_damage_reduction) {
		std::cout << "🛡  " << name << ": Enterrrrr the CHAMPION! " << name << " reflected all damage!" << std::endl;
	} else {
		amount = amount - armor_damage_reduction < hit_points ? (amount - armor_damage_reduction) : hit_points;
		std::cout << "😵 " << name << ": Ow hohoho, that hurts! Yipes! " << name << " taken " << amount << " points of damage!" << std::endl;
		hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned amount) {
	amount = (amount + hit_points < max_hit_points) ? amount : (max_hit_points - hit_points);
	std::cout << "🔧 " << name << ": Healsies! " << name << " repaired " <<
				amount << " hit points!" << std::endl;
	hit_points += amount;
	energy_points = (amount + energy_points < max_hit_points) ? energy_points + amount : max_energy_points;
}

ClapTrap::~ClapTrap() {
	std::cout << "💔💔 CLAPTRAP " << name << " destroyed" << std::endl;
}