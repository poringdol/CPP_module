#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent();
	void setZombieType(const std::string &z_type);
	Zombie *newZombie(const std::string &z_name);
private:
	std::string type;
};

#endif
