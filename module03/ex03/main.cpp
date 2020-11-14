#include <string>
#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"

int main() {
	NinjaTrap ninja("\033[0;36mLEO\033[0;0m");
	FragTrap fragtrap("\033[0;32mCUTE\033[0;0m");
	ScavTrap scavtrap("\033[0;34mPRETTY\033[0;0m");
	ClapTrap claptrap("\033[0;35mANON\033[0;0m");
	std::string frag("\033[0;31mFRAG\033[0;0m");

	ninja.ninjaShoebox(fragtrap, frag);
	ninja.ninjaShoebox(scavtrap, frag);
	ninja.ninjaShoebox(claptrap, frag);
	ninja.ninjaShoebox(ninja, frag);
}