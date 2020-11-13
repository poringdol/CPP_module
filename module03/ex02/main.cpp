#include <string>
#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main() {
	srand(time(0));
	FragTrap fragtrap("\033[0;32mCUTE\033[0;0m");
	ScavTrap scavtrap("\033[0;34mPRETTY\033[0;0m");
	std::string frag("\033[0;31mFRAG\033[0;0m");

	fragtrap.rangedAttack(frag);
	scavtrap.rangedAttack(frag);
	fragtrap.meleeAttack(frag);
	fragtrap.meleeAttack(frag);
	scavtrap.meleeAttack(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	scavtrap.meleeAttack(frag);
	scavtrap.challengeNewcomer(frag);
	fragtrap.takeDamage(45);
	fragtrap.beRepaired(30);
	scavtrap.takeDamage(45);
	scavtrap.beRepaired(30);
	scavtrap.meleeAttack(frag);
	fragtrap.meleeAttack(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	scavtrap.rangedAttack(frag);
	scavtrap.challengeNewcomer(frag);
	scavtrap.rangedAttack(frag);
	fragtrap.rangedAttack(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	scavtrap.challengeNewcomer(frag);
	fragtrap.rangedAttack(frag);
	scavtrap.challengeNewcomer(frag);
	fragtrap.meleeAttack(frag);
	fragtrap.vaulthunter_dot_exe(frag);	
	scavtrap.meleeAttack(frag);
	scavtrap.challengeNewcomer(frag);
	scavtrap.takeDamage(45);
	scavtrap.takeDamage(5);
	scavtrap.takeDamage(105);
	fragtrap.takeDamage(45);
	fragtrap.takeDamage(5);
	fragtrap.takeDamage(105);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.meleeAttack(frag);
	fragtrap.beRepaired(60);
	scavtrap.takeDamage(45);
	scavtrap.meleeAttack(frag);
	scavtrap.beRepaired(130);
	fragtrap.takeDamage(45);
	fragtrap.meleeAttack(frag);
	fragtrap.beRepaired(130);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	fragtrap.vaulthunter_dot_exe(frag);
	scavtrap.challengeNewcomer(frag);
	scavtrap.meleeAttack(frag);
	scavtrap.beRepaired(60);
	scavtrap.challengeNewcomer(frag);
	scavtrap.challengeNewcomer(frag);
	scavtrap.challengeNewcomer(frag);
}