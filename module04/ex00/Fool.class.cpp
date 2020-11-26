#include "Fool.class.hpp"

Fool::Fool() : name("Noname") {}

Fool::Fool(std::string n_name) : Victim(n_name) {
	name = n_name;
	std::cout << "Bla bla." << std::endl;
}

Fool::Fool(const Fool &fool) {
	*this = fool;
	std::cout << "Bla bla." << std::endl;
}

Fool::~Fool() {
	std::cout << "Blaaaa..." << std::endl;
}

void Fool::setName(std::string n_name) {name = n_name;}

std::string	Fool::getName() const {return (name);}

Fool &Fool::operator=(const Fool &fool) {
	setName(fool.getName());
	return (*this);
}

void Fool::getPolymorphed() const {
	std::cout << getName() << " has been turned into a black goat!" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, const Fool &fool) {
	stream << "I'm " << fool.getName() << " and I like new gates!" << std::endl;
	return (stream);
}