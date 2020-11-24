#pragma once

#include "IMateriaSource.interface.hpp"
#include "AMateria.class.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria *materia[SLOT_NUM] = {};
	int 	 count;

public:
	MateriaSource();
	MateriaSource(const MateriaSource&);
	~MateriaSource() override;

	MateriaSource& operator=(const MateriaSource&);

	void			  clearMateria(AMateria **am);
	virtual void 	  learnMateria(AMateria*) override;
	virtual AMateria* createMateria(std::string const & type) override;
};
