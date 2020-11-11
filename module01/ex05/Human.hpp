#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Brain.hpp"

class Human {
public:
	Human();
	Human(int n_volume, int n_weight);
	const Brain& getBrain() const;
	std::string identify() const;

private:
	Brain brain;
};

#endif