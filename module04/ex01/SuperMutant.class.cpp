#include <string>
#include <iostream>
#include "SuperMutant.class.hpp"

SuperMutant::SuperMutant() {
	setHP();
	setType();
	bornMessage();
}

SuperMutant::SuperMutant(const SuperMutant &super_mutant) {
	*this = super_mutant;
	bornMessage();
}

SuperMutant::~SuperMutant() {deathMessage();}

SuperMutant	&SuperMutant::operator=(const SuperMutant &super_mutant) {
	HP = super_mutant.HP;
	Type = super_mutant.Type;
	return (*this);
}

void		SuperMutant::setHP(int hp) {HP = hp;}
void		SuperMutant::setType(std::string type) {Type = type;}

void		SuperMutant::takeDamage(int damage) {
	damage -= 3;
	if (damage > 0) {
		int taken_damage = (HP > damage) ? damage : HP;
		HP -= taken_damage;
		std::cout << getType() << " taken " << taken_damage << " damage" << std::endl;
		std::cout << "Remaining " << HP << " HP" << std::endl;
	}
}

void		SuperMutant::bornMessage() {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

void		SuperMutant::deathMessage() {
	std::cout << "Aaargh..." << std::endl;
}
