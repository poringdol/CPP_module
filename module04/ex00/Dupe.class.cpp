#include "Dupe.class.hpp"

Dupe::Dupe() : name("Noname") {}

Dupe::Dupe(std::string n_name) : Victim(n_name) {
	name = n_name;
	std::cout << "Kis kis." << std::endl;
}

Dupe::Dupe(const Dupe &pupe) {
	*this = pupe;
	std::cout << "Kis kis." << std::endl;
}

Dupe::~Dupe() {
	std::cout << "I'll be back" << std::endl;
}

void Dupe::setName(std::string n_name) {name = n_name;}

std::string	Dupe::getName() const {return (name);}

Dupe &Dupe::operator=(const Dupe &pupe) {
	setName(pupe.getName());
	return (*this);
}

void Dupe::getPolymorphed() const {
	std::cout << getName() << " has been turned into a ninja turtle!" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, const Dupe &pupe) {
	stream << "I'm " << pupe.getName() << " and I like canalization!" << std::endl;
	return (stream);
}