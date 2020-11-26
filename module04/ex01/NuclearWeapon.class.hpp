#pragma once

#include <string>
#include "AWeapon.class.hpp"

class NuclearWeapon : public AWeapon {

public:
	NuclearWeapon();
	NuclearWeapon(std::string const &name, int apcost, int damage);
	NuclearWeapon(const NuclearWeapon &);
	NuclearWeapon	&operator=(const NuclearWeapon &);
	virtual ~NuclearWeapon() override;

	void		 setName(std::string name = "Nuclear");
	void		 setAttackSound(std::string sound = "* EVERYBODY DIED *");
	void		 setAPCost(int apcost = 40);
	void		 setDamage(int damage = 10000);

	virtual void attack() const override;
};
