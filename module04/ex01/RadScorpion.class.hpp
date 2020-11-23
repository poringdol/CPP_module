#pragma once

#include <string>
#include "Enemy.class.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion();
	RadScorpion(const RadScorpion &RadScorpion);
	~RadScorpion();
	
	RadScorpion &operator=(const RadScorpion &RadScorpion);

	void	setHP(int hp = 80);
	void	setType(std::string type = "RadScorpion");

	void	takeDamage(int);
	void	bornMessage();
	void	deathMessage();
};
