#ifndef SORCERER_H
#define SORCERER_H

#include <string>
#include <iostream>
#include "Victim.class.hpp"

class Sorcerer {
private:
	std::string name;
	std::string title;
	
	Sorcerer();
	
	void setName(std::string);
	void setTitle(std::string);				

public:
	Sorcerer(std::string n_name, std::string n_title);
	Sorcerer(const Sorcerer &sorc);
	~Sorcerer();

	Sorcerer &operator=(const Sorcerer &);

	const std::string	&getName() const;
	const std::string	&getTitle() const;
	void				introduce() const;
	void				polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &stream, const Sorcerer &sorc);

#endif
