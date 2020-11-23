#include <iostream>
#include "AssaultTerminator.class.hpp"

AssaultTerminator::AssaultTerminator() : type("AssaultTerminator") {
	bornMessage();
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &at) : type("AssaultTerminator") {
	bornMessage();
	*this = at;
}

AssaultTerminator::~AssaultTerminator() {std::cout << "I’ll be back..." << std::endl;}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &at) {
	type = at.type;
	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const {return (new AssaultTerminator(*this));}

void AssaultTerminator::battleCry()	const {std::cout << "This code is unclean. PURIFY IT!" << std::endl;}
void AssaultTerminator::rangedAttack() const {std::cout << "* does nothing *" << std::endl;}
void AssaultTerminator::meleeAttack()	const {std::cout << "* attacks with chainfists *" << std::endl;}
void AssaultTerminator::bornMessage()	const {std::cout << "* teleports from space *" << std::endl;}
