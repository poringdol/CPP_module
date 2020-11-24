#pragma once

#include <string>
#include "AMateria.class.hpp"

class Cure : public AMateria {

private:

public:
	Cure();
	Cure(std::string const& type);
	Cure(const Cure&);
	~Cure() override;

	Cure& operator=(const Cure&);

	virtual AMateria* clone() const override;
	virtual void use(ICharacter& target) override;
};
