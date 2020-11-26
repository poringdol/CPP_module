#include <iostream>
#include "AWeapon.class.hpp"
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"
#include "Enemy.class.hpp"
#include "SuperMutant.class.hpp"
#include "RadScorpion.class.hpp"
#include "Character.class.hpp"
#include "Godzilla.class.hpp"
#include "NuclearWeapon.class.hpp"

using std::cout;
using std::endl;

int main(){
	Character* me = new Character("Me");
	cout << "Created character " << *me << endl; // создали персонажа
	
	Enemy* scorp1 = new RadScorpion();	// создали врага класса RadScorpion
	cout << "Created enemy " << scorp1->getType() << " with " << scorp1->getHP() << " HP" << endl << endl;
    
	me->attack(scorp1);					// нет атаки, т.к. не взяли оружие		
	cout << "No weapon" << endl;

	AWeapon* pr = new PlasmaRifle();
	me->equip(pr);						// взяли оружие
    cout << "Equipmented " << me->getWeapon()->getName() << endl;
	me->attack(scorp1);
    cout << "1 - Enemy " << scorp1->getType() << " has " << scorp1->getHP() << " HP" << endl;
    cout << "1 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

	pr->setName("Plasma Bazooqa");		// проверка, что equip() принимает указатель, а не копирует объект
    cout << "Equipmented " << me->getWeapon()->getName() << endl;
	me->attack(scorp1);
	cout << "2 - Enemy " << scorp1->getType() << " has " << scorp1->getHP() << " HP" << endl;
    cout << "2 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

	me->attack(scorp1);
	cout << "3 - Enemy " << scorp1->getType() << " has " << scorp1->getHP() << " HP" << endl;
    cout << "3 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

	me->attack(scorp1);					// враг умирает
	cout << "4 - Enemy " << scorp1->getType() << " has " << scorp1->getHP() << " HP" << endl;
    cout << "4 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

	me->attack(scorp1);                 // ничего не происходит, т.к. враг мертв
	cout << "5 - Enemy " << scorp1->getType() << " has " << scorp1->getHP() << " HP" << endl;
    cout << "5 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;



	Enemy* mutant1 = new SuperMutant(); // новый враг класса SuperMutant
	cout << "Created enemy " << mutant1->getType() << " with " << mutant1->getHP() << " HP" << endl << endl;

	cout << "6 - Enemy " << mutant1->getType() << " has " << mutant1->getHP() << " HP" << endl;
    cout << "6 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

	AWeapon* pf = new PowerFist();
	me->equip(pf);						// Смена оружия
	cout << "Equipmented " << me->getWeapon()->getName() << endl;

	me->attack(mutant1);
	cout << "7 - Enemy " << mutant1->getType() << " has " << mutant1->getHP() << " HP" << endl;
    cout << "7 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

	me->attack(mutant1);        // у персонажа кончились AP
	cout << "8 - Enemy " << mutant1->getType() << " has " << mutant1->getHP() << " HP" << endl;
    cout << "8 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

    me->attack(mutant1); 
	cout << "9 - Enemy " << mutant1->getType() << " has " << mutant1->getHP() << " HP" << endl;
    cout << "9 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

	me->recoverAP();					// восстанавливаем AP
	me->recoverAP();
	me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    cout << "10 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

	me->attack(mutant1);
	cout << "11 - Enemy " << mutant1->getType() << " has " << mutant1->getHP() << " HP" << endl;
    cout << "11 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;
	
    me->attack(mutant1);				// враг умер
	cout << "12 - Enemy " << mutant1->getType() << " has " << mutant1->getHP() << " HP" << endl;
    cout << "12 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

	me->attack(mutant1);
	cout << "13 - Enemy " << mutant1->getType() << " has " << mutant1->getHP() << " HP" << endl;
    cout << "13 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

    Enemy* godzilla = new Godzilla();
    cout << "Created enemy " << godzilla->getType() << " with " << godzilla->getHP() << " HP" << endl << endl;
    AWeapon* atomicBomb = new NuclearWeapon();

    me->setWeapon(atomicBomb);
    cout << "14 - Enemy " << godzilla->getType() << " has " << godzilla->getHP() << " HP" << endl;
    cout << "14 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

    me->recoverAP();					// восстанавливаем AP
    me->attack(godzilla);
    cout << "15 - Enemy " << godzilla->getType() << " has " << godzilla->getHP() << " HP" << endl;
    cout << "15 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

    me->recoverAP();                    // восстанавливаем AP до максимума
    me->attack(godzilla);
    cout << "16 - Enemy " << godzilla->getType() << " has " << godzilla->getHP() << " HP" << endl;
    cout << "16 - Character " << me->getName() << " has " << me->getAP() << "AP" << endl << endl;

    delete me;
    delete pf;
    delete pr;
    delete atomicBomb;
    delete scorp1;
    delete mutant1;
    delete godzilla;
}
