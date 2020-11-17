#include "Peon.class.hpp"

Peon::Peon() : name("") {}

Peon::Peon(std::string n_name) : Victim(n_name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &peon) {
	*this = peon;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark... " << std::endl;
}

void Peon::setName(std::string n_name) {name = n_name;}

std::string	Peon::getName() const {return (name);}

Peon &Peon::operator=(const Peon &peon) {
	setName(peon.getName());
	return (*this);
}

void Peon::getPolymorphed() const {
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, const Peon &peon) {
	stream << "I'm " << peon.getName() << ", and I like otters!" << std::endl;
	return (stream);
}