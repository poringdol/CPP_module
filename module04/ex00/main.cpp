#include <string>
#include <iostream>
#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"
#include "Peon.class.hpp"

int main(){
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
}
