#ifndef DUPE_H
#define DUPE_H

#include <string>
#include <iostream>
#include "Victim.class.hpp"

class Dupe : public Victim {
private:
	std::string name;
	
	Dupe();

	void setName(std::string);

public:
	Dupe(std::string);
	Dupe(const Dupe &);
	~Dupe();

	Dupe &operator=(const Dupe &);

	std::string	getName() const;
	void		getPolymorphed() const /*override*/;
};

std::ostream &operator<<(std::ostream &stream, const Dupe &dupe);

#endif