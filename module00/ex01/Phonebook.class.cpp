#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.class.hpp"

Phonebook::Phonebook(void) {
	Phonebook::clear();
}

void Phonebook::clear(void) {
	for (int i = 0; i < BOOK_SIZE; i++) {
		contact[i].clear();
	}
}

void Phonebook::input(void) {
	int i;

	for (i = 0; contact[i].not_empty && i < BOOK_SIZE; i++)
		;
	if (i < BOOK_SIZE)
		contact[i].input();
	else
		std::cerr << "Phonebook::input: Can't input. Phonebook full" << std::endl;
}

void Phonebook::list(void) const {
	for (int i = 0; i < BOOK_SIZE && contact[i].not_empty; i++) {
		std::cout << std::setw(10) << i << "|";
		contact[i].print_width_10(contact[i].first_name);
		std::cout << "|";
		contact[i].print_width_10(contact[i].last_name);
		std::cout << "|";
		contact[i].print_width_10(contact[i].nickname);
		std::cout << std::endl;
	}
}

void Phonebook::print(int i) const {
	contact[i].print();
}

Phonebook::~Phonebook(void) {
	Phonebook::clear();
}