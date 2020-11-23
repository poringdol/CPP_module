#include <string>
#include <iostream>
#include "RadScorpion.class.hpp"

RadScorpion::RadScorpion() {
	setHP();
	setType();
	bornMessage();
}

RadScorpion::RadScorpion(const RadScorpion &rad_scorpion) {
	*this = rad_scorpion;
	bornMessage();
}

RadScorpion::~RadScorpion() {deathMessage();}

RadScorpion	&RadScorpion::operator=(const RadScorpion &rad_scorpion) {
	HP = rad_scorpion.HP;
	Type = rad_scorpion.Type;
	return (*this);
}

void		RadScorpion::setHP(int hp) {HP = hp;}
void		RadScorpion::setType(std::string type) {Type = type;}

void		RadScorpion::takeDamage(int damage) {
	if (damage > 0) {
		int taken_damage = (HP > damage) ? damage : HP;
		HP -= taken_damage;
		std::cout << getType() << " taken " << taken_damage << " damage" << std::endl;
		std::cout << "Remaining " << HP << " HP" << std::endl;
	}
}

void		RadScorpion::bornMessage() {
	std::cout << "* click click click *" << std::endl;
}

void		RadScorpion::deathMessage() {
	std::cout << "* SPROTCH *" << std::endl;
}
