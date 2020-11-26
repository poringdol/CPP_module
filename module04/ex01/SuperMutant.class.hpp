#pragma once

#include <string>
#include "Enemy.class.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant();
	SuperMutant(const SuperMutant &);
	SuperMutant &operator=(const SuperMutant &);
	virtual ~SuperMutant() override;

	void	setHP(int hp = 170);
	void	setType(std::string type = "Super Mutant");

	void	takeDamage(int) override;
	void	bornMessage() const;
	void	deathMessage() const;
};
