#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "SuperTrap.class.hpp"

int main() {
	srand(time(0));
	SuperTrap supertrap("\033[0;34mSUPER\033[0;0m");
	NinjaTrap ninja("\033[0;36mLEO\033[0;0m");
	FragTrap fragtrap("\033[0;32mPONY\033[0;0m");
	ClapTrap claptrap("\033[0;35mANON\033[0;0m");
	std::string frag("\033[0;31mFRAG\033[0;0m");

	supertrap.rangedAttack(frag);
	supertrap.meleeAttack(frag);
	supertrap.takeDamage(5);
	supertrap.takeDamage(65);
	supertrap.vaulthunter_dot_exe(frag);
	supertrap.vaulthunter_dot_exe(frag);
	supertrap.ninjaShoebox(ninja, frag);
	supertrap.ninjaShoebox(fragtrap, frag);
	supertrap.ninjaShoebox(claptrap, frag);
	// supertrap.beRepaired(60);
	// supertrap.vaulthunter_dot_exe(frag);
	// supertrap.vaulthunter_dot_exe(frag);

}