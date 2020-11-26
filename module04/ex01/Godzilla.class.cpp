#include <string>
#include <iostream>
#include "Godzilla.class.hpp"

Godzilla::Godzilla() {
	setHP();
	setType();
	bornMessage();
}

Godzilla::Godzilla(const Godzilla &super_mutant) {
	*this = super_mutant;
	bornMessage();
}

Godzilla::~Godzilla() {deathMessage();}

Godzilla	&Godzilla::operator=(const Godzilla &super_mutant) {
	HP = super_mutant.HP;
	Type = super_mutant.Type;
	return (*this);
}

void		Godzilla::setHP(int hp) {HP = hp;}
void		Godzilla::setType(std::string type) {Type = type;}

void		Godzilla::takeDamage(int damage) {
	damage -= 3;
	if (HP && damage > 0) {
		int taken_damage = (HP > damage) ? damage : HP;
		HP -= taken_damage;
		// std::cout << getType() << " taken " << taken_damage << " damage" << std::endl;
		// std::cout << "Remaining " << HP << " HP" << std::endl;
		if (!HP)
			Godzilla::~Godzilla();
	}
}

void		Godzilla::bornMessage() const {
	std::cout << "SKREEEEEEEEEEONGK" << std::endl;
}

void		Godzilla::deathMessage() const {
	std::cout << "SKREEEEEeeeeeee..." << std::endl;
}
