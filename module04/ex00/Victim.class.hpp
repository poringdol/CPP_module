#ifndef VICTIM_H
#define VICTIM_H

#include <string>
#include <iostream>

class Victim {
private:
	std::string name;

public:
	Victim(std::string n_name);
	Victim(const Victim &victim);
	~Victim();

	Victim &operator=(const Victim &victim);

	void				introduce() const;
	const std::string	&getName() const;
};

std::ostream &operator<<(std::ostream &stream, const Victim &victim);

#endif