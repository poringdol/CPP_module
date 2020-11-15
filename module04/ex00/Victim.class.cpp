#include "Victim.class.hpp"

Victim::Victim(std::string n_name) : name(n_name) {
	std::cout << "Some random victim called "<< name <<
				 " just appeared!" << std::endl;
}

// Victim::Victim(const Victim &victim) {
// 	*this = victim;
// 	std::cout << name << ", " << title << ", is born!" << std::endl;
// }

Victim::~Victim() {
	std::cout << "Victim "<< name <<
				 " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(const Victim &victim) {
	name = victim.name;
	return (*this);
}

void Victim::introduce() const {
	std::cout << "I'm " << name << ", " << ", and I like otters!" << std::endl;
}

const std::string	&Victim::getName() const {return (name);}

std::ostream &operator<<(std::ostream &stream, const Victim &victim) {
	stream << "I'm " << victim.getName() << ", " << ", and I like otters!" << std::endl;
	return (stream);
}