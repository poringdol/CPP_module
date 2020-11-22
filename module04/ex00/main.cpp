#include <string>
#include <iostream>
#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"
#include "Peon.class.hpp"
#include "Dupe.class.hpp"
#include "Fool.class.hpp"

int main(){
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Dupe raph("Raph");
	Fool mick("Mick");

	std::cout << robert << jim << joe << raph << mick;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(raph);
	robert.polymorph(mick);
}
