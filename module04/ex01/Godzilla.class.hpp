#pragma once

#include <string>
#include "Enemy.class.hpp"

class Godzilla : public Enemy {

public:
	Godzilla();
	Godzilla(const Godzilla &);
	Godzilla &operator=(const Godzilla &);
	virtual ~Godzilla() override;
	
	void	setHP(int hp = 5000);
	void	setType(std::string type = "Godzilla");

	void	takeDamage(int) override;
	void	bornMessage() const;
	void	deathMessage() const;
};
