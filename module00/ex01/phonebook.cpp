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
			std::cout << "Enter contact index: ";
			int	index;
			std::cin >> index;
			std::cin.ignore();
			if (!std::cin || index < 0 || index >= BOOK_SIZE) {
				std::cout << "Wrong index. Shoud be >= 0 && < 8" << std::endl;
				continue;
			}
			phonebook.print(index);
		} else {
			std::cerr << "Wrong command" << std::endl;
		}
	}
}
