#pragma once

#include <string>
#include "ICharacter.interface.hpp"
#include "AMateria.class.hpp"

class Character : public ICharacter {

private:
	std::string name;
	AMateria* slots[SLOT_NUM] = {};

	Character();

public:
	Character(std::string new_name);
	Character(const Character&);
	~Character();

	Character& operator=(const Character&);

	void clearMateria(AMateria *am[SLOT_NUM]);
	std::string const& getName() const override;
	virtual void equip(AMateria* m) override;
	virtual void unequip(int idx) override;
	virtual void use(int idx, ICharacter& target) override;
};
