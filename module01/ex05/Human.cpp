#include "Human.hpp"

Human::Human() {
	Brain brain;
}

Human::Human(int n_volume, int n_weight) {
	Brain brain(n_volume, n_weight);
}

const Brain &Human::getBrain() const {
	return (brain);
}
std::string Human::identify() const {
	return (brain.identify());
}