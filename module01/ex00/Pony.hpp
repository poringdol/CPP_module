#ifndef PONY_H
#define PONY_H

#include <string>

class Pony {

public:
	Pony(void);

	std::string	name;
	std::string	color;
	int			age;

	~Pony(void);
};

void ponyOnTheHeap(void);
void ponyOnTheStack(void);


#endif