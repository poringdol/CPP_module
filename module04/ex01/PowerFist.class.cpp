#include <string>
#include <iostream>
#include "PowerFist.class.hpp"

PowerFist::PowerFist() {
	setName();
	setAttackSound();
	setAPCost();
	setDamage();
}

PowerFist::PowerFist(std::string const &name, int apcost, int damage) :
				AWeapon(name, apcost, damage) {
	setAttackSound();
}

PowerFist::PowerFist(const PowerFist &PowerFist) {*this = PowerFist;}

PowerFist::~PowerFist() {}

PowerFist	&PowerFist::operator=(const PowerFist &PowerFist) {
	Name = PowerFist.Name;
	APCost = PowerFist.APCost;
	Damage = PowerFist.Damage;
	return (*this);
}

void		PowerFist::setName(std::string name) {Name = name;}
void		PowerFist::setAttackSound(std::string sound) {AttackSound = sound;}
void		PowerFist::setAPCost(int apcost) {APCost = apcost;}
void		PowerFist::setDamage(int damage) {Damage = damage;}

void		PowerFist::attack() const {
	std::cout << AttackSound << std::endl;
}