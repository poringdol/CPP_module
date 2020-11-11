#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int n);
	void announce() const;
	~ZombieHorde();

private:
	Zombie	*horde;
	int		count;
};

#endif