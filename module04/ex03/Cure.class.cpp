#include <iostream>
#include "Cure.class.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(std::string const& type) : AMateria(type) {}

Cure::Cure(const Cure& ic) {*this = ic;}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& ic) {
	_xp = ic._xp;
	_type = ic._type;
	return *this;
}

AMateria* Cure::clone() const {return new Cure();}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	_xp += 10;
}
