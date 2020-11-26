#pragma once

#include <iostream>
#include "AWeapon.class.hpp"
#include "Enemy.class.hpp"

#define MAX_AP 40
#define RECOVER_AP 10

class Character {

private:
	std::string	Name;
	int			AP;
	AWeapon		*Weapon;

	Character();

public:
	Character(std::string const &name);
	Character(const Character &);
	Character &operator=(const Character &);
	~Character();

	std::string	getName() const;
	int			getAP() const;
	AWeapon		*getWeapon() const;
	void		setName(std::string name);
	void		setWeapon(AWeapon *weapon);

	void 		recoverAP();
	void 		equip(AWeapon*);
	void 		attack(Enemy*);
};

std::ostream &operator<<(std::ostream &os, const Character &ch);

