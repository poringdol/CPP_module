#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.class.hpp"

Contact::Contact(void) {
	Contact::clear();
}

int Contact::get_not_empty() const {
	return (not_empty);
}

std::string	Contact::get_first_name() const {
	return (first_name);
}

std::string Contact::get_last_name() const {
	return (last_name);
}

std::string Contact::get_nickname() const {
	return (nickname);
}

void Contact::clear(void) {
	not_empty = 0;
	first_name.clear();
	last_name.clear();
	nickname.clear();
	login.clear();
	postal_address.clear();
	email_address.clear();
	phone_number.clear();
	birthday_date.clear();
	favorite_meal.clear();
	underwear_color.clear();
	darkest_secret.clear();
}

void Contact::input(void) {
	// std::cout << "First name: ";std::cin >> first_name;			std::cin.ignore();
	// std::cout << "Last name: ";	std::cin >> last_name;			std::cin.ignore();
	// std::cout << "Nickname: ";	std::cin >> nickname;			std::cin.ignore();
	// std::cout << "Login: ";		std::cin >> login;				std::cin.ignore();
	// std::cout << "Postal: ";	std::cin >> postal_address;		std::cin.ignore();
	// std::cout << "Email: ";		std::cin >> email_address;		std::cin.ignore();
	// std::cout << "Pnone: ";		std::cin >> phone_number;		std::cin.ignore();
	// std::cout << "Birthday: ";	std::cin >> birthday_date;		std::cin.ignore();
	// std::cout << "Favor meal: ";std::cin >> favorite_meal;		std::cin.ignore();
	// std::cout << "Underwear: ";	std::cin >> underwear_color;	std::cin.ignore();
	// std::cout << "Secret: ";	std::cin >> darkest_secret;

	// std::cin.ignore();
	std::cout << "First name: ";	getline(std::cin, first_name, '\n');
	std::cout << "Last name: ";		getline(std::cin, last_name, '\n');
	std::cout << "Nickname: ";		getline(std::cin, nickname, '\n');
	std::cout << "Login: ";			getline(std::cin, login, '\n');
	std::cout << "Postal: ";		getline(std::cin, postal_address, '\n');
	std::cout << "Email: ";			getline(std::cin, email_address, '\n');
	std::cout << "Pnone: ";			getline(std::cin, phone_number, '\n');
	std::cout << "Birthday: ";		getline(std::cin, birthday_date, '\n');
	std::cout << "Favor meal: ";	getline(std::cin, favorite_meal, '\n');
	std::cout << "Underwear: ";		getline(std::cin, underwear_color, '\n');
	std::cout << "Secret: ";		getline(std::cin, darkest_secret, '\n');
	not_empty = 1;
}

void Contact::print(void) const {
	if (!not_empty) {
		std::cout << "Empty contact" << std::endl;
		return;
	}
	std::cout << std::setw(17) << "First name: " << first_name << std::endl;
	std::cout << std::setw(17) << "Last name: " << last_name << std::endl;
	std::cout << std::setw(17) << "Nickname: " << nickname << std::endl;
	std::cout << std::setw(17) << "Login: " << login << std::endl;
	std::cout << std::setw(17) << "Postal address: " << postal_address << std::endl;
	std::cout << std::setw(17) << "Email address: " << email_address << std::endl;
	std::cout << std::setw(17) << "Pnone number: " << phone_number << std::endl;
	std::cout << std::setw(17) << "Birthday date: " << birthday_date << std::endl;
	std::cout << std::setw(17) << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << std::setw(17) << "Underwear color: " << underwear_color << std::endl;
	std::cout << std::setw(17) << "Darkest secret: " << darkest_secret << std::endl;
}

void Contact::print_width_10(const std::string &str) const {
	if (str.length() < 11) {
		std::cout << std::setw(10) << str;
	} else {
		std::cout << std::setw(10) << str.substr(0, 9) + ".";
	}
}

Contact::~Contact(void) {
	Contact::clear();
}