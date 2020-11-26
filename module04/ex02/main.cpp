#include <iostream>
#include "ISpaceMarine.interface.hpp"
#include "ISquad.interface.hpp"
#include "Squad.class.hpp"
#include "AssaultTerminator.class.hpp"
#include "TacticalMarine.class.hpp"

using std::cout;
using std::endl;

int main() {
	ISpaceMarine* bob = new TacticalMarine;
	bob->battleCry();
	cout << endl;

	ISpaceMarine* jim = new AssaultTerminator;
	jim->battleCry();
	cout << endl;

	ISquad* vlc = new Squad;
	cout << "New squad created. Number of marines = " << vlc->getCount() << endl << endl;

	cout << "Push new unit into squad" << endl;
	vlc->push(bob);
	cout << "Number of marines = " << vlc->getCount() << endl << endl;

	cout << "Push new unit into squad" << endl;
	vlc->push(jim);
	cout << "Number of marines = " << vlc->getCount() << endl << endl;

	cout << "Try push unit already in" << endl;
	vlc->push(jim);
	cout << "Number of marines = " << vlc->getCount() << endl << endl;

	ISpaceMarine* antuan = bob->clone();
	antuan->battleCry();
	cout << endl;

	cout << "Push bob clone into squad" << endl;
	vlc->push(antuan);
	cout << "Number of marines = " << vlc->getCount() << endl << endl;

	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		cout << endl;
	}
	Squad a;
	Squad b = a;

	delete vlc;
}
