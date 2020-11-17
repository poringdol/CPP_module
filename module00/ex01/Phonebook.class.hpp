#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.class.hpp"

#define BOOK_SIZE 8

class Phonebook {
private:
	Contact	contact[BOOK_SIZE];

public:
	Phonebook(void);

	void clear(void);
	void input(void);
	void list(void) const;
	void print(int i) const;

	~Phonebook(void);
};

#endif