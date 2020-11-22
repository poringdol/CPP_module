#include <string>
#include <iostream>
#include <cstdlib>
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main() {
	srand(time(0));
	FragTrap fragtrap("\033[0;32mPONY\033[0;0m");
	ScavTrap scavtrap("\033[0;34mPRETTY\033[0;0m");
	std::string frag("\033[0;31mFRAG\033[0;0m");

	fragtrap.rangedAttack(frag);
	fragtrap.meleeAttack(frag);
	fragtrap.takeDamage(5);
	fragtrap.takeDamage(65);
	fragtrap.takeDamage(65);
	fragtrap.rangedAttack(frag);
	fragtrap.beRepaired(60);
	fragtrap.beRepaired(60);
	fragtrap.rangedAttack(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.beRepaired(60);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.vaulthunter_dot_exe(frag);

	scavtrap.rangedAttack(frag);
	scavtrap.meleeAttack(frag);
	scavtrap.takeDamage(3);
	scavtrap.takeDamage(65);
	scavtrap.takeDamage(65);
	scavtrap.rangedAttack(frag);
	scavtrap.beRepaired(60);
	scavtrap.beRepaired(60);
	scavtrap.rangedAttack(frag);
	scavtrap.challengeNewcomer(frag);
	scavtrap.challengeNewcomer(frag);
	scavtrap.challengeNewcomer(frag);
	scavtrap.beRepaired(150);
	scavtrap.challengeNewcomer(frag);
	scavtrap.challengeNewcomer(frag);
	scavtrap.beRepaired(100);
	scavtrap.challengeNewcomer(frag);
	scavtrap.challengeNewcomer(frag);
}