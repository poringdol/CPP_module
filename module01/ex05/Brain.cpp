#include <string>
#include <sstream>
#include "Brain.hpp"

Brain::Brain() {
	volume = 0;
	weight = 0;
}

Brain::Brain(int n_volume, int n_weight) {
	volume = n_volume;
	weight = n_weight;
}

std::string Brain::identify() const {
	std::ostringstream oss;
	oss << this;
	return (oss.str());
}

Brain::~Brain() {
	return;
}