#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap{
private:
	std::string	randomAttack[9];

public:
	ScavTrap();
	ScavTrap(std::string const &new_name);
	ScavTrap(const ScavTrap &scavtrap);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &scavtrap);

	void initScavTrap();
	void challengeNewcomer(std::string const &target);
};

#endif