#pragma once

#include <string>
#include "Enemy.class.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant();
	SuperMutant(const SuperMutant &SuperMutant);
	~SuperMutant();
	
	SuperMutant &operator=(const SuperMutant &SuperMutant);

	void	setHP(int hp = 170);
	void	setType(std::string type = "Super Mutant");

	void	takeDamage(int);
	void	bornMessage();
	void	deathMessage();
};
