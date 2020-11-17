#include <iostream>
#include <string>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int	main(void) {
	Phonebook	phonebook;
	std::string	input;

	while (1) {
		std::cout << "Enter command : ";
		if (!getline(std::cin, input, '\n')) {
			std::cout << std::endl;
			exit(0);
		}
		if (input == "EXIT") {
			exit(0);
		} else if (input == "ADD") {
			phonebook.input();
		} else if (input == "SEARCH") {
			phonebook.list();
			int	index = -1;
			while (1) {
				std::cout << "Enter contact index: ";
				std::cin >> index;
				if (std::cin.eof()) {
					std::cout << std::endl;
					exit(0);
				}
				if (!std::cin || index < 0 || index >= BOOK_SIZE) {
					std::cout << "Wrong input. Index shoud be integer >= 0 && < "<< BOOK_SIZE << std::endl;
					std::cin.clear();
					while (std::cin.get() != '\n');
				} else {
					std::cin.ignore();
					break;
				}
			}
			phonebook.print(index);
		} else {
			std::cerr << "Wrong command" << std::endl;
		}
	}
}
