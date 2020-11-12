#include <iostream>
#include <string>
#include <ctime>
#include "Zombie.hpp"

Zombie::Zombie() {
	name = "default_name";
	type = "default_type";
}

Zombie::Zombie(const std::string &z_name, const std::string &z_type) {
	name = z_name;
	type = z_type;
}

void Zombie::announce() const {
	std::cout << name << " (" << type << ")" << " Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::randomChump() {
	std::string names[10] = {"Chester", "Dolores", "Keith", "Kurt", "Freddie",
							   "Victor", "Egor", "Amy", "Michael", "Elvis"};
	name = names[rand() % 10];
	type = "legend";
}

std::string Zombie::GetName() const {
	return (name);
};

std::string Zombie::GetType() const {
	return (type);
};

Zombie::~Zombie() {
	return;
}