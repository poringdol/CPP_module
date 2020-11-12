#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string names[10] = {
	"Chester",
	"Dolores",
	"Keith",
	"Kurt",
	"Freddie",
	"Victor",
	"Egor",
	"Amy",
	"Michael",
	"Elvis"
};

Zombie randomChump() {
	Zombie new_zombie(names[rand() % 10], "legend");
	new_zombie.announce();
	return (new_zombie);
}

int main() {
	std::cout << "<< Check Zombie class >>" << std::endl;
	{
		Zombie new_zombie;
		new_zombie.announce();
	}
	std::cout << std::endl;

	std::cout << "<< Check ZombieEvent class >>" << std::endl;
	{
		ZombieEvent zombie_event;

		Zombie *zombie_1 = zombie_event.newZombie("Shaun");
		(*zombie_1).announce();
		delete zombie_1;

		zombie_event.setZombieType("movie");
		Zombie *zombie_2 = zombie_event.newZombie("Shaun");
		(*zombie_2).announce();
		delete zombie_2;
	}
	std::cout << std::endl;

	std::cout << "<< Check Random >>" << std::endl;
	{
		srand(time(NULL));
		Zombie zombie_3 = randomChump();
		Zombie zombie_4 = randomChump();
		Zombie zombie_5 = randomChump();
		std::cout << "Zombie band: " <<
						zombie_3.GetName() << ", " <<
						zombie_4.GetName() << ", " <<
						zombie_5.GetName() << ", " << std::endl;
	}
}