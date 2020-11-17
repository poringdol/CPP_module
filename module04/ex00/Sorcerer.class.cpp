#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer() : name(""), title("") {}

Sorcerer::Sorcerer(std::string n_name, std::string n_title) : name(n_name), title(n_title) {
	std::cout << getName() << ", " << getTitle() << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorc) {
	*this = sorc;
	std::cout << getName() << ", " << getTitle() << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << getName() << ", " << getTitle() <<
				 " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorc) {
	setName(sorc.getName());
	setTitle(sorc.getName());
	return (*this);
}

void Sorcerer::setName(std::string n_name) {name = n_name;}

void Sorcerer::setTitle(std::string n_title) {name = n_title;}

const std::string &Sorcerer::getName() const {return (name);}

const std::string &Sorcerer::getTitle() const {return (title);}

void Sorcerer::introduce() const {std::cout << *this;}

void Sorcerer::polymorph(Victim const &victim) const {victim.getPolymorphed();}

std::ostream 		&operator<<(std::ostream &stream, const Sorcerer &sorc) {
	stream << "I am " << sorc.getName() << ", " << sorc.getTitle() << ", and I like ponies!" << std::endl;
	return (stream);
}