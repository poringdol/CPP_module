#include <iostream>
#include "Ice.class.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const& type) : AMateria(type) {}

Ice::Ice(const Ice& ic) {*this = ic;}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& ic) {
	_xp = ic._xp;
	_type = ic._type;
	return *this;
}

AMateria* Ice::clone() const {return new Ice();}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	_xp += 10;
}
