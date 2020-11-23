#include <iostream>
#include "AWeapon.class.hpp"
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"
#include "Enemy.class.hpp"
#include "SuperMutant.class.hpp"
#include "RadScorpion.class.hpp"
#include "Character.class.hpp"

int main() {
	SuperMutant a;
	SuperMutant b(a);
	std::cout << "1 " << a.getHP() << std::endl;
	a.takeDamage(-100);
	std::cout << "2 " <<a.getHP() << std::endl;
	a.takeDamage(150);
	std::cout << "3 " << a.getHP() << std::endl;
	a.takeDamage(150);
	std::cout << "4 " << a.getHP() << std::endl;
	a.takeDamage(1);
	std::cout << "5 " << a.getHP() << std::endl;
}