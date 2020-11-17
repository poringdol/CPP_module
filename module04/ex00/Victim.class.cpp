#include "Victim.class.hpp"

Victim::Victim() : name("") {}

Victim::Victim(std::string n_name) : name(n_name) {
	std::cout << "Some random victim called "<< name <<
				 " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim) {
	*this = victim;
	std::cout << "Some random victim called "<< getName() <<
				 " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim "<< getName() <<
				 " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(const Victim &victim) {
	setName(victim.getName());
	return (*this);
}

void Victim::setName(std::string n_name) {name = n_name;}

const std::string &Victim::getName() const {return (name);}

void Victim::introduce() const {
	std::cout << *this;
}

void Victim::getPolymorphed() const {
	std::cout << name << " has been turned into a PONY little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, const Victim &victim) {
	stream << "I'm " << victim.getName() << ", and I like otters!" << std::endl;
	return (stream);
}