#pragma once

#include <string>

class AWeapon {

protected:
	std::string Name;
	std::string AttackSound;
	int APCost;
	int Damage;

	AWeapon();

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &aweapon);
	~AWeapon();

	AWeapon		&operator=(const AWeapon &aweapon);
	
	std::string  getName() const;
	std::string	 getAttackSound() const;
	int 		 getAPCost() const;
	int 		 getDamage() const;
	void		 setName(std::string new_name);
	void		 setAttackSound(std::string new_damage);
	void		 setAPCost(int new_apcost);
	void		 setDamage(int new_damage);

	virtual void attack() const = 0;
};
