#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer(std::string n_name, std::string n_title) : name(n_name), title(n_title) { //try : init
	// name = n_name;
	// title = n_title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorc) {
	*this = sorc;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << name << ", " << title <<
				 " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorc) {
	name = sorc.name;
	title = sorc.title;
	return (*this);
}

void Sorcerer::introduce() const {
	std::cout << "I am " << name << ", " << title << ", and I like ponies!" << std::endl;
}

const std::string	&Sorcerer::getName() const {return (name);}
const std::string	&Sorcerer::getTitle() const {return (title);}

std::ostream &operator<<(std::ostream &stream, const Sorcerer &sorc) {
	stream << "I am " << sorc.getName() << ", " << sorc.getTitle() << ", and I like ponies!" << std::endl;
	return (stream);
}