#include <string>
#include "Character.class.hpp"

Character::Character() : name("noname") {}

Character::Character(std::string new_name) : name(new_name) {}

Character::Character(const Character& ch) {*this = ch;}

Character::~Character() {clearMateria(slots);}

Character& Character::operator=(const Character& ch) {
	clearMateria(slots);
	name = ch.name;
	for (int i = 0; i < SLOT_NUM; i++)
		slots[i] = ch.slots[i]->clone();
	return (*this);
}

void Character::clearMateria(AMateria *am[SLOT_NUM]) {
	for (int i = 0; i < SLOT_NUM; i++) {
		if (am[i])
			delete am[i];
		am[i] = NULL;
	}
}

std::string const& Character::getName() const {return name;}

void Character::equip(AMateria* m) {
	for (int i = 0; i < SLOT_NUM; i++) {		// проверка, что уже не экипирован
		if (slots[i] == m)
			return;
	}
	for (int i = 0; i < SLOT_NUM; i++) {
		if (!slots[i]) {
			slots[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (slots[idx])
		slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < SLOT_NUM && slots[idx])
		slots[idx]->use(target);
}
