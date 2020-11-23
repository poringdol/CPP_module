#include <string>
#include "AWeapon.class.hpp"

AWeapon::AWeapon() : Name("empty hands"), APCost(0), Damage(0) {}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
				Name(name), APCost(apcost), Damage(damage) {}

AWeapon::AWeapon(const AWeapon &aweapon) {*this = aweapon;}

AWeapon::~AWeapon() {}

AWeapon	&AWeapon::operator=(const AWeapon &aweapon) {
	Name = aweapon.Name;
	APCost = aweapon.APCost;
	Damage = aweapon.Damage;
	return (*this);
}

std::string AWeapon::getName() const {return Name;}
std::string	AWeapon::getAttackSound() const {return AttackSound;}
int	 		AWeapon::getAPCost() const {return APCost;}
int  		AWeapon::getDamage() const {return Damage;}
void		AWeapon::setName(std::string name) {Name = name;}
void		AWeapon::setAttackSound(std::string sound) {AttackSound = sound;}
void		AWeapon::setAPCost(int apcost) {APCost = apcost;}
void		AWeapon::setDamage(int damage) {Damage = damage;}
