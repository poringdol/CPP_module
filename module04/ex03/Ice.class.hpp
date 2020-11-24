#pragma once

#include <string>
#include "AMateria.class.hpp"
#include "ICharacter.interface.hpp"

class Ice : public AMateria {

private:

public:
	Ice();
	Ice(std::string const& type);
	Ice(const Ice&);
	~Ice() override;

	Ice& operator=(const Ice&);

	virtual AMateria* clone() const override;
	virtual void use(ICharacter& target) override;
};
