#include "Victim.class.hpp"

Victim::Victim() : name("") {}

Victim::Victim(std::string n_name) : name(n_name) {
	std::cout << "Some random victim called "<< name <<
				 " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim) {
	*this = victim;
	std::cout << "Some random victim called "<< name <<
				 " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim "<< name <<
				 " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(const Victim &victim) {
	name = victim.name;
	return (*this);
}

void Victim::introduce() const {
	std::cout << *this;
}

const std::string &Victim::getName() const {return (name);}

virtual void Victim::getPolymorphed() const {
	std::cout << name << " has been turned into a cute little sheep!" << std::cout;
}

std::ostream &operator<<(std::ostream &stream, const Victim &victim) {
	stream << "I'm " << victim.getName() << ", and I like otters!" << std::endl;
	return (stream);
}