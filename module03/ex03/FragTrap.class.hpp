#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap {
private:
	std::string	randomAttack[9];

public:
	FragTrap();
	FragTrap(std::string const &new_name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();

	FragTrap &operator=(const FragTrap &fragtrap);
	
	void initFragTrap();
	void vaulthunter_dot_exe(std::string const &target);
};

#endif