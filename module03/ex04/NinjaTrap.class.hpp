#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <string>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

class NinjaTrap : virtual public ClapTrap{
public:
	NinjaTrap();
	NinjaTrap(std::string const &new_name);
	NinjaTrap(const NinjaTrap &ninjatrap);
	~NinjaTrap();

	NinjaTrap& operator=(const NinjaTrap &ninjatrap);

	void initNinjaTrap();
	void ninjaShoebox(FragTrap &claptrap, std::string const &target);
	void ninjaShoebox(ScavTrap &claptrap, std::string const &target);
	void ninjaShoebox(ClapTrap &claptrap, std::string const &target);
	void ninjaShoebox(NinjaTrap &claptrap, std::string const &target);	
};

#endif