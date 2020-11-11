#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void) {
	Pony *new_pony = new Pony;

	std::cout << "Input pony name: ";
	std::cin >> new_pony->name;
	std::cout << "Input pony color: ";
	std::cin >> new_pony->color;
	std::cout << "Input pony age: ";
	std::cin >> new_pony->age;

	std::cout << "Pony name - "		<< new_pony->name << ", " <<
				 "pony age - "		<< new_pony->age << ", " <<
				 "pony color - "	<< new_pony->color << std::endl;
	delete new_pony;
}

void ponyOnTheStack(void) {
	Pony new_pony;

	std::cout << "Input pony name: ";
	std::cin >> new_pony.name;
	std::cout << "Input pony color: ";
	std::cin >> new_pony.color;
	std::cout << "Input pony age: ";
	std::cin >> new_pony.age;

	std::cout << "Pony name - "		<< new_pony.name << ", " <<
				 "pony age - "		<< new_pony.age << ", " <<
				 "pony color - "	<< new_pony.color << std::endl;
}

int	main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
}
