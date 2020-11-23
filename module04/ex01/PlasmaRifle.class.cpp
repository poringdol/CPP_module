#include <string>
#include <iostream>
#include "PlasmaRifle.class.hpp"

PlasmaRifle::PlasmaRifle() {
	setName();
	setAttackSound();
	setAPCost();
	setDamage();
}

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) :
				AWeapon(name, apcost, damage) {
	setAttackSound();
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &PlasmaRifle) {*this = PlasmaRifle;}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &PlasmaRifle) {
	Name = PlasmaRifle.Name;
	APCost = PlasmaRifle.APCost;
	Damage = PlasmaRifle.Damage;
	return (*this);
}

void		PlasmaRifle::setName(std::string name) {Name = name;}
void		PlasmaRifle::setAttackSound(std::string sound) {AttackSound = sound;}
void		PlasmaRifle::setAPCost(int apcost) {APCost = apcost;}
void		PlasmaRifle::setDamage(int damage) {Damage = damage;}

void 		PlasmaRifle::attack() const {
	std::cout << AttackSound << std::endl;
}
