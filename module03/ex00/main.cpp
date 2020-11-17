#include <string>
#include <iostream>
#include "FragTrap.class.hpp"

int main() {
	srand(time(0));
	FragTrap claptrap("\033[0;32mPONY\033[0;0m");
	std::string frag("\033[0;31mFRAG\033[0;0m");

	claptrap.rangedAttack(frag);
	claptrap.meleeAttack(frag);
	claptrap.meleeAttack(frag);
	claptrap.vaulthunter_dot_exe(frag);
	claptrap.takeDamage(45);
	claptrap.beRepaired(30);
	claptrap.meleeAttack(frag);
	claptrap.vaulthunter_dot_exe(frag);
	claptrap.vaulthunter_dot_exe(frag);
	claptrap.rangedAttack(frag);
	claptrap.vaulthunter_dot_exe(frag);
	claptrap.rangedAttack(frag);
	claptrap.meleeAttack(frag);
	claptrap.vaulthunter_dot_exe(frag);
	claptrap.takeDamage(45);
	claptrap.takeDamage(5);
	claptrap.takeDamage(105);
	claptrap.vaulthunter_dot_exe(frag);
	claptrap.meleeAttack(frag);
	claptrap.beRepaired(60);
	claptrap.takeDamage(45);
	claptrap.meleeAttack(frag);
	claptrap.beRepaired(130);
	claptrap.vaulthunter_dot_exe(frag);
	claptrap.vaulthunter_dot_exe(frag);
	claptrap.vaulthunter_dot_exe(frag);
}