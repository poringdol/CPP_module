#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
private:
	int not_empty;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;

public:
	Contact(void);
	~Contact(void);

	int			get_not_empty() const;
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	void clear(void);
	void input(void);
	void print(void) const;
	void print_width_10(const std::string &str) const;
};

#endif