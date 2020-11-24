#pragma once

#include <string>
#include "ICharacter.interface.hpp"

#define SLOT_NUM 4

class ICharacter;

class AMateria {

protected:
	unsigned int _xp;
	std::string	 _type;

	AMateria();

public:
	AMateria(std::string const& type);
	AMateria(const AMateria&);
	virtual ~AMateria();

	AMateria& operator=(const AMateria&);

	std::string const& getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
