#include "AMateria.class.hpp"

AMateria::AMateria() : _xp(0), _type("no type") {}

AMateria::AMateria(std::string const& type) : _xp(0), _type(type) {}

AMateria::AMateria(const AMateria& am) {*this = am;}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& am) {
	_xp = am._xp;
	_type = am._type;
	return *this;
}

std::string const&	AMateria::getType() const {return _type;}

unsigned int 		AMateria::getXP() const {return _xp;}

void				AMateria::use(ICharacter& target) {
	_xp += 10;
	(void)target;
}
