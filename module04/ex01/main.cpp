#include <iostream>
#include "AWeapon.class.hpp"
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"
#include "Enemy.class.hpp"
#include "SuperMutant.class.hpp"
#include "RadScorpion.class.hpp"
#include "Character.class.hpp"

int main(){
	Character* me = new Character("me");
	std::cout << *me;					// создали персонажа
	std::cout << "1" << std::endl;
	
	Enemy* scorp1 = new RadScorpion();	// создали врага класса RadScorpion
	me->attack(scorp1);					// нет атаки, т.к. не взяли оружие		
	std::cout << "2" << std::endl;
	
	AWeapon* pr = new PlasmaRifle();
	me->equip(pr);						// взяли оружие
	me->attack(scorp1);
	std::cout << "3" << std::endl;

	pr->setName("Plasma Bazooqa");		// проверка, что equip() принимает указатель, а не копирует объект
	me->attack(scorp1);
	std::cout << "4" << std::endl;
	me->attack(scorp1);
	std::cout << "5" << std::endl;
	me->attack(scorp1);					// враг умирает
	std::cout << "6" << std::endl;
	me->attack(scorp1);
	std::cout << "7" << std::endl;
	me->attack(scorp1);
	std::cout << "8" << std::endl;

	Enemy* mutant1 = new SuperMutant(); // новый враг класса SuperMutant
	std::cout << "9" << std::endl;
	me->attack(mutant1);
	AWeapon* pf = new PowerFist();
	me->equip(pf);						// Смена оружия
	std::cout << "10" << std::endl;
	me->attack(mutant1);				// у персонажа кончились AP
	std::cout << "11" << std::endl;
	me->attack(mutant1);
	std::cout << "12" << std::endl;
	me->recoverAP();					// восстанавливаем AP
	me->recoverAP();
	me->recoverAP();
	me->attack(mutant1);
	std::cout << "13" << std::endl;
	me->attack(mutant1);
	std::cout << "14" << std::endl;
	me->attack(mutant1);				// врга умер
	std::cout << "15" << std::endl;
	me->attack(mutant1);
	std::cout << "16" << std::endl;
}
