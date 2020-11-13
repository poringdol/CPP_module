#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap{
private:
	std::string	random_attack[9] = {"I did a challenge? I did a challenge!",
									"Pain school is now in session. Ready for the PUNCHline?!",
									"Gloves are comin' off!",
									"Now I will dominate!",
									"Burn, baby, burn!",
									"I will prove to you my robotic superiority!",
									"Man versus machine! Very tiny streamlined machine!",
									"A million baddies, and you wanna hit me? Aww!",
									"Ha ha ha! Fall before your robot overlord!"};

public:
	ScavTrap();
	ScavTrap(std::string const &new_name);
	void challengeNewcomer(std::string const &target);
	~ScavTrap();
};

#endif