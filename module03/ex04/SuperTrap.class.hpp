#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include <string>
#include "SuperTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "FragTrap.class.hpp"


class SuperTrap : public NinjaTrap, public FragTrap {
public:
	SuperTrap();
	SuperTrap(std::string const &new_name);
	SuperTrap(const SuperTrap &supertrap);
	~SuperTrap();

	SuperTrap& operator=(const SuperTrap &supertrap);
	
	void initSuperTrap();
	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void challengeNewcomer(std::string const &target);
};

#endif