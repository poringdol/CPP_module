#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain {
public:
	Brain();
	Brain(int n_volume, int n_weight);
	std::string identify() const;
	~Brain();

private:
	int volume;
	int weight;
};

#endif