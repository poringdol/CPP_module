#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap {
protected:
	std::string	name;
	unsigned	hitPoints;
 	unsigned	maxHitPoints;
	unsigned	energyPoints;
	unsigned	maxEnergyPoints;
	unsigned	level;
	unsigned	meleeAttackDamage;
	unsigned	rangedAttackDamage;
	unsigned	armorDamageReduction;
	std::string	meleeAttackMessage;
	std::string	rangeAttackMessage;
	std::string	noHitPointsMessage;

	void setName(std::string = "noname");
	void setHitPoints(unsigned u = 0);
 	void setMaxHitPoints(unsigned u = 0);
	void setEnergyPoints(unsigned u = 0);
	void setMaxEnergyPoints(unsigned u = 0);
	void setLevel(unsigned u = 0);
	void setMeleeAttackDamage(unsigned u = 0);
	void setRangedAttackDamage(unsigned u = 0);
	void setArmorDamageReduction(unsigned u = 0);
	void setMeleeAttackMessage(std::string = "Melee damage. CLAPTRAP ");
	void setRangeAttackMessage(std::string = ": Range damage. CLAPTRAP ");
	void setNoHitPointsMessage(std::string = ": No hit points. CLAPTRAP ");
	void initClapTrap();

public:
	ClapTrap();
	ClapTrap(std::string const &new_name);
	ClapTrap(const ClapTrap &claptrap);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &claptrap);
	
	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void takeDamage(unsigned amount);
	void beRepaired(unsigned amount);
};

#endif