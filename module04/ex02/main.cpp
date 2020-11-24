#include <iostream>
#include "ISpaceMarine.interface.hpp"
#include "ISquad.interface.hpp"
#include "Squad.class.hpp"
#include "AssaultTerminator.class.hpp"
#include "TacticalMarine.class.hpp"

int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	std::cout << "NUmber of marines = " << vlc->getCount() << std::endl;
	vlc->push(bob);
	std::cout << "NUmber of marines = " << vlc->getCount() << std::endl;
	vlc->push(jim);
	std::cout << "NUmber of marines = " << vlc->getCount() << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	Squad a;
	Squad b = a;

	delete vlc;
}
