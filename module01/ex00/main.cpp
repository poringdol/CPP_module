#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void) {
	Pony *new_pony = new Pony;

	std::cout << "Input pony name: ";
	getline(std::cin, new_pony->name, '\n');
	std::cout << "Input pony color: ";
	getline(std::cin, new_pony->color, '\n');
	while (1) {
		std::cout << "Input pony age: ";
		std::cin >> new_pony->age;
		if (std::cin.eof()) {
			std::cout << std::endl;
			exit(0);
		}
		if (!std::cin || new_pony->age < 0) {
			std::cout << "Wrong age. Index shoud be integer >= 0" << std::endl;
			std::cin.clear();
			while (std::cin.get() != '\n');
		} else {
			std::cin.ignore();
			break;
		}
	}

	std::cout << "Pony name - "		<< new_pony->name << ", " <<
				 "pony age - "		<< new_pony->age << ", " <<
				 "pony color - "	<< new_pony->color << std::endl;
	delete new_pony;
}

void ponyOnTheStack(void) {
	Pony new_pony;

	std::cout << "Input pony name: ";
	getline(std::cin, new_pony.name, '\n');
	std::cout << "Input pony color: ";
	getline(std::cin, new_pony.color, '\n');
	while (1) {
		std::cout << "Input pony age: ";
		std::cin >> new_pony.age;
		if (std::cin.eof()) {
			std::cout << std::endl;
			exit(0);
		}
		if (!std::cin || new_pony.age < 0) {
			std::cout << "Wrong age. Index shoud be integer >= 0" << std::endl;
			std::cin.clear();
			while (std::cin.get() != '\n');
		} else {
			std::cin.ignore();
			break;
		}
	}

	std::cout << "Pony name - "		<< new_pony.name << ", " <<
				 "pony age - "		<< new_pony.age << ", " <<
				 "pony color - "	<< new_pony.color << std::endl;
}

int	main(void) {
	
	ponyOnTheHeap();

	std::cout << std::endl;
	
	ponyOnTheStack();
}
