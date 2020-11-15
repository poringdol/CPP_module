#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <string>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

class NinjaTrap : virtual public ClapTrap{
protected:
	void setHitPoints(int i = 60);
	void setMaxHitPoints(int i = 60);
	void setEnergyPoints(int i = 120);
	void setMaxEnergyPoints(int i = 120);
	void setLevel(int i = 1);
	void setMeleeAttackDamage(int i = 60);
	void setRangedAttackDamage(int i = 5);
	void setArmorDamageReduction(int i = 0);
	void initNinjaTrap();
public:
	NinjaTrap();
	NinjaTrap(std::string const &new_name);
	NinjaTrap(const NinjaTrap &ninjatrap);
	~NinjaTrap();

	NinjaTrap &operator=(const NinjaTrap &ninjatrap);

	void ninjaShoebox(FragTrap &claptrap, std::string const &target);
	void ninjaShoebox(ScavTrap &claptrap, std::string const &target);
	void ninjaShoebox(ClapTrap &claptrap, std::string const &target);
	void ninjaShoebox(NinjaTrap &claptrap, std::string const &target);	
};

#endif