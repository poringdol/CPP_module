#pragma once

#include <string>
#include "AWeapon.class.hpp"

class PowerFist : public AWeapon {

private:
	PowerFist();

public:
	PowerFist(std::string const &name, int apcost, int damage);
	PowerFist(const PowerFist &aweapon);
	~PowerFist();

	PowerFist		&operator=(const PowerFist &aweapon);

	void		 setName(std::string name = "Power Fist");
	void		 setAttackSound(std::string sound = "* pschhh... SBAM! *");
	void		 setAPCost(int apcost = 8);
	void		 setDamage(int damage = 50);

	virtual void attack() const /*override*/;
};
