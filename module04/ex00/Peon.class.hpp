#ifndef PEON_H
#define PEON_H

#include <string>
#include <iostream>
#include "Victim.class.hpp"

class Peon : public Victim {
private:
	Peon();
	std::string name;

public:
	Peon(std::string n_name);
	Peon(const Peon &Peon);
	~Peon();

	Peon &operator=(const Peon &peon);

	void getPolymorphed() const override;
};

std::ostream &operator<<(std::ostream &stream, const Peon &peon);

#endif