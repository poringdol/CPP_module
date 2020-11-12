#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	type = "default_type";
}

void	ZombieEvent::setZombieType(const std::string &z_type) {
	type = z_type;
}

Zombie	*ZombieEvent::newZombie(const std::string &z_name) {
	Zombie *zombie = new Zombie(z_name, type);
	return (zombie);
}
