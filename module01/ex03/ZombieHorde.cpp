#include <iostream>
#include <stdexcept>
#include <unistd.h>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	if (n < 1)
		throw std::invalid_argument("Wrong nunber of zombies");
	horde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		horde[i].randomChump();
		usleep(1000000);
	}
	count = n;
}

void ZombieHorde::announce() const {
	for (int i = 0; i < count; i++) {
		std::cout << horde[i].GetName() <<
			 " (" << horde[i].GetType() << ")" << " Braiiiiiiinnnssss..." << std::endl;
	}
}

ZombieHorde::~ZombieHorde() {
	delete[] horde;
	std::cout << "All zombies deleted" << std::endl;
}