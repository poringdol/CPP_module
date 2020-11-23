#include <iostream>
// #include "ISpaceMarine.class.hpp"
#include "TacticalMarine.class.hpp"

TacticalMarine::TacticalMarine() : type("TacticalMarine") {
	bornMessage();
}

TacticalMarine::TacticalMarine(const TacticalMarine &tm) : type("TacticalMarine") {
	bornMessage();
	*this = tm;
}

TacticalMarine::~TacticalMarine() {std::cout << "Aaargh..." << std::endl;}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &tm) {
	type = tm.type;
	return *this;
}

ISpaceMarine* TacticalMarine::clone() const {return (new TacticalMarine(*this));}

void TacticalMarine::battleCry()	const {std::cout << "For the holy PLOT!" << std::endl;}
void TacticalMarine::rangedAttack() const {std::cout << "* attacks with a bolter *" << std::endl;}
void TacticalMarine::meleeAttack()	const {std::cout << "* attacks with a chainsword *" << std::endl;}
void TacticalMarine::bornMessage()	const {std::cout << "Tactical Marine ready for battle!" << std::endl;}
