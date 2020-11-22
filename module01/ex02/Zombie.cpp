#include <iostream>
#include <string>
#include <cstdlib>
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
	std::cout << GetName() << " (" << GetType() << ")" << " Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::GetName() const {
	return (name);
};

std::string Zombie::GetType() const {
	return (type);
};

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " deleted" << std::endl;
	name.clear();
	type.clear();
}
