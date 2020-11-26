#include <string>
#include <iostream>
#include "RadScorpion.class.hpp"

RadScorpion::RadScorpion() {
	setHP();
	setType();
	bornMessage();
}

RadScorpion::RadScorpion(const RadScorpion &rs) {
	*this = rs;
	bornMessage();
}

RadScorpion::~RadScorpion() {
	deathMessage();
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &rs) {
	HP = rs.HP;
	Type = rs.Type;
	return (*this);
}

void		RadScorpion::setHP(int hp) {HP = hp;}
void		RadScorpion::setType(std::string type) {Type = type;}

void		RadScorpion::takeDamage(int damage) {
	if (HP && damage > 0) {
		int taken_damage = (HP > damage) ? damage : HP;
		HP -= taken_damage;
		// std::cout << getType() << " taken " << taken_damage << " damage" << std::endl;
		// std::cout << "Remaining " << HP << " HP" << std::endl;
		if (!HP)
			RadScorpion::~RadScorpion();
	}
}

void		RadScorpion::bornMessage() const {
	std::cout << "* click click click *" << std::endl;
}

void		RadScorpion::deathMessage() const {
	std::cout << "* SPROTCH *" << std::endl;
}
