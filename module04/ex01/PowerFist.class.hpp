#pragma once

#include <string>
#include "AWeapon.class.hpp"

class PowerFist : public AWeapon {

public:
	PowerFist();
	PowerFist(std::string const &name, int apcost, int damage);
	PowerFist(const PowerFist &);
	PowerFist &operator=(const PowerFist &);
	virtual ~PowerFist() override;

	void		 setName(std::string name = "Power Fist");
	void		 setAttackSound(std::string sound = "* pschhh... SBAM! *");
	void		 setAPCost(int apcost = 8);
	void		 setDamage(int damage = 50);

	virtual void attack() const override;
};
