#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource() : count(0) {}

MateriaSource::MateriaSource(const MateriaSource& ms) {*this = ms;}

MateriaSource::~MateriaSource() {clearMateria(materia);}

MateriaSource& MateriaSource::operator=(const MateriaSource& ms) {
	count = ms.count;
	clearMateria(materia);
	for (int i = 0; i < SLOT_NUM; i++)
		materia[i] = ms.materia[i]->clone();
	return (*this);
}

void MateriaSource::clearMateria(AMateria *am[SLOT_NUM]) {
	for (int i = 0; i < SLOT_NUM; i++) {
		if (am[i])
			delete am[i];
		am[i] = NULL;
	}
}

void MateriaSource::learnMateria(AMateria* am) {
	if (count < 4) {
		materia[count] = am->clone();
		count++;
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	if (count) {
		for (int i = count - 1; i >= 0; i--) {
			if (materia[i]->getType() == type)
				return materia[i]->clone();
		}
	}
	return NULL;
}
