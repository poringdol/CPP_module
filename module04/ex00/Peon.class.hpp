#ifndef PEON_H
#define PEON_H

#include <string>
#include <iostream>
#include "Victim.class.hpp"

class Peon : public Victim {
private:
	std::string name;
	
	Peon();

	void setName(std::string);

public:
	Peon(std::string);
	Peon(const Peon &);
	Peon &operator=(const Peon &);
	virtual ~Peon() override;

	std::string	getName() const;
	void		getPolymorphed() const override;
};

#endif