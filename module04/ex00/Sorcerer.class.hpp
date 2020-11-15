#ifndef SORCERER_H
#define SORCERER_H

#include <string>
#include <iostream>

class Sorcerer {
private:
	std::string name;
	std::string title;

public:
	Sorcerer(std::string n_name, std::string n_title);
	Sorcerer(const Sorcerer &sorc);
	~Sorcerer();

	Sorcerer &operator=(const Sorcerer &sorc);

	void				introduce() const;
	const std::string	&getName() const;
	const std::string	&getTitle() const;
};

std::ostream &operator<<(std::ostream &stream, const Sorcerer &sorc);

#endif
