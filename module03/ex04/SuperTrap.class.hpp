#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include <string>
#include "SuperTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "FragTrap.class.hpp"


class SuperTrap : public NinjaTrap, public FragTrap {
private:
	void initSuperTrap();

public:
	SuperTrap();
	SuperTrap(std::string const &new_name);
	SuperTrap(const SuperTrap &supertrap);
	~SuperTrap();

	SuperTrap &operator=(const SuperTrap &supertrap);
	
	void challengeNewcomer(std::string const &target);
};

#endif