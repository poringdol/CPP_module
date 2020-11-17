#ifndef VICTIM_H
#define VICTIM_H

#include <string>
#include <iostream>

class Victim {
protected:
	std::string name;

	Victim();

	void setName(std::string);

public:
	Victim(std::string);
	Victim(const Victim &);
	~Victim();

	Victim &operator=(const Victim &victim);

	const std::string	&getName() const;
	void				introduce() const;
	virtual void		getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &stream, const Victim &victim);

#endif