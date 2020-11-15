#ifndef SORCERER_H
#define SORCERER_H

#include <string>
#include <iostream>
#include "Victim.class.hpp"

class Sorcerer: public Victim {
private:
	Sorcerer();
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
	void				polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &stream, const Sorcerer &sorc);

#endif
