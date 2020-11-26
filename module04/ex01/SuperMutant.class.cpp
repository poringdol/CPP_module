#include <string>
#include <iostream>
#include "SuperMutant.class.hpp"

SuperMutant::SuperMutant() {
	setHP();
	setType();
	bornMessage();
}

SuperMutant::SuperMutant(const SuperMutant &sm) {
	*this = sm;
	bornMessage();
}

SuperMutant::~SuperMutant() {deathMessage();}

SuperMutant	&SuperMutant::operator=(const SuperMutant &sm) {
	HP = sm.HP;
	Type = sm.Type;
	return (*this);
}

void		SuperMutant::setHP(int hp) {HP = hp;}
void		SuperMutant::setType(std::string type) {Type = type;}

void		SuperMutant::takeDamage(int damage) {
	damage -= 3;
	if (HP && damage > 0) {
		int taken_damage = (HP > damage) ? damage : HP;
		HP -= taken_damage;
		// std::cout << getType() << " taken " << taken_damage << " damage" << std::endl;
		// std::cout << "Remaining " << HP << " HP" << std::endl;
		if (!HP)
			SuperMutant::~SuperMutant();
	}
}

void		SuperMutant::bornMessage() const {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

void		SuperMutant::deathMessage() const {
	std::cout << "Aaargh..." << std::endl;
}
