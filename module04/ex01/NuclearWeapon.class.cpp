#include <string>
#include <iostream>
#include "NuclearWeapon.class.hpp"

NuclearWeapon::NuclearWeapon() {
	setName();
	setAttackSound();
	setAPCost();
	setDamage();
}

NuclearWeapon::NuclearWeapon(std::string const &name, int apcost, int damage) :
				AWeapon(name, apcost, damage) {
	setAttackSound();
}

NuclearWeapon::NuclearWeapon(const NuclearWeapon &nw) {*this = nw;}

NuclearWeapon::~NuclearWeapon() {}

NuclearWeapon	&NuclearWeapon::operator=(const NuclearWeapon &nw) {
	Name = nw.Name;
	APCost = nw.APCost;
	Damage = nw.Damage;
	return (*this);
}

void		NuclearWeapon::setName(std::string name) {Name = name;}
void		NuclearWeapon::setAttackSound(std::string sound) {AttackSound = sound;}
void		NuclearWeapon::setAPCost(int apcost) {APCost = apcost;}
void		NuclearWeapon::setDamage(int damage) {Damage = damage;}

void 		NuclearWeapon::attack() const {
	std::cout << AttackSound << std::endl;
}
