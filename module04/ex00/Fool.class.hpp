#ifndef FOOL_H
#define FOOL_H

#include <string>
#include <iostream>
#include "Victim.class.hpp"

class Fool : public Victim {
private:
	std::string name;
	
	Fool();

	void setName(std::string);

public:
	Fool(std::string);
	Fool(const Fool &);
	Fool &operator=(const Fool &);
	virtual ~Fool() override;

	std::string	getName() const;
	void		getPolymorphed() const override;
};

#endif