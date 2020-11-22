#ifndef PONY_H
#define PONY_H

#include <string>

class Pony {

public:
	Pony(void);

	std::string	name = "New pony";
	std::string	color = "";
	int			age = 0;

	~Pony(void);
};

void ponyOnTheHeap(void);
void ponyOnTheStack(void);


#endif