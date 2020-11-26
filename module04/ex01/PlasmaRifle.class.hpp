#pragma once

#include <string>
#include "AWeapon.class.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle();
	PlasmaRifle(std::string const &name, int apcost, int damage);
	PlasmaRifle(const PlasmaRifle &);
	PlasmaRifle	&operator=(const PlasmaRifle &);
	virtual ~PlasmaRifle() override;

	void		 setName(std::string name = "Plasma Rifle");
	void		 setAttackSound(std::string sound = "* piouuu piouuu piouuu *");
	void		 setAPCost(int apcost = 5);
	void		 setDamage(int damage = 21);

	virtual void attack() const override;
};
