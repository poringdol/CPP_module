#include <string>
#include <iostream>
#include "Character.class.hpp"

Character::Character()
        : Name("no name"), AP(MAX_AP), Weapon(NULL) {}

Character::Character(std::string const &name)
        : Name(name), AP(MAX_AP), Weapon(NULL) {}

Character::Character(const Character &character) {*this = character;}

Character::~Character() {}

Character &Character::operator=(const Character &character) {
	Name = character.Name;
	AP = character.AP;
	Weapon = character.Weapon;
	return *this;
}

std::string	Character::getName() const {return Name;}
int			Character::getAP() const {return AP;}
AWeapon		*Character::getWeapon() const {return Weapon;}
void		Character::setName(std::string name) {Name = name;}
void		Character::setWeapon(AWeapon *weapon) {Weapon = weapon;}

void 		Character::recoverAP() {
	AP = (AP + RECOVER_AP > MAX_AP) ? MAX_AP : (AP + RECOVER_AP);
}

void 		Character::equip(AWeapon *weapon) {setWeapon(weapon);}

void 		Character::attack(Enemy *enemy) {
	if (Weapon) {
		if (AP < Weapon->getAPCost()) {
			std::cout << "Not enough AP for attack" << std::endl;
		} else {
			if (!(enemy->getHP()))
				return;
			std::cout << Name << " attacks " << enemy->getType()
					<< " with a " << Weapon->getName() << std::endl;
			Weapon->attack();
			enemy->takeDamage(Weapon->getDamage());
			AP -= Weapon->getAPCost();
		}
	}
}

std::ostream &operator<<(std::ostream &os, const Character &ch) {
	AWeapon *weapon = ch.getWeapon();
	os << ch.getName() << " has " << ch.getAP() << " AP";
	if (weapon) {
		os << " and wields a " << (*weapon).getName() << std::endl;
	} else {
		os << " and is unarmed" << std::endl;
	}
	return os;
}
