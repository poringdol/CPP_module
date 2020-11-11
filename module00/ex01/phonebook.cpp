#include <iostream>
#include <string>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int	main(void) {
	Phonebook	phonebook;
	std::string	input;

	while (1) {
		std::cout << "Enter command : ";
		getline(std::cin, input, '\n');
		if (input == "EXIT") {
			exit(0);
		} else if (input == "ADD") {
			phonebook.input();
		} else if (input == "SEARCH") {
			phonebook.list();
			std::cout << "Enter contact index: ";
			int	index;
			std::cin >> index;
			if (!std::cin || index < 0 || index >= BOOK_SIZE) {
				std::cout << "Wrong index. Shoud be >= 0 && < 8" << std::endl;
       			std::cin.clear();
				while (std::cin.get() != '\n');
			} else {
				std::cout << std::endl;
				phonebook.print(index);
				std::cout << std::endl;
			}
		} else {
			std::cerr << "Wrong command" << std::endl;
		}
	}
}
