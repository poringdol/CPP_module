#pragma once

#include <string>
#include "Enemy.class.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion();
	RadScorpion(const RadScorpion &);
	RadScorpion &operator=(const RadScorpion &);
	virtual ~RadScorpion() override;

	void	setHP(int hp = 80);
	void	setType(std::string type = "RadScorpion");

	void	takeDamage(int) override;
	void	bornMessage() const;
	void	deathMessage() const;
};
